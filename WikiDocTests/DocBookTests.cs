using System;
using System.Collections.Generic;
using System.Text;
using NUnit.Framework;
using WikiDocLib;

namespace WikiDocTests
{
    [TestFixture]
    public class DocBookTests
    {
        [Test]
        public void CreateDocBookInfo()
        {
            BookInfo info = new BookInfo();
            Assert.IsNull(info.Author);
            Assert.IsNull(info.Title);
        }

        [Test]
        public void CreateArticleInfo()
        {
            ArticleInfo info = new ArticleInfo();
            Assert.IsNull(info.Author);
            Assert.IsNull(info.Title);
        }

        //[Test]
        //public void CreateBook()
        //{
        //    DocBook book = new DocBook(DocBookType);
        //}
    }
}
