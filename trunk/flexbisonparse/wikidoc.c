#include <string.h>
#include <stdio.h>
#include "parsetree.h"
#include "fb_defines.h"

extern int yyparse(void);
static char errbuf[10000];

/* wikiparse_do_parse() -- this is the function that is actually called by PHP. It uses an
 * input string, and returns an output string. No stdin/stdout. */
__declspec(dllexport) extern char* wikiparse_do_parse_stub (const char* input)
{
	static char buf[100000];
	char* ret = wikiparse_do_parse(input);
	if (!strcmp("<error />", ret))
	{
		return errbuf;
	}

	strncpy(buf, ret, sizeof(buf)-1);
    return buf;
}

__declspec(dllexport) extern void unmanagedFree(char *p) 
{
	free(p);
}

int yyerror(const char *msg) 
{
	sprintf_s(errbuf, sizeof(errbuf), "<error>%s</errbuf>", msg);
}
