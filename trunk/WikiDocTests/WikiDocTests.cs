/*
 * Created by SharpDevelop.
 * User: Павел
 * Date: 09.02.2008
 * Time: 10:38
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Xml;
using NUnit.Framework;
using Rhino.Mocks;
using WikiDocLib;
using WikiTools.Access;
using System.Runtime.InteropServices;
using XmlUnit;

class TestUtils
{
	public static bool CompareXml(XmlInput etalon, XmlInput value)
	{
		DiffConfiguration xmlUnitConfiguration = new DiffConfiguration(WhitespaceHandling.None);
		XmlDiff diff = new XmlDiff(value, etalon, xmlUnitConfiguration);
		DiffResult result = diff.Compare();
		return result.Equal;
	}
}

namespace WikiDocTests
{
	public interface IWikiAccessFasade
	{
	    void InitWiki(string uri, string cachedir);
        bool Login(string username, string password);
	    void Logout();
	    Wiki Wiki{ get; }
	    Page GetPage(string title);
	}

    [TestFixture]
    public class CreateWikiDocTests
	{
	    [Test]
        public void CreateWikiAccess()
	    {
            //string wikiUrl = ""; // "http://localhost/wiki";
            string rawPageText = "testContent";
            //string pageTitle = "testPage";
            MockRepository mocks = new MockRepository();
            IWiki wiki = mocks.CreateMock<IWiki>();
            IPage page = mocks.CreateMock<IPage>();
            Expect.Call(page.Text).Return(rawPageText);

            Assert.IsInstanceOfType(typeof(IWiki), wiki);
            Assert.IsInstanceOfType(typeof(IPage), page);

            mocks.ReplayAll();

            Assert.AreEqual(rawPageText, page.Text);
	    }


        [Test]
        public void WikiParse1()
        {
            string text = 
@"==Header1==
";
            string output = 
@"<article>
<heading level='2'>Header1</heading>
</article>
";
            Console.WriteLine("pwd " + Environment.CurrentDirectory);
            String xml = WikiDoc.Wiki2Xml(text);
            Console.WriteLine(xml);
            Assert.AreEqual(output.Replace("\r\n", "\n"), xml);
        }

        [Test]
        public void WikiParse2()
        {
            string text = 
@"==Header1==
==Заголовок 2==
";
            string output = @"<article>
<heading level='2'>Header1</heading>
<heading level='2'>Заголовок 2</heading>
</article>
";
            String xml = WikiDoc.Wiki2Xml(text);
            Console.WriteLine(xml);
            Assert.AreEqual(output.Replace("\r\n", "\n"), xml);
        }

        [Test]
        public void WikiParse3()
        {
            string text = 
@"test
==Header1==
==Заголовок 2==
===Заголовок 3===
";
            string output = 
@"<article>
<paragraph>test</paragraph>
<heading level='2'>Header1</heading>
<heading level='2'>Заголовок 2</heading>
<heading level='3'>Заголовок 3</heading>
</article>
";
            String xml = WikiDoc.Wiki2Xml(text);
            Console.WriteLine(xml);
            Assert.AreEqual(output.Replace("\r\n", "\n"), xml);
        }

        [Test]
        public void WikiParseErr1()
        {
            string text =
@"
==Header1==
";
            string output =
@"<article>
<heading level='2'>Header1</heading>
</article>
";
            String xml = WikiDoc.Wiki2Xml(text);
            Console.WriteLine(xml);
            Assert.AreEqual(output.Replace("\r\n", "\n"), xml);
        }

        [Test]
        public void WikiParseErr2()
        {
            string text =
"\n==Header1==\n";
            string output =
@"<article>
<heading level='2'>Header1</heading>
</article>
";
            String xml = WikiDoc.Wiki2Xml(text);
            Console.WriteLine(xml);
            Assert.AreEqual(output.Replace("\r\n", "\n"), xml);
        }

        [Test]
        public void WikiParseErr3()
        {
            string text =
"\n\n";
            string output =
@"<article>
</article>
";
            String xml = WikiDoc.Wiki2Xml(text);
            Console.WriteLine(xml);
            Assert.AreEqual(output.Replace("\r\n", "\n"), xml);
        }

        [Test]
        public void CreateXml()
        {
            string text = "\n==Header1==\n";
            XmlDocument xmlDoc = WikiDoc.Wiki2XmlDoc(text);
            Assert.IsNotNull(xmlDoc);
            WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
        }

        [Test]
        public void CreateXml2()
        {
            string text = @"
==Header1==
Text1
==Header2==
text2
";
            XmlDocument xmlDoc = WikiDoc.Wiki2XmlDoc(text);
            Assert.IsNotNull(xmlDoc);
            WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
        }

        [Test]
        public void CreateXml3()
        {
            string text = @"
==Header1==
Text1
===Header3===
Text3
==Header2==
text2
";
            XmlDocument xmlDoc = WikiDoc.Wiki2XmlDoc(text);
            Assert.IsNotNull(xmlDoc);
            WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
        }

        [Test]
        public void CreateSection1()
        {
            string text = @"
=Header1=
Text1
";
            XmlDocument xmlDoc = WikiDoc.Wiki2XmlDoc(text);
            Assert.IsNotNull(xmlDoc);
//            WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlNode header = xmlDoc.SelectSingleNode("/article/heading");
            Assert.IsNotNull(header);
            
            XmlDocument newDoc = WikiDoc.MakeSections(xmlDoc);
            WikiDoc.PrintXmlTree(newDoc, Console.Out);
            XmlNode section = newDoc.SelectSingleNode("/article/section");
            Assert.IsNotNull(section);

            header = newDoc.SelectSingleNode("/article/section/heading");
            Assert.IsNotNull(header);
        }

        [Test]
        public void CreateSection2()
        {
            string text = @"
==Header1==
Text1
";
            XmlDocument xmlDoc = WikiDoc.Wiki2XmlDoc(text);
            Assert.IsNotNull(xmlDoc);
//            WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlNode header = xmlDoc.SelectSingleNode("/article/heading");
            Assert.IsNotNull(header);
            
            XmlDocument newDoc = WikiDoc.MakeSections(xmlDoc);
            WikiDoc.PrintXmlTree(newDoc, Console.Out);
            XmlNode section = newDoc.SelectSingleNode("/article/section/section");
            Assert.IsNotNull(section);

            header = newDoc.SelectSingleNode("/article/section/section/heading");
            Assert.IsNotNull(header);
        }

        [Test]
        public void Wiki2SectionDoc()
        {
            string text = @"
==Header1==
Text1
";
            XmlDocument newDoc = WikiDoc.Wiki2SectionDoc(text);
            WikiDoc.PrintXmlTree(newDoc, Console.Out);
            XmlNode section = newDoc.SelectSingleNode("/article/section/section");
            Assert.IsNotNull(section);

            XmlNode header = newDoc.SelectSingleNode("/article/section/section/heading");
            Assert.IsNotNull(header);
        }

        
        [Test]
        public void StartSection0()
        {
        	XmlDocument xmlDoc = new XmlDocument();
        	List<XmlNode> sections = new List<XmlNode>();
        	
        	XmlNode section = WikiDoc.StartSection(xmlDoc, sections, 0);
        	Assert.IsNotNull(section);
        	Assert.AreEqual("article", section.Name);
        	Assert.AreEqual(section, sections[0]);
        	Assert.AreEqual(1, sections.Count);
        }
        
        [Test]
        public void StartSection1()
        {
        	XmlDocument xmlDoc = new XmlDocument();
        	List<XmlNode> sections = new List<XmlNode>();
        	
        	XmlNode section = WikiDoc.StartSection(xmlDoc, sections, 1);
        	Assert.IsNotNull(section);
        	Assert.AreEqual("section", section.Name);
        	Assert.AreEqual(section, sections[1]);
        	Assert.AreEqual(2, sections.Count);
        }

        [Test]
        public void StartSection2()
        {
        	XmlDocument xmlDoc = new XmlDocument();
        	List<XmlNode> sections = new List<XmlNode>();
        	
        	XmlNode section = WikiDoc.StartSection(xmlDoc, sections, 2);
        	Assert.IsNotNull(section);
        	Assert.AreEqual("section", section.Name);
        	Assert.AreEqual(section, sections[2]);
        	Assert.AreEqual(3, sections.Count);

        	section = WikiDoc.StartSection(xmlDoc, sections, 1);
        	Assert.IsNotNull(section);
        	Assert.AreEqual("section", section.Name);
        	Assert.AreEqual(section, sections[1]);
        	Assert.AreEqual(2, sections.Count);
        }
    
        [Test]
        public void StartSection3()
        {
        	XmlDocument xmlDoc = new XmlDocument();
        	List<XmlNode> sections = new List<XmlNode>();
        	
        	XmlNode section = WikiDoc.StartSection(xmlDoc, sections, 1);
        	Assert.AreEqual("section", section.Name);
        	Assert.AreEqual(section, sections[1]);
        	Assert.AreEqual(2, sections.Count);

        	XmlNode section2 = WikiDoc.StartSection(xmlDoc, sections, 1);
        	Assert.AreNotEqual(section2, section);
        	Assert.AreEqual("section", section2.Name);
        	Assert.AreEqual(section2, sections[1]);
        	Assert.AreEqual(2, sections.Count);
        }
    
        [Test]
        public void StartSectionFindLevel0()
        {
        	XmlDocument xmlDoc = new XmlDocument();
        	List<XmlNode> sections = new List<XmlNode>();
        	
        	XmlNode section = WikiDoc.StartSection(xmlDoc, sections, 0);
        	Assert.AreEqual("article", section.Name);
        	Assert.AreEqual(section, sections[0]);
        	Assert.AreEqual(1, sections.Count);

            XmlNode section2 = xmlDoc.SelectSingleNode("/article");
            Assert.AreEqual(section, section2);
        }

        [Test]
        public void StartSectionFindLevel1()
        {
        	XmlDocument xmlDoc = new XmlDocument();
        	List<XmlNode> sections = new List<XmlNode>();
        	
        	XmlNode section1 = WikiDoc.StartSection(xmlDoc, sections, 1);

            XmlNode section2 = xmlDoc.SelectSingleNode("/article/section");
            Assert.AreEqual(section1, section2);
        }

        [Test]
        public void StartSectionFindLevel2()
        {
        	XmlDocument xmlDoc = new XmlDocument();
        	List<XmlNode> sections = new List<XmlNode>();
        	
        	XmlNode section = WikiDoc.StartSection(xmlDoc, sections, 2);
        	WikiDoc.PrintXmlTree(xmlDoc, Console.Out);

            XmlNode section2 = xmlDoc.SelectSingleNode("/article/section/section");
            Assert.AreEqual(section, section2);
        }

    }

    [TestFixture]
    public class CreateDocBookTests
    {
        [Test]
        public void EmptyPage()
        {
            string text = @"
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);

            XmlNode node = docBook.SelectSingleNode("/article");
            Assert.IsNotNull(node);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);
        }

//        [Test]
//        public void EmptyPageWithTitle()
//        {
//            string text = @"
//";
//            string title = "Пустая страница";
//            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
//            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc, title);

//            XmlNode node = docBook.SelectSingleNode("/article/articleinfo/title/text()");
//            Assert.IsNotNull(node);
//            Assert.AreEqual(title, node.Value);
//            //WikiDoc.PrintXmlTree(docBook, Console.Out);
//        }

        [Test]
        public void ParagraphPage()
        {
            string text = @"
Вводный параграф
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);
            Console.Out.Write(WikiDoc.DocBook2Text(docBook));

            XmlNode node = docBook.SelectSingleNode("/article/para");
            Assert.IsNotNull(node);
        }

        [Test]
        public void SectionPage()
        {
            string text = @"
=Секция 1=
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);
            Console.Out.Write(WikiDoc.DocBook2Text(docBook));

            XmlNode node = docBook.SelectSingleNode("/article/section");
            Assert.IsNotNull(node);
            node = docBook.SelectSingleNode("/article/section/title/text()");
            Assert.IsNotNull(node);
        }

        [Test]
        public void ParagraphSectionPage()
        {
            string text = @"
Вводный параграф
=Секция 1=
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);
            Console.Out.Write(WikiDoc.DocBook2Text(docBook));

            XmlNode node = docBook.SelectSingleNode("/article/para");
            Assert.IsNotNull(node);
            node = docBook.SelectSingleNode("/article/section");
            Assert.IsNotNull(node);
        }

        [Test]
        public void ThoSectionPage()
        {
            string text = @"
=Секция 1=
==Секция 2==
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/section/section");
            Assert.IsNotNull(node);
            node = docBook.SelectSingleNode("/article/section/section/title/text()");
            Assert.AreEqual("Секция 2", node.Value.Replace("\n", ""));
        }

        [Test]
        public void OneSecondLevelSectionPage()
        {
            string text = @"
==Секция 2==
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/section/section");
            Assert.IsNotNull(node);
            node = docBook.SelectSingleNode("/article/section/section/title/text()");
            Assert.AreEqual("Секция 2", node.Value.Replace("\n", ""));
        }

        [Test]
        public void ParaInSectionPage()
        {
            string text = @"
=Секция 1=
Параграф
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/section");
            Assert.IsNotNull(node);
            node = docBook.SelectSingleNode("/article/section/para");
            Assert.IsNotNull(node);
        }

        [Test]
        public void ItalicInParaPage()
        {
            string text = @"
Простой ''курсивный'' текст
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/para");
            Assert.IsNotNull(node);
            node = docBook.SelectSingleNode("/article/para/emphasis");
            Assert.IsNotNull(node);
        }

        [Test]
        public void BoldInParaPage()
        {
            string text = @"
Простой '''жирный''' текст
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/para");
            Assert.IsNotNull(node);
            node = docBook.SelectSingleNode("/article/para/emphasis");
            Assert.IsNotNull(node);
            Assert.AreEqual("bold", node.Attributes["role"].Value);
        }

        [Test]
        public void ItalicBoldInParaPage()
        {
            string text = @"
Простой '''''жирный курсив''''' текст
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/para");
            Assert.IsNotNull(node);
            node = docBook.SelectSingleNode("/article/para/emphasis");
            Assert.IsNotNull(node);
            node = docBook.SelectSingleNode("/article/para/emphasis/emphasis");
            Assert.IsNotNull(node);
            Assert.AreEqual("bold", node.Attributes["role"].Value);
        }

        [Test]
        public void BulletListParaPage()
        {
            string text = @"
список:
*пункт 1
*пункт 2
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/itemizedlist");
            Assert.IsNotNull(node);
            Assert.AreEqual("opencircle", node.Attributes["mark"].Value);
            XmlNodeList nodes = docBook.SelectNodes("/article/itemizedlist/listitem");
            Assert.AreEqual(2, nodes.Count);

            node = docBook.SelectSingleNode("/article/itemizedlist/listitem/para");
            Assert.IsNotNull(node);
        }

        [Test]
        public void NumberedListParaPage()
        {
            string text = @"
список:
#пункт 1
#пункт 2
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/orderedlist");
            Assert.IsNotNull(node);
            Assert.AreEqual("arabic", node.Attributes["numeration"].Value);
            XmlNodeList nodes = docBook.SelectNodes("/article/orderedlist/listitem");
            Assert.AreEqual(2, nodes.Count);

            node = docBook.SelectSingleNode("/article/orderedlist/listitem/para");
            Assert.IsNotNull(node);
        }

        [Test]
        public void NestedListParaPage()
        {
            string text = @"
список:
#пункт 1
#*пункт 2
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/orderedlist");
            Assert.IsNotNull(node);
            Assert.AreEqual("arabic", node.Attributes["numeration"].Value);
            XmlNodeList nodes = docBook.SelectNodes("/article/orderedlist/listitem");
            Assert.AreEqual(1, nodes.Count);

            node = docBook.SelectSingleNode("/article/orderedlist/listitem/itemizedlist");
            Assert.IsNotNull(node);
            Assert.AreEqual("opencircle", node.Attributes["mark"].Value);
            nodes = docBook.SelectNodes("/article/orderedlist/listitem/itemizedlist/listitem");
            Assert.AreEqual(1, nodes.Count);
        
        }

        [Test]
        public void PreOneLinePage()
        {
            string text = @"
Пример:
 A + B + C
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/para/programlisting");
            Assert.IsNotNull(node);
        }

        [Test]
        public void PreBlockPage()
        {
            string text = @"
Пример:
<pre>
A = B + C
D = B - C
</pre>
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/para/programlisting");
            Assert.IsNotNull(node);
        }

        [Test]
        public void PreBlockParaPage()
        {
            string text = @"
Пример:

<pre>
A = B + C
D = B - C
</pre>
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            //WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            //WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/para/programlisting");
            Assert.IsNotNull(node);
        }

        [Test]
        public void SimpleTablePage()
        {
            string text = @"
{|
|-
| A || B
|}
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/table");
            Assert.IsNotNull(node);

            node = docBook.SelectSingleNode("/article/table/tgroup");
            Assert.IsNotNull(node);

            Assert.AreEqual("2", node.Attributes["cols"].Value);
        }

        [Test]
        public void SimpleTableColSpanPage()
        {
            string text = @"
{|
|-
| A 
|colspan=""2""| B
|}
";
            XmlDocument xmlDoc = WikiDoc.Wiki2SectionDoc(text);
            WikiDoc.PrintXmlTree(xmlDoc, Console.Out);
            XmlDocument docBook = WikiDoc.SectionDoc2DocBook(xmlDoc);
            WikiDoc.PrintXmlTree(docBook, Console.Out);

            XmlNode node = docBook.SelectSingleNode("/article/table");
            Assert.IsNotNull(node);

            node = docBook.SelectSingleNode("/article/table/tgroup");
            Assert.IsNotNull(node);

            Assert.AreEqual("3", node.Attributes["cols"].Value);
        }

        [Test]
        public void PrintDocBookPage()
        {
            string text = @"
==Head 1==
";
			string docBookText = WikiDoc.Wiki2DocBook(text);

        	string docBookEtalon = @"<article>
    <section>
        <section>
         <title>Head 1</title>
        </section>
    </section>
</article>";

            Console.Out.Write(docBookText);

        	XmlInput etalon = new XmlInput(docBookEtalon);
        	XmlInput value = new XmlInput(docBookText);

            bool equal = TestUtils.CompareXml(etalon, value);
        	Assert.IsTrue(equal);
        }

    }


	[TestFixture]
	public class GenerateArticleTests
	{
		[Test]
		[Ignore]
		public void SimplePageCli()
		{
			string filename = "WikiDocCli.exe";
			string args = "-wiki http://vangog/wiki -page \"WikiDoc: Простая тестовая страница\" -outdir test1 -outfile \"book.xml\" -outtype article -encoding \"windows-1251\" -lang \"ru\"";
			string targetDir = ".";
			string outdir = Path.Combine(Environment.CurrentDirectory, "test1");
			string outfile = Path.Combine(outdir, "book.xml");
			if (Directory.Exists(outdir))
				Directory.Delete(outdir, true);

			Assert.IsFalse(Directory.Exists(outdir));

			Process process = new Process();
			process.StartInfo.WorkingDirectory = targetDir;
			process.StartInfo.FileName = filename;

			process.StartInfo.Arguments = args;
			process.StartInfo.CreateNoWindow = false;
			
			process.Start();
			process.WaitForExit();

			Assert.IsTrue(Directory.Exists(outdir));
			Assert.IsTrue(File.Exists(outfile));

		}

		[Test]
		public void SimplePage()
		{
			string outdir = Path.Combine(Environment.CurrentDirectory, "test1");
			string outfile = "book.xml";
			string cachedir = "cachedir";
			if (Directory.Exists(outdir))
				Directory.Delete(outdir, true);

			WikiDocInfo info = new WikiDocInfo();
			info.lang = "ru";
			info.encoding = "windows-1251";
			info.page = "WikiDoc: Простая тестовая страница";
			info.outdir = outdir;
			info.outfile = outfile;
			info.wiki = "http://vangog/wiki/";
			info.login = "TestUser";
			info.password = "UserTest";
			
			WikiDoc.MakeDocBook(info);

			if (Directory.Exists(cachedir))
				Directory.Delete(cachedir, true);
			Directory.CreateDirectory(cachedir);

			string fullname = Path.Combine(outdir, outfile);
			Assert.IsTrue(Directory.Exists(outdir));
			Assert.IsTrue(File.Exists(fullname));

			Assert.IsNotNull(info.wiki);

			Wiki wiki = new Wiki(info.wiki, cachedir, info.login, info.password);

			Page page = new Page(wiki, info.page);
			string wikitext = page.Text;

			Assert.IsNotEmpty(wikitext);
			Console.Out.Write(wikitext);

			XmlInput etalon = new XmlInput(File.OpenRead(fullname));
			string docbooktext = WikiDoc.Wiki2DocBook(wikitext);
			XmlInput value = new XmlInput(docbooktext);

			//Assert.IsTrue(TestUtils.CompareXml(etalon, value));
		}

	}

	[TestFixture]
	public class WikiDocCliTests
	{
		[Test]
		public void Info_wiki()
		{
			string wiki = "http://vangog/wiki";
			string[] args = {"-wiki", wiki};
			WikiDocInfo info = WikiDocCli.Program.ParseArgs(args);
			Assert.AreEqual(wiki, info.wiki);
		}

		[Test]
		[ExpectedException(typeof(ArgumentException))]
		public void BadInfo()
		{
			string wiki = "http://vangog/wiki";
			string[] args = { "-asdf", wiki };
			WikiDocInfo info = WikiDocCli.Program.ParseArgs(args);
		}

		[Test]
		[ExpectedException(typeof(ArgumentException))]
		public void InfoTooLowArgs()
		{
			string[] args = { "-wiki" };
			WikiDocInfo info = WikiDocCli.Program.ParseArgs(args);
		}

		[Test]
		public void Info_page()
		{
			string page = "WikiDoc: Простая тестовая страница";
			string[] args = { "-page",  page };
			WikiDocInfo info = WikiDocCli.Program.ParseArgs(args);
			Assert.AreEqual(page, info.page);
		}

		[Test]
		public void Info_wikiPage()
		{
			string wiki = "http://vangog/wiki";
			string page = "WikiDoc: Простая тестовая страница";
			string lang = "ru";
			string[] args = {"-lang", lang, "-wiki", wiki, "-page", page };
			WikiDocInfo info = WikiDocCli.Program.ParseArgs(args);
			Assert.AreEqual(wiki, info.wiki);
			Assert.AreEqual(page, info.page);
		}

		[Test]
		[ExpectedException(typeof(ArgumentException))]
		public void Info_wikiMissOrder()
		{
			string wiki = "http://vangog/wiki";
			string page = "WikiDoc: Простая тестовая страница";
			string lang = "ru";
			string[] args = { "-lang", "-wiki", lang ,wiki, "-page", page };
			WikiDocInfo info = WikiDocCli.Program.ParseArgs(args);
			Assert.AreEqual(wiki, info.wiki);
			Assert.AreEqual(page, info.page);
		}

		[Test]
		public void Info_login()
		{
			string login = "login";
			string[] args = { "-login", login };
			WikiDocInfo info = WikiDocCli.Program.ParseArgs(args);
			Assert.AreEqual(login, info.login);
		}

		[Test]
		public void Info_password()
		{
			string password = "password";
			string[] args = { "-password", password };
			WikiDocInfo info = WikiDocCli.Program.ParseArgs(args);
			Assert.AreEqual(password, info.password);
		}

	}

}

