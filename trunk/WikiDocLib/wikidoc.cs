/*
 * Created by SharpDevelop.
 * User: Павел
 * Date: 09.02.2008
 * Time: 10:26
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.IO;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Xml;

namespace WikiDocLib
{
	/// <summary>
	/// Description of MyClass.
	/// </summary>
	public class WikiDoc
	{
		[DllImport(@"flexbisonparse.dll", CharSet = CharSet.Ansi)]
		static extern String wikiparse_do_parse_stub(String text);

		public static string Wiki2Xml(string wikiText)
		{
			return wikiparse_do_parse_stub(wikiText);
		}

		public static XmlDocument Wiki2XmlDoc(string text)
		{
			string xmlText = Wiki2Xml(text);
			XmlDocument xmlDoc = new XmlDocument();
			xmlDoc.LoadXml(xmlText);
			return xmlDoc;
		}

		public static void PrintXmlTree(XmlNode xmlDoc, TextWriter outStream)
		{
			printXmlNode(xmlDoc, outStream, 0);
		}

		private static void printXmlNode(XmlNode rootNode, TextWriter outStream, int level)
		{
			levelWriteLine(level, outStream, "{0}: Name:<{1}> Attributes:<{2}> Value:<{3}>", rootNode.ToString()
			               , rootNode.Name, attributesString(rootNode.Attributes), rootNode.Value);

			foreach (XmlNode node in rootNode.ChildNodes)
			{
				printXmlNode(node, outStream, level + 1);
			}
		}

		private static string attributesString(XmlAttributeCollection attributes)
		{
			if (attributes == null)
				return "";
			StringWriter writer = new StringWriter();
			foreach(XmlAttribute attribute in attributes)
				writer.Write("{0}={1}", attribute.Name, attribute.Value);
			return writer.ToString();
		}

		private static void levelWriteLine(int level, TextWriter outStream, string format, params object[] args)
		{
			for(int i = 0; i < level; i++)
				outStream.Write("-");
			outStream.WriteLine(format, args);
		}
		
		public static XmlDocument MakeSections(XmlDocument xmlDoc)
		{
			XmlDocument newDoc = new XmlDocument();

			List<XmlNode> sections = new List<XmlNode>();
			XmlNode currentSection = StartSection(newDoc, sections, 0);
            XmlNode article = xmlDoc.SelectSingleNode("descendant::article");
			
			foreach (XmlNode node in article.ChildNodes)
			{
				XmlNode newNode = newDoc.ImportNode(node, true);
				if (node.Name == "heading")
				{
					XmlAttribute levelAttribute = node.Attributes["level"];
					if (levelAttribute == null)
						continue;
					int level = int.Parse(levelAttribute.Value);
					currentSection = StartSection(newDoc, sections, level);
					currentSection.AppendChild(newNode);
				}
				else
				{
					currentSection.AppendChild(newNode);
				}
			}
			
			return newDoc;
		}

        public static XmlDocument Wiki2SectionDoc(string text)
        {
            XmlDocument xmlDoc = Wiki2XmlDoc(text);
            return MakeSections(xmlDoc);
        }

		public static string Wiki2DocBook(string text)
		{
			XmlDocument xmlDoc = Wiki2SectionDoc(text);
			XmlDocument docBook = SectionDoc2DocBook(xmlDoc);
			return DocBook2Text(docBook);
		}

        public static XmlDocument SectionDoc2DocBook(XmlDocument xmlDoc)
        {
            XmlDocument newDoc = new XmlDocument();
            XmlNode root = xmlDoc.SelectSingleNode("/article");
            if (root == null)
                throw new Exception("article node not found");

            XmlNode articleNode = CreateArticleNode(newDoc, root);

            newDoc.AppendChild(articleNode);
            return newDoc;
        }

        public static XmlNode CreateArticleNode(XmlDocument newDoc, XmlNode root)
        {
            XmlNode articleNode = newDoc.CreateElement("article");
            //XmlNode articleinfo = newDoc.CreateElement("articleinfo");
            //if (title != null)
            //{
            //    XmlNode titleNode = newDoc.CreateElement("title");
            //    titleNode.AppendChild(newDoc.CreateTextNode(title));
            //    articleinfo.AppendChild(titleNode);
            //}
            //articleNode.AppendChild(articleinfo);

            FillParaSectionChields(newDoc, articleNode, root);
            return articleNode;
        }

        public static void FillParaSectionChields(XmlDocument newDoc, XmlNode outNode, XmlNode srcRoot)
        {
            foreach (XmlNode node in srcRoot.ChildNodes)
            {
                XmlNode newNode = null;
                switch (node.Name)
                {
                    case "paragraph":
                        AppendParaNode(newDoc, outNode, node);
                        continue;
                    case "section":
                        newNode = CreateSectionNode(newDoc, node);
                        break;
                    case "list":
                        newNode = CreateListNode(newDoc, node);
                        break;
                    case "preblock":
                        newNode = CreatePreLinesBlockNode(newDoc, node);
                        break;
                    case "table":
                        newNode = CreateTableNode(newDoc, node);
                        break;
                }
                if (newNode != null)
                    outNode.AppendChild(newNode);
            }
        }

        private static int countTableColumns(XmlNode tableNode)
        {
            int maxColNumber = 0;
            XmlNodeList rows = tableNode.SelectNodes("tablerow");
            foreach (XmlNode row in rows)
            {
                XmlNodeList cells = row.SelectNodes("tablecell");
                int rowColNumber = 0;
                foreach (XmlNode cell in cells)
                {
                    System.Collections.Generic.Dictionary<string, string> attributes = buildAttributes(cell);
                    string colspan;
                    if (attributes.TryGetValue("colspan", out colspan))
                        rowColNumber += int.Parse(colspan);
                    else
                        rowColNumber++;
                }
                if (rowColNumber > maxColNumber)
                    maxColNumber = rowColNumber;
            }
            return maxColNumber;
        }

        private static Dictionary<string, string> buildAttributes(XmlNode cell)
        {
            Dictionary<string, string> dict = new Dictionary<string, string>();
            XmlNodeList attrs = cell.SelectNodes("attrs/attr");
            foreach (XmlNode attrNode in attrs)
            {
                XmlAttribute attr = attrNode.Attributes["name"];
                string value = attrNode.InnerText;
                dict[attr.Value] = value;
            }

            return dict;
        }

        public static XmlNode CreateTableNode(XmlDocument newDoc, XmlNode tableNode)
        {
            int colNumber = countTableColumns(tableNode);
            
            XmlNode tgroupNode = newDoc.CreateElement("tgroup");
            addAttribute(newDoc, tgroupNode, "cols", colNumber.ToString());

            XmlNode outTableNode = newDoc.CreateElement("table");
            outTableNode.AppendChild(tgroupNode);
            
            return outTableNode;
        }

        public static XmlNode CreatePreBlockNode(XmlDocument newDoc, XmlNode node)
        {
            XmlNode programlistingNode = newDoc.CreateElement("programlisting");
            FillParaContents(newDoc, programlistingNode, node);
            return programlistingNode;
        }

        public static XmlNode CreatePreLinesBlockNode(XmlDocument newDoc, XmlNode node)
        {
            XmlNode programlistingNode = newDoc.CreateElement("programlisting");
            XmlNodeList block = node.SelectNodes("preline");
            foreach (XmlNode preLine in block)
            {
                FillParaContents(newDoc, programlistingNode, preLine);
            }

            XmlNode paraNode = newDoc.CreateElement("para");
            paraNode.AppendChild(programlistingNode);
            return paraNode;
        }


        private static void addAttribute(XmlDocument xmlDoc, XmlNode node, string name, string value)
        {
            XmlAttribute attr = xmlDoc.CreateAttribute(name);
            attr.Value = value;
            node.Attributes.Append(attr);
        }

        public static XmlNode CreateListNode(XmlDocument newDoc, XmlNode node)
        {
            string listtype = node.Attributes["type"].Value;
            string listName = "itemizedlist";
            string listAttrName = "mark";
            string listAttrValue = "opencircle";
            if (listtype == "bullet")
            {
                listName = "itemizedlist";
                listAttrName = "mark";
                listAttrValue = "opencircle";
            }
            else if (listtype == "numbered")
            {
                listName = "orderedlist";
                listAttrName = "numeration";
                listAttrValue = "arabic";
            }

            XmlNode listNode = newDoc.CreateElement(listName);
            addAttribute(newDoc, listNode, listAttrName, listAttrValue);

            XmlNodeList list = node.SelectNodes("listitem");
            foreach (XmlNode listItem in list)
            {
                XmlNode listItemNode = newDoc.CreateElement("listitem");
                AppendParaNode(newDoc, listItemNode, listItem);
                listNode.AppendChild(listItemNode);
            }

            return listNode;
        }



        public static void AppendParaNode(XmlDocument newDoc, XmlNode outNode, XmlNode srcRoot)
        {
            XmlNode paraNode = newDoc.CreateElement("para");

            foreach (XmlNode node in srcRoot.ChildNodes)
            {
                XmlNode newNode = null;
                switch (node.Name)
                {
                    case "list":
                        outNode.AppendChild(paraNode);
                        newNode = CreateListNode(newDoc, node);
                        outNode.AppendChild(newNode);
                        return;
                    default:
                        newNode = CreateParaContents(newDoc, node);
                        if (newNode != null)
                            paraNode.AppendChild(newNode);
                        break;
                }
            }

            outNode.AppendChild(paraNode);
        }

        private static XmlNode CreateParaContents(XmlDocument newDoc, XmlNode node)
        {
            XmlNode newNode = null;
            switch (node.Name)
            {
                case "#text":
                    newNode = newDoc.CreateTextNode(node.Value);
                    break;
                case "italics":
                    newNode = newDoc.CreateElement("emphasis");
                    FillParaContents(newDoc, newNode, node);
                    break;
                case "bold":
                    newNode = newDoc.CreateElement("emphasis");
                    addAttribute(newDoc, newNode, "role", "bold");
                    FillParaContents(newDoc, newNode, node);
                    break;
                case "extension":
                    if (node.Attributes["name"].Value == "pre")
                        newNode = CreatePreBlockNode(newDoc, node);
                    break;
            }
            return newNode;
        }

        public static void FillParaContents(XmlDocument newDoc, XmlNode outNode, XmlNode srcRoot)
        {
            foreach (XmlNode node in srcRoot.ChildNodes)
            {
                XmlNode newNode = CreateParaContents(newDoc, node);
                if (newNode != null)
                    outNode.AppendChild(newNode);
            }
        }



        public static XmlNode CreateSectionNode(XmlDocument newDoc, XmlNode node)
        {
            XmlNode sectionNode = newDoc.CreateElement("section");
            XmlNode headingNode = node.SelectSingleNode("heading");
            if (headingNode != null)
            {
                XmlNode titleNode = newDoc.CreateElement("title");
                titleNode.AppendChild(newDoc.CreateTextNode(headingNode.InnerText));
                sectionNode.AppendChild(titleNode);
            }

            FillParaSectionChields(newDoc, sectionNode, node);
            return sectionNode;
        }

        private static void appendSectionChild(XmlDocument xmlDoc, List<XmlNode> sections, int pos, XmlNode newSection)
		{
				if (pos > 0)
					sections[pos - 1].AppendChild(newSection);
				else
					xmlDoc.AppendChild(newSection);
		}
		
		private static XmlNode createSection(XmlDocument xmlDoc, int level)
		{
			XmlNode newSection = xmlDoc.CreateElement(level==0 ? "article" : "section");
			return newSection;
		}
		
		public static  XmlNode StartSection(XmlDocument xmlDoc, List<XmlNode> sections, int level)
		{
			for(int i = 0; i < level; i++)
			{
				if (i < sections.Count)
					continue;
				XmlNode newSection = createSection(xmlDoc, i);
				sections.Add(newSection);
				appendSectionChild(xmlDoc, sections, i, newSection);
			}
			
			XmlNode section = createSection(xmlDoc, level);
			if (level < sections.Count)
				sections[level] = section;
			else
				sections.Add(section);
			
			appendSectionChild(xmlDoc, sections, level, section);
			
			sections.RemoveRange(level + 1, sections.Count - level - 1);
			return section;
		}

        public static string DocBook2Text(XmlDocument docBook)
        {
            TextWriter textWriter = new StringWriter();
            XmlWriterSettings settings = new XmlWriterSettings();
            settings.Indent = true;
            settings.IndentChars = ("\t");
            settings.NewLineHandling = NewLineHandling.Replace;
            XmlWriter writer = XmlWriter.Create(textWriter, settings);
            docBook.WriteContentTo(writer);
            writer.Flush();
            return textWriter.ToString();
        }

		public static void MakeDocBook(WikiDocInfo info)
		{
			string path = Path.Combine(info.outdir, info.outfile);
			if (!Directory.Exists(info.outdir))
				Directory.CreateDirectory(info.outdir);

			FileStream file = File.Create(path);
			file.Close();
		}

	}

	public class WikiDocInfo
	{
		public string wiki;
		public string page;
		public string outdir;
		public string outtype;
		public string encoding;
		public string lang;
		public string outfile;
		public string login;
		public string password;
	}


}
