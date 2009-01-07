using System;

namespace WikiTools.Access
{
    public interface IWiki : IDisposable
    {
        AccessBrowser ab { get; }
        /// <summary>
        /// URI of wiki in format http://mediawiki.org/w
        /// </summary>
        string WikiURI { get; //set { wikiuri = value; }
        }

        /// <summary>
        /// Logs in
        /// </summary>
        /// <param name="username">User name</param>
        /// <param name="password">User password</param>
        /// <returns>Succes</returns>
        bool Login(string username, string password);

        /// <summary>
        /// Logs out
        /// </summary>
        void Logout();

        /// <summary>
        /// Checks if we are currently logged in
        /// </summary>
        /// <returns>True, if we are logged in</returns>
        bool IsLoggedIn();

        /// <summary>
        /// Gets message from message cache
        /// </summary>
        /// <param name="messageName">Message name</param>
        /// <returns>Message content</returns>
        string GetMessage(string messageName);

        /// <summary>
        /// Updates Message Cache
        /// </summary>
        void UpdateMessageCache();

        /// <summary>
        /// Returns wiki capabilities (version and extensions)
        /// </summary>
        WikiCapabilities Capabilities { get; }

        /// <summary>
        /// Instance of Namespaces class
        /// </summary>
        /// <seealso cref="Namespaces"/>
        Namespaces NamespacesUtils { get; }

        /// <summary>
        /// Message cache
        /// </summary>
        MessageCache Messages { get; }

        /// <summary>
        /// Statistics for this site (see Special:Statistics?action=raw)
        /// </summary>
        Statistics Statistics { get; }

        /// <summary>
        /// Creates a page on wiki if it doesn't exists
        /// </summary>
        /// <param name="name">Page name</param>
        /// <param name="text">Page text</param>
        /// <param name="summary">Page creation summry</param>
        void CreatePage(string name, string text, string summary);

        /// <summary>
        /// Creates a page on wiki if it doesn't exists
        /// </summary>
        /// <param name="name">Page name</param>
        /// <param name="text">Page text</param>
        void CreatePage(string name, string text);

        /// <summary>
        /// Creates a page on wiki
        /// </summary>
        /// <param name="name">Page name</param>
        /// <param name="text">Page text</param>
        /// <param name="overwrite">Overwrite page, if it already exists</param>
        void CreatePage(string name, string text, bool overwrite);

        /// <summary>
        /// Creates a page on wiki
        /// </summary>
        /// <param name="name">Page name</param>
        /// <param name="text">Page text</param>
        /// <param name="summary">Page creation summry</param>
        /// <param name="overwrite">Overwrite page, if it already exists</param>
        void CreatePage(string name, string text, string summary, bool overwrite);

        /// <summary>
        /// Reads user talk page to remove new message notification
        /// </summary>
        void ReadNewMessages();

        /// <summary>
        /// Returns info about current user
        /// </summary>
        CurrentUser CurrentUserInfo { get; }

        /// <summary>
        /// Release all resources used by Wiki object
        /// </summary>
        void Dispose();

        /// <summary>
        /// Retrieves all pages list from wiki
        /// </summary>
        /// <param name="startfrom">Starts enumerating from this pages</param>
        /// <param name="limit">Limit of pages to get</param>
        /// <param name="filter">Redirects filter</param>
        /// <param name="namespaceID">Namespace to enumerate</param>
        /// <returns>All pages list</returns>
        string[] GetAllPages(string startfrom, int limit, PageTypes filter, int namespaceID);

        /// <summary>
        /// Retrieves all pages list from wiki, that starts from specified prefix
        /// </summary>
        /// <param name="prefix">Prefix</param>
        /// <param name="filter">Redirects filter</param>
        /// <param name="namespaceID">Namespace to enumerate</param>
        /// <returns>All pages list</returns>
        string[] GetPrefixIndex(string prefix, PageTypes filter, int namespaceID);
    }
}