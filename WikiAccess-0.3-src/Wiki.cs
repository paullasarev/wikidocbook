/**********************************************************************************
 * Wiki class of WikiAccess Library                                               *
 * Copyright (C) 2007 Vasiliev V. V.                                              *
 *                                                                                *
 * This program is free software: you can redistribute it and/or modify           *
 * it under the terms of the GNU General Public License as published by           *
 * the Free Software Foundation, either version 3 of the License, or              *
 * (at your option) any later version.                                            *
 *                                                                                *
 * This program is distributed in the hope that it will be useful,                *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of                 *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                  *
 * GNU General Public License for more details.                                   *
 *                                                                                *
 * You should have received a copy of the GNU General Public License              *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>           *
 **********************************************************************************/
using System;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Text;
using System.Web;

namespace WikiTools.Access
{
	/// <summary>
	/// Provides access to wiki
	/// </summary>
	public partial class Wiki : IWiki
	{
		string wikiURI;
        internal AccessBrowser _ab;
        public AccessBrowser ab {get { return _ab;} }
        internal CookieContainer cookies;
		MessageCache mcache;
		string mcachepath, nscachepath, capacachepath;
		internal Namespaces ns;
		WikiCapabilities capabilities;
		CurrentUser cu;

		/// <summary>
		/// URI of wiki in format http://mediawiki.org/w
		/// </summary>
		public string WikiURI
		{
			get { return wikiURI; }
			//set { wikiuri = value; }
		}

		/// <summary>
		/// Initializes new instance of wiki object. Message cache will be stored in current directory
		/// </summary>
		/// <param name="uri">URI of wiki. <see cref="Wiki.WikiURI"/></param>
		public Wiki(string uri) : this(uri, ".")
		{
		}

        /////<summary>
        ///// Test constructor for mocking the wiki
        /////</summary>
        //public Wiki()
        //{
            
        //}

		/// <summary>
		/// Initializes new instance of wiki object.
		/// </summary>
		/// <param name="uri">URI of wiki. <see cref="Wiki.WikiURI"/></param>
		/// <param name="cachedir">Folder where Message cache will be stored</param>
		public Wiki(string uri, string cachedir, string login, string password)
		{
			wikiURI = uri;
			_ab = new AccessBrowser(this);
			mcachepath = cachedir + "/" + MessageCache.MkName(uri);
			nscachepath = cachedir + "/" + Namespaces.MkName(uri);
			capacachepath = cachedir + "/" + new Uri(uri).Host + ".capabilities";

			if (File.Exists(mcachepath))
				mcache = new MessageCache(mcachepath);
			else
			{
				mcache = new MessageCache(this);
				mcache.SaveToFile(mcachepath);
			}

			if (File.Exists(nscachepath))
				ns = new Namespaces(nscachepath);
			else
			{
				ns = new Namespaces(this);
				ns.SaveToFile(nscachepath);
			}



			cookies = new CookieContainer();
			cu = new CurrentUser(this);

			if (login != "")
				Login(login, password);

			InitCapabilities();
		}

		public void InitCapabilities()
		{
			if (File.Exists(capacachepath))
				capabilities.FromString(File.ReadAllText(capacachepath));
			else
			{
				capabilities = LoadCapabilities();
				File.WriteAllText(capacachepath, capabilities.ToString());
			}
		}

		public Wiki(string uri, string cachedir): this(uri, cachedir, "", "")
		{
		}

		#region Login Functions

		/// <summary>
		/// Logs in
		/// </summary>
		/// <param name="username">User name</param>
		/// <param name="password">User password</param>
		/// <returns>Succes</returns>
		public bool Login(string username, string password)
		{
			Dictionary<string, string> data = new Dictionary<string, string>();
			data.Add("wpName", username);
			data.Add("wpPassword", password);
			data.Add("wpRemember", "1");
			data.Add("wpLoginAttempt", mcache["login"]);
			ab.PostQuery("index.php?title=Special:Userlogin&action=submitlogin&type=login", data);
			cookies.Add(ab.cookiesGotInLastQuery);
			//cu.Reload();
			return ab.IsLoggedIn();
		}

		/// <summary>
		/// Logs out
		/// </summary>
		public void Logout()
		{
			cookies = new CookieContainer();
		}

		/// <summary>
		/// Checks if we are currently logged in
		/// </summary>
		/// <returns>True, if we are logged in</returns>
		public bool IsLoggedIn()
		{
			return ab.IsLoggedIn();
		}

		#endregion

		#region Cache Functions

		/// <summary>
		/// Gets message from message cache
		/// </summary>
		/// <param name="messageName">Message name</param>
		/// <returns>Message content</returns>
		public string GetMessage(string messageName)
		{
			return mcache.GetMessage(messageName);
		}

		/// <summary>
		/// Updates Message Cache
		/// </summary>
		public void UpdateMessageCache()
		{
			mcache = new MessageCache(this);
			mcache.SaveToFile(mcachepath);
			Namespaces.SaveToFile(nscachepath, Namespaces.GetNamespaces(this));
		}

		#endregion

		/// <summary>
		/// Returns wiki capabilities (version and extensions)
		/// </summary>
		public WikiCapabilities Capabilities
		{
			get
			{
				return capabilities;
			}
		}

		/// <summary>
		/// Instance of Namespaces class
		/// </summary>
		/// <seealso cref="Namespaces"/>
		public Namespaces NamespacesUtils
		{
			get
			{
				return ns;
			}
		}

		/// <summary>
		/// Message cache
		/// </summary>
		public MessageCache Messages
		{
			get
			{
				return mcache;
			}
		}

		/// <summary>
		/// Statistics for this site (see Special:Statistics?action=raw)
		/// </summary>
		public Statistics Statistics
		{
			get
			{
				Statistics result = new Statistics();
				string statstr = ab.DownloadPage("index.php?title=Special:Statistics&action=raw");
				string[] _stats = statstr.Split(';');
				Dictionary<string, int> stats = new Dictionary<string,int>();
				for (int i = 0; i < _stats.Length; i++)
					stats.Add(_stats[i].Split('=')[0], Int32.Parse(_stats[i].Split('=')[1]));
				result.Admins = stats["admins"];
				result.Edits = stats["edits"];
				result.GoodPages = stats["good"];
				result.Images = stats["images"];
				result.Jobs = stats["jobs"];
				result.TotalPages = stats["total"];
				result.Users = stats["users"];
				result.Views = stats["views"];
				return result;
			}
		}
		#region CreatePage versions

		/// <summary>
		/// Creates a page on wiki if it doesn't exists
		/// </summary>
		/// <param name="name">Page name</param>
		/// <param name="text">Page text</param>
		/// <param name="summary">Page creation summry</param>
		public void CreatePage(string name, string text, string summary)
		{
			CreatePage(name, text, summary, false);
		}

		/// <summary>
		/// Creates a page on wiki if it doesn't exists
		/// </summary>
		/// <param name="name">Page name</param>
		/// <param name="text">Page text</param>
		public void CreatePage(string name, string text)
		{
			CreatePage(name, text, "", false);
		}

		/// <summary>
		/// Creates a page on wiki
		/// </summary>
		/// <param name="name">Page name</param>
		/// <param name="text">Page text</param>
		/// <param name="overwrite">Overwrite page, if it already exists</param>
		public void CreatePage(string name, string text, bool overwrite)
		{
			CreatePage(name, text, "", overwrite);
		}

		#endregion

		/// <summary>
		/// Creates a page on wiki
		/// </summary>
		/// <param name="name">Page name</param>
		/// <param name="text">Page text</param>
		/// <param name="summary">Page creation summry</param>
		/// <param name="overwrite">Overwrite page, if it already exists</param>
		public void CreatePage(string name, string text, string summary, bool overwrite)
		{
			Page pg = new Page(this, name);
			if (!overwrite) 
				if (pg.Exists) return;
			pg.SetText(text, summary);
		}

		/// <summary>
		/// Reads user talk page to remove new message notification
		/// </summary>
		public void ReadNewMessages()
		{
			ab.PageName = "index.php?title=Special:Mytalk";
		}
		
		/// <summary>
		/// Returns info about current user
		/// </summary>
		public CurrentUser CurrentUserInfo
		{
			get
			{
				return cu;
			}
		}

		#region IDisposable Members

		/// <summary>
		/// Release all resources used by Wiki object
		/// </summary>
		public void Dispose()
		{
			_ab.Dispose();
			_ab = null;
		}

		#endregion
	}
}