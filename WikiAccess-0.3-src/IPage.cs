using System;

namespace WikiTools.Access
{
    public interface IPage
    {
        /// <summary>
        /// Returns page text
        /// </summary>
        string Text { get; }

        /// <summary>
        /// Reloads page text.
        /// Note: when you get content of Text property for first time, it automatically calls this method
        /// </summary>
        void LoadText();

        /// <summary>
        /// Loads common page info: existance, page ID, last edit time, last edit ID, is redirect
        /// </summary>
        void LoadInfo();

        /// <summary>
        /// Loads on which page this page redirects
        /// </summary>
        void LoadRedirectsOn();

        /// <summary>
        /// Loads internal links on this page
        /// </summary>
        void LoadInternalLinks();

        /// <summary>
        /// Loads external links on this page
        /// </summary>
        void LoadExternalLinks();

        /// <summary>
        /// Loads list of templates used on this page
        /// </summary>
        void LoadTemplates();

        /// <summary>
        /// Loads images of templates used on this page
        /// </summary>
        void LoadImages();

        /// <summary>
        /// Loads history of this page
        /// </summary>
        void LoadHistory();

        /// <summary>
        /// Loads category that contains this page
        /// </summary>
        void LoadCategories();

        /// <summary>
        /// Loads subpages of this page
        /// </summary>
        void LoadSubpages();

        /// <summary>
        /// Category of this page. Automatically calls LoadCategory() on first usage
        /// </summary>
        string[] Categories { get; }

        /// <summary>
        /// Gets the page on which this page redirects. Automatically calls LoadRedirectsOn() on first usage
        /// </summary>
        string RedirectsOn { get; }

        /// <summary>
        /// Gets history of this page. Automatically calls LoadHistory() on first usage
        /// </summary>
        Revision[] History { get; }

        /// <summary>
        /// Gets internal links on this page. Automatically calls LoadInternalLinks() on first usage
        /// </summary>
        string[] InternalLinks { get; }

        /// <summary>
        /// Gets external links on this page. Automatically calls LoadExternalLinks() on first usage
        /// </summary>
        string[] ExternalLinks { get; }

        /// <summary>
        /// Gets subpages of this page. Automatically calls LoadSubpages() on first usage
        /// </summary>
        string[] Subpages { get; }

        /// <summary>
        /// Gets list of templates used of this page. Automatically calls LoadTemplates() on first usage
        /// </summary>
        string[] Templates { get; }

        /// <summary>
        /// Gets list of images used of this page. Automatically calls LoadImages() on first usage
        /// </summary>
        string[] Images { get; }

        /// <summary>
        /// Gets page ID. Automatically calls LoadInfo() on first usage
        /// </summary>
        int PageID { get; }

        /// <summary>
        /// Gets page name
        /// </summary>
        string PageName { get; }

        /// <summary>
        /// Gets last edit time. Automatically calls LoadInfo() on first usage
        /// </summary>
        DateTime Touched { get; }

        /// <summary>
        /// Gets last edit ID. Automatically calls LoadInfo() on first usage
        /// </summary>
        int PageRevisionID { get; }

        /// <summary>
        /// Is this page redirect. Automatically calls LoadInfo() on first usage
        /// </summary>
        bool IsRedirect { get; }

        /// <summary>
        /// Gets existance of this page. Automatically calls LoadInfo() on first usage
        /// </summary>
        bool Exists { get; }

        /// <summary>
        /// Gets length of article in bytes using either API or page text
        /// </summary>
        int Length { get; }

        /// <summary>
        /// Gets namespace ID of this page
        /// </summary>
        int NamespaceID { get; }

        /// <summary>
        /// Gets namespace name of this page
        /// </summary>
        string NamespeceName { get; }

        /// <summary>
        /// Is this page talk?
        /// </summary>
        bool IsTalkPage { get; }

        /// <summary>
        /// Gets talk page of this page
        /// </summary>
        Page TalkPage { get; }

        /// <summary>
        /// Saves this page
        /// </summary>
        /// <param name="newText">New text of this page</param>
        /// <param name="summary">Edit summary</param>
        /// <param name="minor">Mark revision as minor</param>
        /// <param name="watch">Add this page to watchlist</param>
        void SetText(string newText, string summary, bool minor, bool watch);

        /// <summary>
        /// Saves this page
        /// </summary>
        /// <param name="newText">New text of this page</param>
        /// <param name="summary">Edit summary</param>
        /// <param name="minor">Mark revision as minor</param>
        void SetText(string newText, string summary, bool minor);

        /// <summary>
        /// Saves this page
        /// </summary>
        /// <param name="newText">New text of this page</param>
        /// <param name="summary">Edit summary</param>
        void SetText(string newText, string summary);

        /// <summary>
        /// Saves this page
        /// </summary>
        /// <param name="newText">New text of this page</param>
        void SetText(string newText);

        /// <summary>
        /// Saves this page
        /// </summary>
        /// <param name="newText">New text of this page</param>
        /// <param name="summary">Edit summary</param>
        /// <param name="minor">Mark revision as minor</param>
        /// <param name="watch">Add this page to watchlist</param>
        /// <param name="section">Section to edit</param>
        void SetText(string newText, string summary, bool minor, bool watch, int section);

        /// <summary>
        /// Renames this name
        /// </summary>
        /// <param name="newName">New page name</param>
        /// <param name="reason">Reason of name change</param>
        void Rename(string newName, string reason);

        /// <summary>
        /// Cleans cahce of this page
        /// </summary>
        void Purge();

        /// <summary>
        /// Bypasses redirect
        /// </summary>
        void BypassRedirect();

        /// <summary>
        /// Initializes variables to prevent edit confilcts
        /// </summary>
        void PrepareToEdit();

        /// <summary>
        /// Returns the date of last edit
        /// </summary>
        /// <returns></returns>
        DateTime GetLastEdit();

        /// <summary>
        /// Adds page to watchlist
        /// </summary>
        void Watch();

        /// <summary>
        /// Removes page from watchlist
        /// </summary>
        void Unwatch();
    }
}