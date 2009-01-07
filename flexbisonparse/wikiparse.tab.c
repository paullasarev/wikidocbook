/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EXTENSION = 258,
     BEGINCOMMENT = 259,
     TEXT = 260,
     ENDCOMMENT = 261,
     OPENLINK = 262,
     OPENDBLSQBR = 263,
     CLOSEDBLSQBR = 264,
     PIPE = 265,
     NEWLINE = 266,
     PRELINE = 267,
     LISTBULLET = 268,
     LISTNUMBERED = 269,
     LISTIDENT = 270,
     HEADING = 271,
     ENDHEADING = 272,
     APO5 = 273,
     APO3 = 274,
     APO2 = 275,
     TABLEBEGIN = 276,
     TABLECELL = 277,
     TABLEHEAD = 278,
     TABLEROW = 279,
     TABLEEND = 280,
     TABLECAPTION = 281,
     ATTRIBUTE = 282,
     EQUALS = 283,
     ATTRAPO = 284,
     ATTRQ = 285,
     OPENPENTUPLECURLY = 286,
     CLOSEPENTUPLECURLY = 287,
     OPENTEMPLATEVAR = 288,
     CLOSETEMPLATEVAR = 289,
     OPENTEMPLATE = 290,
     CLOSETEMPLATE = 291
   };
#endif
/* Tokens.  */
#define EXTENSION 258
#define BEGINCOMMENT 259
#define TEXT 260
#define ENDCOMMENT 261
#define OPENLINK 262
#define OPENDBLSQBR 263
#define CLOSEDBLSQBR 264
#define PIPE 265
#define NEWLINE 266
#define PRELINE 267
#define LISTBULLET 268
#define LISTNUMBERED 269
#define LISTIDENT 270
#define HEADING 271
#define ENDHEADING 272
#define APO5 273
#define APO3 274
#define APO2 275
#define TABLEBEGIN 276
#define TABLECELL 277
#define TABLEHEAD 278
#define TABLEROW 279
#define TABLEEND 280
#define TABLECAPTION 281
#define ATTRIBUTE 282
#define EQUALS 283
#define ATTRAPO 284
#define ATTRQ 285
#define OPENPENTUPLECURLY 286
#define CLOSEPENTUPLECURLY 287
#define OPENTEMPLATEVAR 288
#define CLOSETEMPLATEVAR 289
#define OPENTEMPLATE 290
#define CLOSETEMPLATE 291




/* Copy the first part of user declarations.  */
#line 1 "wikiparse.y"


/**
 **
 **  This file is part of the flex/bison-based parser for MediaWiki.
 **          This is the grammar - the input file for bison.
 **  See fb_defines.h on how to make it output debugging information.
 **
 ** This source file is licensed unter the GNU General Public License
 **               http://www.gnu.org/copyleft/gpl.html
 **                 Originally written 2004 by Timwi
 **/

#include <string.h>
#include <stdio.h>
#include "parsetree.h"
#include "fb_defines.h"
/*int yyerror() { printf ("\n\nSYNTAX ERROR.\n\n"); }*/

Node articlenode;
int i;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 26 "wikiparse.y"
{
    Node node;
    char* str;
    int num;
    AttributeData ad;
}
/* Line 187 of yacc.c.  */
#line 199 "wikiparse.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 212 "wikiparse.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  193
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2836

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  331
/* YYNRULES -- Number of states.  */
#define YYNSTATES  375

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    13,    16,    18,
      21,    23,    26,    29,    32,    35,    38,    40,    43,    46,
      49,    52,    55,    59,    62,    64,    66,    69,    73,    75,
      77,    79,    81,    84,    86,    89,    91,    94,    99,   103,
     108,   112,   117,   121,   122,   124,   126,   128,   131,   134,
     137,   139,   143,   148,   153,   159,   163,   168,   173,   179,
     182,   186,   190,   195,   198,   202,   206,   211,   214,   218,
     219,   221,   225,   231,   236,   239,   243,   249,   254,   258,
     261,   265,   271,   276,   280,   286,   291,   295,   298,   302,
     305,   309,   312,   317,   321,   327,   332,   336,   339,   344,
     348,   352,   357,   361,   364,   366,   369,   373,   376,   381,
     385,   387,   391,   394,   397,   399,   401,   403,   406,   411,
     414,   419,   423,   426,   428,   433,   436,   441,   445,   448,
     450,   452,   455,   460,   464,   467,   471,   474,   476,   478,
     482,   488,   494,   499,   502,   504,   507,   509,   512,   514,
     517,   519,   522,   524,   527,   529,   532,   534,   537,   539,
     542,   544,   546,   548,   550,   552,   554,   556,   558,   560,
     562,   564,   566,   568,   570,   572,   574,   576,   578,   580,
     582,   584,   586,   588,   590,   592,   594,   596,   598,   600,
     602,   604,   606,   608,   610,   612,   614,   616,   618,   620,
     622,   624,   626,   628,   630,   632,   634,   636,   638,   640,
     642,   644,   646,   648,   650,   652,   654,   656,   658,   660,
     662,   664,   666,   668,   670,   672,   674,   676,   678,   680,
     682,   684,   686,   688,   690,   692,   694,   696,   698,   700,
     702,   704,   706,   708,   710,   712,   714,   716,   718,   720,
     722,   724,   726,   728,   730,   732,   734,   736,   738,   740,
     742,   744,   746,   748,   750,   752,   754,   756,   758,   760,
     762,   764,   766,   768,   770,   772,   774,   776,   778,   780,
     782,   784,   786,   788,   790,   792,   794,   796,   798,   800,
     802,   804,   806,   808,   810,   812,   814,   818,   824,   830,
     833,   838,   843,   847,   851,   854,   857,   858,   860,   862,
     865,   866,   868,   870,   873,   876,   880,   882,   885,   888,
     892,   895,   899,   904,   908,   910,   913,   915,   918,   922,
     925,   929
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      38,     0,    -1,    -1,    87,    -1,    39,    -1,    87,    39,
      -1,    41,    -1,    39,    41,    -1,    42,    -1,    40,    42,
      -1,    44,    -1,    43,    86,    -1,    46,    86,    -1,    90,
      86,    -1,    61,    86,    -1,    92,    86,    -1,    44,    -1,
      43,    86,    -1,    46,    86,    -1,    91,    86,    -1,    61,
      86,    -1,    92,    86,    -1,    16,    70,    17,    -1,    16,
      70,    -1,    16,    -1,    45,    -1,    44,    45,    -1,    12,
      57,    88,    -1,    47,    -1,    48,    -1,    49,    -1,    50,
      -1,    47,    50,    -1,    51,    -1,    48,    51,    -1,    52,
      -1,    49,    52,    -1,    13,    53,    57,    11,    -1,    13,
      53,    57,    -1,    14,    53,    57,    11,    -1,    14,    53,
      57,    -1,    15,    53,    57,    11,    -1,    15,    53,    57,
      -1,    -1,    13,    -1,    14,    -1,    15,    -1,    53,    13,
      -1,    53,    14,    -1,    53,    15,    -1,     9,    -1,     8,
      75,    54,    -1,     8,    75,    10,    54,    -1,     8,    75,
      56,    54,    -1,     8,    75,    56,    10,    54,    -1,     7,
      75,    54,    -1,     7,    75,    10,    54,    -1,     7,    75,
      56,    54,    -1,     7,    75,    56,    10,    54,    -1,     8,
      75,    -1,     8,    75,    10,    -1,     8,    75,    56,    -1,
       8,    75,    56,    10,    -1,     7,    75,    -1,     7,    75,
      10,    -1,     7,    75,    56,    -1,     7,    75,    56,    10,
      -1,    10,    75,    -1,    56,    10,    75,    -1,    -1,    70,
      -1,    20,    71,    20,    -1,    20,    71,    19,    73,    18,
      -1,    20,    71,    19,    73,    -1,    20,    71,    -1,    19,
      72,    19,    -1,    19,    72,    20,    73,    18,    -1,    19,
      72,    20,    73,    -1,    19,    72,    20,    -1,    19,    72,
      -1,    18,    73,    18,    -1,    18,    73,    19,    71,    20,
      -1,    18,    73,    19,    71,    -1,    18,    73,    19,    -1,
      18,    73,    20,    72,    19,    -1,    18,    73,    20,    72,
      -1,    18,    73,    20,    -1,    18,    73,    -1,    20,    73,
      20,    -1,    20,    73,    -1,    19,    73,    19,    -1,    19,
      73,    -1,    21,    69,    62,    25,    -1,    21,    69,    62,
      -1,    21,    69,    87,    62,    25,    -1,    21,    69,    87,
      62,    -1,    21,    62,    25,    -1,    21,    62,    -1,    21,
      87,    62,    25,    -1,    21,    87,    62,    -1,    21,    69,
      86,    -1,    21,    69,    70,    86,    -1,    21,    70,    86,
      -1,    21,    87,    -1,    63,    -1,    62,    63,    -1,    24,
      69,    64,    -1,    24,    64,    -1,    24,    69,    87,    64,
      -1,    24,    87,    64,    -1,    64,    -1,    24,    69,    87,
      -1,    24,    69,    -1,    24,    87,    -1,    24,    -1,    67,
      -1,    65,    -1,    64,    65,    -1,    22,    69,    10,    66,
      -1,    22,    66,    -1,    22,    69,    10,    87,    -1,    22,
      69,    10,    -1,    22,    87,    -1,    22,    -1,    23,    69,
      10,    66,    -1,    23,    66,    -1,    23,    69,    10,    87,
      -1,    23,    69,    10,    -1,    23,    87,    -1,    23,    -1,
      40,    -1,    87,    40,    -1,    26,    69,    10,    74,    -1,
      26,    69,    74,    -1,    26,    74,    -1,    26,    69,    10,
      -1,    26,    69,    -1,    26,    -1,    27,    -1,    27,    28,
       5,    -1,    27,    28,    29,    70,    29,    -1,    27,    28,
      30,    70,    30,    -1,    27,    28,    30,    30,    -1,    27,
      28,    -1,    68,    -1,    69,    68,    -1,    77,    -1,    70,
      77,    -1,    78,    -1,    71,    78,    -1,    79,    -1,    72,
      79,    -1,    80,    -1,    73,    80,    -1,    81,    -1,    74,
      81,    -1,    82,    -1,    75,    82,    -1,    83,    -1,    76,
      83,    -1,     5,    -1,     3,    -1,    10,    -1,     9,    -1,
      20,    -1,    19,    -1,    18,    -1,    28,    -1,    21,    -1,
      25,    -1,    24,    -1,    22,    -1,    23,    -1,    26,    -1,
      27,    -1,    32,    -1,    34,    -1,    36,    -1,    92,    -1,
      55,    -1,    58,    -1,    84,    -1,    85,    -1,     5,    -1,
       3,    -1,    10,    -1,     9,    -1,    21,    -1,    25,    -1,
      24,    -1,    22,    -1,    23,    -1,    26,    -1,    27,    -1,
      32,    -1,    34,    -1,    36,    -1,    92,    -1,    55,    -1,
      60,    -1,    84,    -1,    85,    -1,     5,    -1,     3,    -1,
      10,    -1,     9,    -1,    21,    -1,    25,    -1,    24,    -1,
      22,    -1,    23,    -1,    26,    -1,    27,    -1,    32,    -1,
      34,    -1,    36,    -1,    92,    -1,    55,    -1,    59,    -1,
      84,    -1,    85,    -1,     5,    -1,     3,    -1,    10,    -1,
       9,    -1,    21,    -1,    25,    -1,    24,    -1,    22,    -1,
      23,    -1,    26,    -1,    27,    -1,    32,    -1,    34,    -1,
      36,    -1,    92,    -1,    55,    -1,    84,    -1,    85,    -1,
       5,    -1,     3,    -1,    10,    -1,     9,    -1,    20,    -1,
      19,    -1,    18,    -1,    28,    -1,    32,    -1,    34,    -1,
      36,    -1,    92,    -1,    55,    -1,    58,    -1,    84,    -1,
      85,    -1,     5,    -1,     3,    -1,    20,    -1,    19,    -1,
      18,    -1,    28,    -1,    21,    -1,    25,    -1,    24,    -1,
      22,    -1,    23,    -1,    26,    -1,    27,    -1,    32,    -1,
      34,    -1,    36,    -1,    92,    -1,    55,    -1,    58,    -1,
      84,    -1,    85,    -1,     5,    -1,     3,    -1,    10,    -1,
       9,    -1,    20,    -1,    19,    -1,    18,    -1,    28,    -1,
      21,    -1,    25,    -1,    24,    -1,    22,    -1,    23,    -1,
      26,    -1,    27,    -1,    92,    -1,    55,    -1,    58,    -1,
      84,    -1,    85,    -1,    35,    76,    36,    -1,    31,    76,
      34,    76,    36,    -1,    35,    76,    33,    76,    32,    -1,
      35,    76,    -1,    31,    76,    34,    76,    -1,    35,    76,
      33,    76,    -1,    33,    76,    34,    -1,    31,    76,    32,
      -1,    33,    76,    -1,    31,    76,    -1,    -1,    87,    -1,
      11,    -1,    87,    11,    -1,    -1,    89,    -1,    11,    -1,
      89,    11,    -1,    70,    11,    -1,    90,    70,    11,    -1,
      70,    -1,    90,    70,    -1,    74,    11,    -1,    69,    74,
      11,    -1,    69,    11,    -1,    91,    74,    11,    -1,    91,
      69,    74,    11,    -1,    91,    69,    11,    -1,    74,    -1,
      69,    74,    -1,    69,    -1,    91,    74,    -1,    91,    69,
      74,    -1,    91,    69,    -1,     4,    70,     6,    -1,     4,
       6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    71,    72,    73,    75,    76,    78,    79,
      81,    82,    83,    84,    85,    86,    88,    89,    90,    91,
      92,    93,    95,    97,    99,   102,   103,   105,   108,   109,
     110,   112,   113,   114,   115,   116,   117,   119,   121,   123,
     125,   127,   129,   132,   133,   135,   137,   139,   140,   141,
     151,   156,   158,   160,   162,   164,   166,   168,   170,   174,
     176,   178,   180,   182,   184,   186,   188,   192,   193,   195,
     196,   198,   200,   203,   206,   208,   210,   216,   219,   222,
     224,   227,   230,   233,   236,   239,   242,   245,   249,   251,
     254,   256,   259,   261,   263,   265,   267,   269,   271,   273,
     276,   280,   284,   287,   291,   292,   294,   296,   298,   300,
     303,   306,   308,   310,   312,   314,   317,   318,   320,   322,
     324,   326,   328,   330,   332,   334,   336,   338,   340,   342,
     345,   347,   350,   352,   354,   356,   358,   360,   365,   367,
     369,   371,   373,   375,   378,   379,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   543,   545,   548,   552,
     554,   557,   561,   563,   567,   569,   572,   573,   574,   575,
     577,   578,   579,   580,   582,   584,   587,   589,   596,   598,
     600,   602,   604,   606,   609,   611,   613,   615,   617,   619,
     622,   624
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EXTENSION", "BEGINCOMMENT", "TEXT",
  "ENDCOMMENT", "OPENLINK", "OPENDBLSQBR", "CLOSEDBLSQBR", "PIPE",
  "NEWLINE", "PRELINE", "LISTBULLET", "LISTNUMBERED", "LISTIDENT",
  "HEADING", "ENDHEADING", "APO5", "APO3", "APO2", "TABLEBEGIN",
  "TABLECELL", "TABLEHEAD", "TABLEROW", "TABLEEND", "TABLECAPTION",
  "ATTRIBUTE", "EQUALS", "ATTRAPO", "ATTRQ", "OPENPENTUPLECURLY",
  "CLOSEPENTUPLECURLY", "OPENTEMPLATEVAR", "CLOSETEMPLATEVAR",
  "OPENTEMPLATE", "CLOSETEMPLATE", "$accept", "article", "blocks",
  "blocksintbl", "block", "blockintbl", "heading", "preblock", "preline",
  "listblock", "bulletlistblock", "numberlistblock", "identlistblock",
  "bulletlistline", "numberlistline", "identlistline", "listseries",
  "linktrail", "linketc", "pipeseries", "textorempty", "italicsorbold",
  "italicsnobold", "boldnoitalics", "table", "tablerows", "tablerow",
  "tablecells", "tablecell", "tablecellcontents", "tablecaption",
  "attribute", "attributes", "text", "textnoital", "textnobold",
  "textnoboit", "textintbl", "textinlink", "textintmpl", "textelement",
  "textelementnoital", "textelementnobold", "textelementnoboit",
  "textelementintbl", "textelementinlink", "textelementintmpl", "template",
  "templatevar", "zeroormorenewlines", "oneormorenewlines",
  "zeroormorenewlinessave", "oneormorenewlinessave", "paragraph",
  "paragraphintbl", "comment", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    38,    38,    38,    39,    39,    40,    40,
      41,    41,    41,    41,    41,    41,    42,    42,    42,    42,
      42,    42,    43,    43,    43,    44,    44,    45,    46,    46,
      46,    47,    47,    48,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    53,    53,    53,    53,    53,    53,    53,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    59,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    68,    68,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    85,    85,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     3,     2,     1,     1,     2,     3,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     4,     3,     4,
       3,     4,     3,     0,     1,     1,     1,     2,     2,     2,
       1,     3,     4,     4,     5,     3,     4,     4,     5,     2,
       3,     3,     4,     2,     3,     3,     4,     2,     3,     0,
       1,     3,     5,     4,     2,     3,     5,     4,     3,     2,
       3,     5,     4,     3,     5,     4,     3,     2,     3,     2,
       3,     2,     4,     3,     5,     4,     3,     2,     4,     3,
       3,     4,     3,     2,     1,     2,     3,     2,     4,     3,
       1,     3,     2,     2,     1,     1,     1,     2,     4,     2,
       4,     3,     2,     1,     4,     2,     4,     3,     2,     1,
       1,     2,     4,     3,     2,     3,     2,     1,     1,     3,
       5,     5,     4,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     2,
       4,     4,     3,     3,     2,     2,     0,     1,     1,     2,
       0,     1,     1,     2,     2,     3,     1,     2,     2,     3,
       2,     3,     4,     3,     1,     2,     1,     2,     3,     2,
       3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,   161,     0,   160,     0,     0,   163,   162,   308,    69,
      43,    43,    43,    24,   166,   165,   164,   168,   171,   172,
     170,   169,   173,   174,   167,     0,   175,     0,   176,     0,
     177,     0,     4,     6,   306,    10,    25,   306,    28,    29,
      30,    31,    33,    35,   179,   180,   306,   316,   146,   181,
     182,     3,   306,   178,   331,   168,     0,   178,   256,   255,
     259,   258,   257,   261,   264,   265,   263,   262,   266,   267,
     260,   268,   269,   270,   272,   273,    63,   156,   274,   275,
     271,    59,   310,    70,    44,    45,    46,    69,    69,    69,
      23,   222,   221,   224,   223,   225,   228,   229,   227,   226,
     230,   231,   232,   233,   234,   236,    87,   152,   237,   238,
     235,   203,   202,   205,   204,     0,   206,   209,   210,   208,
     207,   211,   212,   213,   214,   215,   217,   218,    79,   150,
     219,   220,   216,   184,   183,   186,   185,     0,   187,   190,
     191,   189,   188,   192,   193,   194,   195,   196,   198,   199,
      74,   148,   200,   201,   197,   123,   129,   114,   137,   138,
      97,   104,   110,   116,   115,   144,   306,   306,   103,   277,
     276,   279,   278,   282,   281,   280,   284,   287,   288,   286,
     285,   289,   290,   283,   292,   293,   305,   158,   294,   295,
     291,   304,   299,     1,     7,    11,   307,    26,    12,    32,
      34,    36,    14,   314,   147,   309,     5,   317,    13,    15,
     330,    50,    64,    55,    65,   157,    60,    51,    61,   312,
      27,   311,    47,    48,    49,    38,    40,    42,    22,    80,
      83,    86,   153,    89,    75,    78,   151,    91,     0,    71,
     149,   240,   239,   242,   241,   245,   244,   243,     0,   138,
     246,   247,   248,   249,   130,     8,   306,    16,   306,   251,
     252,   306,   119,   326,   324,   154,   253,   254,   122,   306,
     250,   125,   326,   128,   123,   129,   107,   112,   113,   136,
     134,   250,   143,   114,    96,   137,   105,   117,    93,   145,
     306,   100,   307,   102,    99,   303,     0,   159,   302,     0,
     296,   315,    56,    67,    66,    57,    52,    62,    53,   313,
      37,    39,    41,    82,    85,    88,    77,    90,    73,     9,
     326,    17,    18,    20,   121,   320,   325,   318,   155,   131,
     329,   327,    19,    21,   127,   106,   111,   109,   135,   133,
     139,     0,     0,    92,   101,    95,    98,   300,   301,    58,
      68,    54,    81,    84,    76,    72,   118,   120,   319,   323,
     328,   321,   124,   126,   108,   132,     0,   142,     0,    94,
     297,   298,   322,   140,   141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,   254,    33,   255,   256,   257,    36,   258,
      38,    39,    40,    41,    42,    43,    87,   213,   259,   214,
      82,   260,   127,   149,   261,   160,   161,   162,   163,   262,
     164,   165,   320,    47,   150,   128,   106,   264,   303,   186,
      48,   151,   129,   107,   265,    77,   187,   266,   267,   195,
     196,   220,   221,    52,   269,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -231
static const yytype_int16 yypact[] =
{
    1240,  -231,  1376,  -231,  1954,  1954,  -231,  -231,  -231,  1784,
      78,    78,    78,  1784,  2362,  2226,  2260,  1410,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  2801,  -231,  2801,  -231,  2801,
    -231,    49,  1308,  -231,    42,    62,  -231,    42,    44,    64,
      40,  -231,  -231,  -231,  -231,  -231,    42,  1444,  -231,  -231,
    -231,  1274,  1478,    42,  -231,  -231,  1512,  -231,  -231,  -231,
    2362,  2226,  2260,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  1818,  -231,  -231,  -231,
    -231,  1852,    71,  1784,  -231,  -231,  -231,  1342,  1342,  1342,
    1546,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  1886,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  2362,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  1988,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,  2362,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    2022,  -231,  -231,  -231,  -231,  1580,  1580,   102,  2464,    79,
     335,  -231,    41,  -231,  -231,  -231,  1410,  1478,   157,  -231,
    -231,  -231,  -231,  2362,  2226,  2260,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  2702,  -231,  -231,  -231,
    -231,  2768,  2056,  -231,  -231,  -231,   101,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  1308,  1614,  -231,  -231,
    -231,  -231,  1920,  -231,    76,  -231,  1920,  -231,    88,  -231,
    -231,   103,  -231,  -231,  -231,   106,   108,   112,  -231,  -231,
    2260,  2226,  -231,  2294,  -231,  2362,  -231,  2328,  2362,  -231,
    -231,  -231,  -231,  -231,  -231,  2362,  2226,  2260,  1410,    79,
    -231,  -231,  -231,  -231,   626,  -231,    42,    62,    42,  -231,
    -231,    42,  -231,   690,  2498,  -231,  -231,  -231,  1648,   852,
      42,  -231,   941,  1648,  1580,  1580,    41,   102,    57,  2532,
    2668,  -231,    37,   102,  -231,  2464,  -231,  -231,   347,  -231,
    1478,  -231,   157,  -231,   382,  -231,  2801,  -231,  -231,  2801,
    -231,  -231,  -231,  1954,  1920,  -231,  -231,  1920,  -231,  -231,
    -231,  -231,  -231,  2090,  2124,  -231,   986,  -231,  2158,  -231,
    2396,  -231,  -231,  -231,  1580,  -231,  2566,  -231,  -231,   626,
    2430,  2600,  -231,  -231,  1580,    41,    57,    41,  2668,  2668,
    -231,  1784,  1682,  -231,  -231,   396,  -231,  2192,  2735,  -231,
    1954,  -231,  -231,  -231,  -231,  -231,  -231,  1648,  -231,  -231,
    2634,  -231,  -231,  1648,    41,  2668,  1716,  -231,  1750,  -231,
    -231,  -231,  -231,  -231,  -231
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -231,  -231,    65,  -214,   -12,  -230,    18,    33,   -29,    43,
    -231,  -231,  -231,    93,    91,   104,    92,   -78,     0,    52,
     -17,   750,  -231,  -231,    45,  -120,  -141,  -126,  -122,  -115,
    -231,  -131,   128,    21,   -88,   -76,   -79,   114,    17,    -1,
     -46,  -111,  -117,   -98,  -162,   -69,   -91,   250,   500,    74,
     105,  -231,  -231,  -231,  -231,   877
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      44,   204,    44,   217,    74,    74,   197,   215,   232,    44,
     204,   236,   215,    44,   105,   126,   148,    44,    34,   286,
     194,    76,    81,    56,   319,   184,   191,   184,   192,   184,
      83,   276,    44,    35,    90,   289,   233,   204,   167,   240,
     287,   271,   340,    37,   204,    46,   288,    44,   294,   193,
      34,    44,    44,     8,   329,    12,    44,    10,   237,   329,
     105,   126,   148,   274,   275,    35,   341,   342,   205,    34,
     225,   226,   227,   207,     9,    37,    74,    46,    11,   274,
     275,    74,   219,    44,    35,   211,   304,    44,    44,    44,
      44,    84,    85,    86,    37,   297,    46,   211,   307,   319,
     297,   297,   328,    88,    89,    51,   105,   282,    83,    83,
      83,   198,   205,     8,   309,   105,   206,   310,   328,   311,
     202,   204,   168,   312,   274,   275,   208,   209,   126,   249,
     200,   199,   289,   218,   302,   232,   305,   105,   306,   232,
     308,   289,   313,   329,   201,   166,   289,   286,   289,   329,
     148,   335,   337,   286,   287,   314,   316,   276,     0,   318,
     271,   204,     0,     0,   328,     0,    44,    44,   205,   328,
       0,     0,   345,   105,   126,   148,     0,   328,     0,   274,
     275,   283,     0,   285,     0,     0,   184,   290,     0,   289,
       0,   184,   184,     0,   194,     0,     0,   236,   328,   289,
       0,     0,   240,   328,   286,     0,    44,    44,     0,   356,
     364,     0,    74,   287,     0,   287,    74,     0,   232,   362,
     232,     0,     0,     0,    34,     0,   349,     0,   197,   351,
     148,   126,     0,   105,   215,   105,     0,   105,   105,    35,
     291,   293,   287,     0,   204,   105,   126,   148,    44,    37,
      49,    46,    49,     0,    78,    78,   297,   297,     0,    49,
     268,   273,   278,    49,   108,   130,   152,    49,     0,   167,
       0,   292,   280,     0,     0,   188,     0,   188,     0,   188,
       0,   215,    49,   263,   272,   277,   279,     0,     0,     0,
      44,     0,     0,     0,     0,   347,   184,    49,   348,   184,
       0,    49,    49,    74,    74,     0,    49,    74,     0,     0,
     108,   130,   152,   148,   126,     0,   105,     0,   105,     0,
     204,   350,   204,     0,   350,     0,    78,     0,     0,     0,
     321,    78,   322,    49,     0,   323,     0,    49,    49,    49,
      49,    44,    44,   332,   333,     0,     0,   184,   184,     0,
      74,     0,     0,   168,     0,     0,   108,   274,   275,   283,
     284,   285,   366,   368,   344,   108,    44,     0,    44,   274,
     275,   283,   343,   285,     0,     0,   166,   326,   130,   268,
     273,     0,   336,   331,     0,     0,   326,   108,   278,     0,
       0,     0,     0,   339,     0,     0,     0,   330,     0,   280,
     152,     0,   263,   272,   274,   275,   283,   346,   285,     0,
       0,   277,     0,   279,     0,     0,    49,    49,   274,   275,
     283,   369,   285,   108,   130,   152,     0,     0,     0,   357,
       0,     0,     0,     0,   326,     0,   188,     0,     0,   363,
       0,   188,   188,     0,   360,     0,     0,     0,     0,     0,
       0,     0,   365,     0,     0,     0,    49,    49,     0,     0,
       0,     0,    78,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   130,     0,   108,     0,   108,     0,   108,   108,     0,
       0,     0,     0,     0,     0,   108,   130,   152,    49,     0,
      50,     0,    50,     0,    79,    79,     0,     0,     0,    50,
       0,     0,     0,    50,   109,   131,   153,    50,     0,     0,
       0,     0,     0,     0,     0,   189,     0,   189,     0,   189,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,     0,     0,   188,    50,     0,   188,
       0,    50,    50,    78,    78,     0,    50,    78,     0,     0,
     109,   131,   153,   152,   130,     0,   108,     0,   108,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,    79,     0,    50,     0,     0,     0,    50,    50,    50,
      50,    49,    49,     0,     0,     0,     0,   188,   188,     0,
      78,     0,     0,     0,     0,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,   109,    49,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,   241,
       2,   242,     0,     4,     5,   243,   244,   109,     9,    10,
      11,    12,    13,     0,   245,   246,   247,   248,     0,     0,
     153,     0,     0,   249,   250,     0,     0,    25,   251,    27,
     252,    29,   253,     0,     0,     0,    50,    50,     0,     0,
       0,     0,     0,   109,   131,   153,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   189,     0,     0,     0,
       0,   189,   189,   241,     2,   242,     0,     4,     5,   243,
     324,   325,     0,     0,     0,     0,    50,    50,   245,   246,
     247,     0,    79,     0,     0,     0,    79,   249,   250,     0,
       0,    25,   251,    27,   252,    29,   253,     0,     0,     0,
     153,   131,     0,   109,     0,   109,     0,   109,   109,     0,
       0,     0,     0,     0,     0,   109,   131,   153,    50,     0,
      45,     0,    45,     0,    75,    75,     0,     0,     0,    45,
       0,     0,     0,    45,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,   185,     0,   185,     0,   185,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,   189,    45,     0,   189,
       0,    45,    45,    79,    79,     0,    45,    79,     0,     0,
       0,     0,     0,   153,   131,     0,   109,     0,   109,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
       0,    75,     0,    45,     0,     0,     0,    45,    45,    45,
      45,    50,    50,     0,     0,     0,     0,   189,   189,     0,
      79,     0,     0,     0,     0,   241,     2,   242,     0,     4,
       5,   243,   244,     8,     0,     0,    50,     0,    50,     0,
     245,   246,   247,     0,     0,     0,     0,    53,     0,   249,
     250,    80,    80,    25,   251,    27,   252,    29,   253,     0,
       0,   110,   132,   154,     0,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   190,     0,   190,     0,     0,    53,
       0,     0,     0,     0,     0,     0,    45,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,   185,   110,   132,   154,
       0,   185,   185,     0,   241,     2,   242,     0,     4,     5,
     243,   334,   325,    80,     0,     0,    45,    45,    80,   245,
     246,   247,    75,     0,     0,     0,    75,     0,   249,   250,
       0,     0,    25,   251,    27,   252,    29,   253,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,    91,
       2,    92,   110,     4,     5,    93,    94,     0,    45,     0,
       0,     0,     0,     0,   354,   132,   315,    95,    96,    97,
      98,    99,   100,   101,   110,     0,     0,    25,   102,    27,
     103,    29,   104,     0,     0,     0,     0,   154,     0,     0,
       0,     0,   270,   270,     0,   281,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,   185,     0,     0,   185,
     110,   132,   154,    75,    75,     0,     0,    75,     0,     0,
       0,     0,     0,   190,     0,     0,     0,     0,   190,   190,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,    80,
       0,    45,    45,    80,     0,     0,     0,   185,   185,     0,
      75,     0,     0,     0,     0,     0,     0,   154,   132,     0,
     110,     0,   110,     0,   110,   110,    45,     0,    45,     0,
       0,     0,   110,   132,   154,     0,     0,     0,     0,     0,
       0,   270,     0,     0,     0,     0,     0,     0,     0,     0,
     281,   281,     0,     0,     0,   270,   281,     0,     0,   281,
     270,   270,   270,     0,     0,     0,   281,   281,     0,     0,
       0,     0,   281,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,     0,     0,   190,     0,     0,     0,
      80,    80,     0,     0,    80,     0,     0,     0,     0,     0,
     154,   132,     0,   110,     0,   110,     0,   281,     0,     0,
       0,   270,     0,   281,     0,     0,   270,   281,   281,     0,
       0,   270,     0,     0,     0,   281,   281,     0,     0,     0,
       0,     0,     0,     0,   190,   190,     0,    80,     0,     0,
       0,     0,     0,     0,   270,     0,     0,   281,     0,     0,
     270,     0,   281,     1,     2,     3,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
       0,    25,    26,    27,    28,    29,    30,     1,     2,     3,
       0,     4,     5,     6,     7,   205,     9,    10,    11,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,    25,    26,    27,    28,    29,
      30,     1,     2,     3,     0,     4,     5,     6,     7,     0,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,     0,    25,
      26,    27,    28,    29,    30,     1,     2,     3,     0,     4,
       5,     6,     7,     0,     0,   222,   223,   224,     0,     0,
      14,    15,    16,    55,    18,    19,    20,    21,    22,    23,
      24,     0,     0,    25,    26,    27,    28,    29,    30,     1,
       2,     3,    54,     4,     5,     6,     7,     0,     0,     0,
       0,     0,     0,     0,    14,    15,    16,    55,    18,    19,
      20,    21,    22,    23,    24,     0,     0,    25,    26,    27,
      28,    29,    30,     1,     2,     3,     0,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,    14,    15,
      16,    55,   155,   156,   157,    21,   158,   159,    24,     0,
       0,    25,    26,    27,    28,    29,    30,     1,     2,     3,
       0,     4,     5,     6,     7,   203,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    55,    18,    19,    20,    21,
      22,    23,    24,     0,     0,    25,    26,    27,    28,    29,
      30,     1,     2,     3,     0,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,    14,    15,    16,    55,
      18,    19,    20,    21,    22,    23,    24,     0,     0,    25,
      26,    27,    28,    29,    30,     1,     2,     3,   210,     4,
       5,     6,     7,     0,     0,     0,     0,     0,     0,     0,
      14,    15,    16,    55,    18,    19,    20,    21,    22,    23,
      24,     0,     0,    25,    26,    27,    28,    29,    30,     1,
       2,     3,     0,     4,     5,     6,     7,     0,     0,     0,
       0,     0,     0,   228,    14,    15,    16,    55,    18,    19,
      20,    21,    22,    23,    24,     0,     0,    25,    26,    27,
      28,    29,    30,   241,     2,   242,     0,     4,     5,   243,
     244,     8,     9,    10,    11,    12,    13,     0,   245,   246,
     247,   248,     0,     0,     0,     0,     0,   249,   250,     0,
       0,    25,   251,    27,   252,    29,   253,     1,     2,     3,
       0,     4,     5,     6,     7,   301,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    55,    18,    19,    20,    21,
      22,    23,    24,     0,     0,    25,    26,    27,    28,    29,
      30,   241,     2,   242,     0,     4,     5,   243,   244,   205,
       9,    10,    11,    12,    13,     0,   245,   246,   247,   248,
       0,     0,     0,     0,     0,   249,   250,     0,     0,    25,
     251,    27,   252,    29,   253,     1,     2,     3,     0,     4,
       5,     6,     7,     0,     0,     0,     0,     0,     0,     0,
      14,    15,    16,    55,    18,    19,    20,    21,    22,    23,
      24,     0,   367,    25,    26,    27,    28,    29,    30,     1,
       2,     3,     0,     4,     5,     6,     7,     0,     0,     0,
       0,     0,     0,     0,    14,    15,    16,    55,    18,    19,
      20,    21,    22,    23,    24,   373,     0,    25,    26,    27,
      28,    29,    30,     1,     2,     3,     0,     4,     5,     6,
       7,     0,     0,     0,     0,     0,     0,     0,    14,    15,
      16,    55,    18,    19,    20,    21,    22,    23,    24,     0,
     374,    25,    26,    27,    28,    29,    30,     1,     2,     3,
       0,     4,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    55,    18,    19,    20,    21,
      22,    23,    24,     0,     0,    25,    26,    27,    28,    29,
      30,    58,     2,    59,     0,     4,     5,   211,   212,     0,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,     0,    25,
      71,    27,    72,    29,    73,    58,     2,    59,     0,     4,
       5,   211,   216,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,     0,    25,    71,    27,    72,    29,    73,    91,
       2,    92,     0,     4,     5,    93,    94,     0,     0,     0,
       0,     0,     0,     0,   229,   230,   231,    95,    96,    97,
      98,    99,   100,   101,     0,     0,     0,    25,   102,    27,
     103,    29,   104,    58,     2,    59,     0,     4,     5,   211,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,    25,    71,    27,    72,    29,    73,    58,     2,    59,
       0,     4,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,    25,    71,    27,    72,    29,
      73,   111,     2,   112,     0,     4,     5,   113,   114,     0,
       0,     0,     0,     0,     0,     0,     0,   234,   235,   116,
     117,   118,   119,   120,   121,   122,     0,     0,     0,    25,
     123,    27,   124,    29,   125,   133,     2,   134,     0,     4,
       5,   135,   136,     0,     0,     0,     0,     0,     0,     0,
       0,   238,   239,   138,   139,   140,   141,   142,   143,   144,
       0,     0,     0,    25,   145,    27,   146,    29,   147,   169,
       2,   170,     0,     4,     5,   171,   172,     0,     0,     0,
       0,     0,     0,     0,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,     0,    25,     0,   299,
       0,    29,   300,   133,     2,   134,     0,     4,     5,   135,
     136,     0,     0,     0,     0,     0,     0,     0,     0,   137,
     352,   138,   139,   140,   141,   142,   143,   144,     0,     0,
       0,    25,   145,    27,   146,    29,   147,   111,     2,   112,
       0,     4,     5,   113,   114,     0,     0,     0,     0,     0,
       0,     0,     0,   353,   115,   116,   117,   118,   119,   120,
     121,   122,     0,     0,     0,    25,   123,    27,   124,    29,
     125,    91,     2,    92,     0,     4,     5,    93,    94,     0,
       0,     0,     0,     0,     0,     0,   355,   317,     0,    95,
      96,    97,    98,    99,   100,   101,     0,     0,     0,    25,
     102,    27,   103,    29,   104,   169,     2,   170,     0,     4,
       5,   171,   172,     0,     0,     0,     0,     0,     0,     0,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,     0,     0,    25,     0,    27,     0,    29,   370,   111,
       2,   112,     0,     4,     5,   113,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,   116,   117,   118,
     119,   120,   121,   122,     0,     0,     0,    25,   123,    27,
     124,    29,   125,   133,     2,   134,     0,     4,     5,   135,
     136,     0,     0,     0,     0,     0,     0,     0,     0,   137,
       0,   138,   139,   140,   141,   142,   143,   144,     0,     0,
       0,    25,   145,    27,   146,    29,   147,    91,     2,    92,
       0,     4,     5,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   315,    95,    96,    97,    98,    99,
     100,   101,     0,     0,     0,    25,   102,    27,   103,    29,
     104,    91,     2,    92,     0,     4,     5,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,   317,     0,    95,
      96,    97,    98,    99,   100,   101,     0,     0,     0,    25,
     102,    27,   103,    29,   104,    91,     2,    92,     0,     4,
       5,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,   100,   101,
       0,     0,     0,    25,   102,    27,   103,    29,   104,   241,
       2,   242,     0,     4,     5,   243,   244,   325,     0,     0,
       0,     0,     0,     0,   245,   246,   247,     0,     0,     0,
       0,     0,     0,   249,   250,     0,     0,    25,   251,    27,
     252,    29,   253,   241,     2,   242,     0,     4,     5,   243,
     244,   359,     0,     0,     0,     0,     0,     0,   245,   246,
     247,     0,     0,     0,     0,     0,     0,   249,   250,     0,
       0,    25,   251,    27,   252,    29,   253,   241,     2,   242,
       0,     4,     5,   243,   244,     0,     0,     0,     0,     0,
       0,     0,   245,   246,   247,     0,     0,     0,     0,     0,
       0,   249,   250,     0,     0,    25,   251,    27,   252,    29,
     253,   241,     2,   242,     0,     4,     5,   243,   244,   327,
       0,     0,     0,     0,     0,     0,   245,   246,   247,     0,
       0,     0,     0,     0,     0,     0,   250,     0,     0,    25,
     251,    27,   252,    29,   253,   241,     2,   242,     0,     4,
       5,   243,   338,     0,     0,     0,     0,     0,     0,     0,
     245,   246,   247,     0,     0,     0,     0,     0,     0,   249,
     250,     0,     0,    25,   251,    27,   252,    29,   253,   241,
       2,   242,     0,     4,     5,   243,   244,   358,     0,     0,
       0,     0,     0,     0,   245,   246,   247,     0,     0,     0,
       0,     0,     0,     0,   250,     0,     0,    25,   251,    27,
     252,    29,   253,   241,     2,   242,     0,     4,     5,   243,
     244,   361,     0,     0,     0,     0,     0,     0,   245,   246,
     247,     0,     0,     0,     0,     0,     0,     0,   250,     0,
       0,    25,   251,    27,   252,    29,   253,   241,     2,   242,
       0,     4,     5,   243,   244,   372,     0,     0,     0,     0,
       0,     0,   245,   246,   247,     0,     0,     0,     0,     0,
       0,     0,   250,     0,     0,    25,   251,    27,   252,    29,
     253,   241,     2,   242,     0,     4,     5,   243,   244,     0,
       0,     0,     0,     0,     0,     0,   245,   246,   247,     0,
       0,     0,     0,     0,     0,     0,   250,     0,     0,    25,
     251,    27,   252,    29,   253,   169,     2,   170,     0,     4,
       5,   171,   172,     0,     0,     0,     0,     0,     0,     0,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,     0,     0,    25,   295,    27,   296,    29,   169,     2,
     170,     0,     4,     5,   171,   172,     0,     0,     0,     0,
       0,     0,     0,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,     0,     0,    25,   371,    27,   298,
      29,   169,     2,   170,     0,     4,     5,   171,   172,     0,
       0,     0,     0,     0,     0,     0,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,     0,     0,    25,
       0,    27,   298,    29,   169,     2,   170,     0,     4,     5,
     171,   172,     0,     0,     0,     0,     0,     0,     0,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
       0,     0,    25,     0,    27,     0,    29
};

static const yytype_int16 yycheck[] =
{
       0,    47,     2,    81,     4,     5,    35,    76,   106,     9,
      56,   128,    81,    13,    14,    15,    16,    17,     0,   160,
      32,     4,     5,     2,   254,    25,    27,    27,    29,    29,
       9,   157,    32,     0,    13,   166,   115,    83,    17,   150,
     162,   156,     5,     0,    90,     0,   166,    47,   168,     0,
      32,    51,    52,    11,   268,    15,    56,    13,   137,   273,
      60,    61,    62,    22,    23,    32,    29,    30,    11,    51,
      87,    88,    89,    52,    12,    32,    76,    32,    14,    22,
      23,    81,    11,    83,    51,     9,    10,    87,    88,    89,
      90,    13,    14,    15,    51,   186,    51,     9,    10,   329,
     191,   192,   264,    11,    12,     0,   106,    28,    87,    88,
      89,    37,    11,    11,    11,   115,    51,    11,   280,    11,
      46,   167,    17,    11,    22,    23,    52,    53,   128,    27,
      39,    38,   263,    81,   212,   233,   214,   137,   216,   237,
     218,   272,   230,   357,    40,    17,   277,   288,   279,   363,
     150,   277,   278,   294,   276,   231,   235,   283,    -1,   238,
     275,   207,    -1,    -1,   326,    -1,   166,   167,    11,   331,
      -1,    -1,   292,   173,   174,   175,    -1,   339,    -1,    22,
      23,    24,    -1,    26,    -1,    -1,   186,   166,    -1,   320,
      -1,   191,   192,    -1,   206,    -1,    -1,   314,   360,   330,
      -1,    -1,   313,   365,   345,    -1,   206,   207,    -1,   324,
     336,    -1,   212,   335,    -1,   337,   216,    -1,   316,   334,
     318,    -1,    -1,    -1,   206,    -1,   304,    -1,   257,   307,
     230,   231,    -1,   233,   303,   235,    -1,   237,   238,   206,
     166,   167,   364,    -1,   290,   245,   246,   247,   248,   206,
       0,   206,     2,    -1,     4,     5,   347,   348,    -1,     9,
     155,   156,   157,    13,    14,    15,    16,    17,    -1,   248,
      -1,   166,   158,    -1,    -1,    25,    -1,    27,    -1,    29,
      -1,   350,    32,   155,   156,   157,   158,    -1,    -1,    -1,
     290,    -1,    -1,    -1,    -1,   296,   296,    47,   299,   299,
      -1,    51,    52,   303,   304,    -1,    56,   307,    -1,    -1,
      60,    61,    62,   313,   314,    -1,   316,    -1,   318,    -1,
     366,   304,   368,    -1,   307,    -1,    76,    -1,    -1,    -1,
     256,    81,   258,    83,    -1,   261,    -1,    87,    88,    89,
      90,   341,   342,   269,   270,    -1,    -1,   347,   348,    -1,
     350,    -1,    -1,   248,    -1,    -1,   106,    22,    23,    24,
      25,    26,   341,   342,   290,   115,   366,    -1,   368,    22,
      23,    24,    25,    26,    -1,    -1,   248,   263,   128,   274,
     275,    -1,   277,   269,    -1,    -1,   272,   137,   283,    -1,
      -1,    -1,    -1,   279,    -1,    -1,    -1,   269,    -1,   285,
     150,    -1,   274,   275,    22,    23,    24,    25,    26,    -1,
      -1,   283,    -1,   285,    -1,    -1,   166,   167,    22,    23,
      24,    25,    26,   173,   174,   175,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,   320,    -1,   186,    -1,    -1,   334,
      -1,   191,   192,    -1,   330,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   338,    -1,    -1,    -1,   206,   207,    -1,    -1,
      -1,    -1,   212,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     230,   231,    -1,   233,    -1,   235,    -1,   237,   238,    -1,
      -1,    -1,    -1,    -1,    -1,   245,   246,   247,   248,    -1,
       0,    -1,     2,    -1,     4,     5,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    29,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     290,    -1,    -1,    -1,    -1,    -1,   296,    47,    -1,   299,
      -1,    51,    52,   303,   304,    -1,    56,   307,    -1,    -1,
      60,    61,    62,   313,   314,    -1,   316,    -1,   318,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    83,    -1,    -1,    -1,    87,    88,    89,
      90,   341,   342,    -1,    -1,    -1,    -1,   347,   348,    -1,
     350,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,   366,    -1,   368,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,     3,
       4,     5,    -1,     7,     8,     9,    10,   137,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
     150,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
      -1,   191,   192,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,   206,   207,    18,    19,
      20,    -1,   212,    -1,    -1,    -1,   216,    27,    28,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
     230,   231,    -1,   233,    -1,   235,    -1,   237,   238,    -1,
      -1,    -1,    -1,    -1,    -1,   245,   246,   247,   248,    -1,
       0,    -1,     2,    -1,     4,     5,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    29,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     290,    -1,    -1,    -1,    -1,    -1,   296,    47,    -1,   299,
      -1,    51,    52,   303,   304,    -1,    56,   307,    -1,    -1,
      -1,    -1,    -1,   313,   314,    -1,   316,    -1,   318,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    83,    -1,    -1,    -1,    87,    88,    89,
      90,   341,   342,    -1,    -1,    -1,    -1,   347,   348,    -1,
     350,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    -1,   366,    -1,   368,    -1,
      18,    19,    20,    -1,    -1,    -1,    -1,     0,    -1,    27,
      28,     4,     5,    31,    32,    33,    34,    35,    36,    -1,
      -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    -1,    29,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    60,    61,    62,
      -1,   191,   192,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    76,    -1,    -1,   206,   207,    81,    18,
      19,    20,   212,    -1,    -1,    -1,   216,    -1,    27,    28,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,   115,     7,     8,     9,    10,    -1,   248,    -1,
      -1,    -1,    -1,    -1,    18,   128,    20,    21,    22,    23,
      24,    25,    26,    27,   137,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,   155,   156,    -1,   158,    -1,    -1,    -1,    -1,
     290,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,   299,
     173,   174,   175,   303,   304,    -1,    -1,   307,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,   191,   192,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,   212,
      -1,   341,   342,   216,    -1,    -1,    -1,   347,   348,    -1,
     350,    -1,    -1,    -1,    -1,    -1,    -1,   230,   231,    -1,
     233,    -1,   235,    -1,   237,   238,   366,    -1,   368,    -1,
      -1,    -1,   245,   246,   247,    -1,    -1,    -1,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     263,   264,    -1,    -1,    -1,   268,   269,    -1,    -1,   272,
     273,   274,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,
      -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   296,    -1,    -1,   299,    -1,    -1,    -1,
     303,   304,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,
     313,   314,    -1,   316,    -1,   318,    -1,   320,    -1,    -1,
      -1,   324,    -1,   326,    -1,    -1,   329,   330,   331,    -1,
      -1,   334,    -1,    -1,    -1,   338,   339,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   347,   348,    -1,   350,    -1,    -1,
      -1,    -1,    -1,    -1,   357,    -1,    -1,   360,    -1,    -1,
     363,    -1,   365,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    32,    33,    34,    35,    36,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    32,    33,    34,    35,
      36,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      32,    33,    34,    35,    36,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    13,    14,    15,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    32,    33,    34,    35,    36,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,    33,
      34,    35,    36,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    32,    33,    34,    35,    36,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    32,    33,    34,    35,
      36,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      32,    33,    34,    35,    36,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    32,    33,    34,    35,    36,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,    33,
      34,    35,    36,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    35,    36,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    32,    33,    34,    35,
      36,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,    35,    36,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    32,    33,    34,    35,
      36,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      32,    33,    34,    35,    36,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    32,    33,    34,    35,    36,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,     3,     4,     5,    -1,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    32,    33,    34,    35,    36,     3,     4,     5,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    32,    33,    34,    35,
      36,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    -1,    33,
      -1,    35,    36,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    -1,    33,    -1,    35,    36,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,    35,    36,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    35,    36,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    35,
      36,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,
      32,    33,    34,    35,    36,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    35,    36,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,    33,
      34,    35,    36,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    32,    33,    34,    35,    36,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    32,    33,    34,    35,
      36,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,
      32,    33,    34,    35,    36,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    32,    33,    34,    35,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    31,    32,    33,    34,
      35,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      -1,    33,    34,    35,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    31,    -1,    33,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    31,    32,    33,    34,    35,
      36,    38,    39,    41,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    55,    58,    61,    70,    77,    84,
      85,    87,    90,    92,     6,    21,    70,    92,     3,     5,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    32,    34,    36,    55,    58,    75,    82,    84,    85,
      92,    75,    57,    70,    13,    14,    15,    53,    53,    53,
      70,     3,     5,     9,    10,    21,    22,    23,    24,    25,
      26,    27,    32,    34,    36,    55,    73,    80,    84,    85,
      92,     3,     5,     9,    10,    20,    21,    22,    23,    24,
      25,    26,    27,    32,    34,    36,    55,    59,    72,    79,
      84,    85,    92,     3,     5,     9,    10,    19,    21,    22,
      23,    24,    25,    26,    27,    32,    34,    36,    55,    60,
      71,    78,    84,    85,    92,    22,    23,    24,    26,    27,
      62,    63,    64,    65,    67,    68,    69,    70,    87,     3,
       5,     9,    10,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    55,    58,    76,    83,    84,    85,
      92,    76,    76,     0,    41,    86,    87,    45,    86,    50,
      51,    52,    86,    11,    77,    11,    39,    70,    86,    86,
       6,     9,    10,    54,    56,    82,    10,    54,    56,    11,
      88,    89,    13,    14,    15,    57,    57,    57,    17,    18,
      19,    20,    80,    73,    19,    20,    79,    73,    19,    20,
      78,     3,     5,     9,    10,    18,    19,    20,    21,    27,
      28,    32,    34,    36,    40,    42,    43,    44,    46,    55,
      58,    61,    66,    69,    74,    81,    84,    85,    87,    91,
      92,    66,    69,    87,    22,    23,    64,    69,    87,    69,
      74,    92,    28,    24,    25,    26,    63,    65,    62,    68,
      70,    86,    87,    86,    62,    32,    34,    83,    34,    33,
      36,    11,    54,    75,    10,    54,    54,    10,    54,    11,
      11,    11,    11,    71,    72,    20,    73,    19,    73,    42,
      69,    86,    86,    86,    10,    11,    74,    11,    81,    40,
      69,    74,    86,    86,    10,    64,    87,    64,    10,    74,
       5,    29,    30,    25,    86,    62,    25,    76,    76,    54,
      75,    54,    20,    19,    18,    18,    66,    87,    11,    11,
      74,    11,    66,    87,    64,    74,    70,    30,    70,    25,
      36,    32,    11,    29,    30
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 70 "wikiparse.y"
    { debugf ("article#1 "); (yyval.node) = articlenode = newNode (Article); ;}
    break;

  case 3:
#line 71 "wikiparse.y"
    { debugf ("article#2 "); (yyval.node) = articlenode = newNode (Article); ;}
    break;

  case 4:
#line 72 "wikiparse.y"
    { debugf ("article#3 "); (yyval.node) = articlenode = nodeAddChild (newNode (Article), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 5:
#line 73 "wikiparse.y"
    { debugf ("article#3 "); (yyval.node) = articlenode = nodeAddChild (newNode (Article), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 6:
#line 75 "wikiparse.y"
    { debugf ("blocks#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 7:
#line 76 "wikiparse.y"
    { debugf ("blocks#2 "); (yyval.node) = nodeAddSibling ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 8:
#line 78 "wikiparse.y"
    { debugf ("blocksintbl#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:
#line 79 "wikiparse.y"
    { debugf ("blocksintbl#2 "); (yyval.node) = nodeAddSibling ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 10:
#line 81 "wikiparse.y"
    { debugf ("block#1 "); (yyval.node) = processPreBlock ((yyvsp[(1) - (1)].node)); ;}
    break;

  case 11:
#line 82 "wikiparse.y"
    { debugf ("block#2 "); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 12:
#line 83 "wikiparse.y"
    { debugf ("block#3 "); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 13:
#line 84 "wikiparse.y"
    { debugf ("block#4 "); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 14:
#line 85 "wikiparse.y"
    { debugf ("block#5 "); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 15:
#line 86 "wikiparse.y"
    { debugf ("block#6 "); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 16:
#line 88 "wikiparse.y"
    { debugf ("blockintbl#1 "); (yyval.node) = processPreBlock ((yyvsp[(1) - (1)].node)); ;}
    break;

  case 17:
#line 89 "wikiparse.y"
    { debugf ("blockintbl#2 "); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 18:
#line 90 "wikiparse.y"
    { debugf ("blockintbl#3 "); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 19:
#line 91 "wikiparse.y"
    { debugf ("blockintbl#4 "); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 20:
#line 92 "wikiparse.y"
    { debugf ("blockintbl#5 "); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 21:
#line 93 "wikiparse.y"
    { debugf ("blockintbl#6 "); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 22:
#line 96 "wikiparse.y"
    { debugf ("heading#1 "); (yyval.node) = nodeAddChild (newNodeI (Heading, (yyvsp[(1) - (3)].num)), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 23:
#line 98 "wikiparse.y"
    { debugf ("heading#2 "); (yyval.node) = nodeAddChild (newNode (Paragraph), makeTextBlock (convertHeadingToText ((yyvsp[(1) - (2)].num)), (yyvsp[(2) - (2)].node))); ;}
    break;

  case 24:
#line 100 "wikiparse.y"
    { debugf ("heading#3 "); (yyval.node) = nodeAddChild (newNode (Paragraph), convertHeadingToText ((yyvsp[(1) - (1)].num))); ;}
    break;

  case 25:
#line 102 "wikiparse.y"
    { debugf ("preblock#1 "); (yyval.node) = nodeAddChild (newNode (PreBlock), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 26:
#line 103 "wikiparse.y"
    { debugf ("preblock#2 "); (yyval.node) = nodeAddChild ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 27:
#line 106 "wikiparse.y"
    { debugf ("preline#1 "); (yyval.node) = nodeAddChild2 (newNode (PreLine), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 28:
#line 108 "wikiparse.y"
    { debugf ("listblock#1 "); (yyval.node) = processListBlock ((yyvsp[(1) - (1)].node)); ;}
    break;

  case 29:
#line 109 "wikiparse.y"
    { debugf ("listblock#2 "); (yyval.node) = processListBlock ((yyvsp[(1) - (1)].node)); ;}
    break;

  case 30:
#line 110 "wikiparse.y"
    { debugf ("listblock#3 "); (yyval.node) = processListBlock ((yyvsp[(1) - (1)].node)); ;}
    break;

  case 31:
#line 112 "wikiparse.y"
    { debugf ("bulletlistblock#1 "); (yyval.node) = nodeAddChild (newNode (ListBlock), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 32:
#line 113 "wikiparse.y"
    { debugf ("bulletlistblock#2 "); (yyval.node) = nodeAddChild ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 33:
#line 114 "wikiparse.y"
    { debugf ("numberlistblock#1 "); (yyval.node) = nodeAddChild (newNode (ListBlock), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 34:
#line 115 "wikiparse.y"
    { debugf ("numberlistblock#2 "); (yyval.node) = nodeAddChild ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 35:
#line 116 "wikiparse.y"
    { debugf ("identlistblock#1 "); (yyval.node) = nodeAddChild (newNode (ListBlock), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 36:
#line 117 "wikiparse.y"
    { debugf ("identlistblock#2 "); (yyval.node) = nodeAddChild ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 37:
#line 120 "wikiparse.y"
    { debugf ("bulletlistline#1 "); (yyval.node) = nodeAddChild (nodePrependChild ((yyvsp[(2) - (4)].node), newNode (ListBullet)), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 38:
#line 122 "wikiparse.y"
    { debugf ("bulletlistline#2 "); (yyval.node) = nodeAddChild (nodePrependChild ((yyvsp[(2) - (3)].node), newNode (ListBullet)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 39:
#line 124 "wikiparse.y"
    { debugf ("numberlistline#1 "); (yyval.node) = nodeAddChild (nodePrependChild ((yyvsp[(2) - (4)].node), newNode (ListNumbered)), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 40:
#line 126 "wikiparse.y"
    { debugf ("numberlistline#2 "); (yyval.node) = nodeAddChild (nodePrependChild ((yyvsp[(2) - (3)].node), newNode (ListNumbered)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 41:
#line 128 "wikiparse.y"
    { debugf ("identlistline#1 "); (yyval.node) = nodeAddChild (nodePrependChild ((yyvsp[(2) - (4)].node), newNode (ListIdent)), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 42:
#line 130 "wikiparse.y"
    { debugf ("identlistline#2 "); (yyval.node) = nodeAddChild (nodePrependChild ((yyvsp[(2) - (3)].node), newNode (ListIdent)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 43:
#line 132 "wikiparse.y"
    { debugf ("listseries#1 "); (yyval.node) = newNode (ListLine); ;}
    break;

  case 44:
#line 134 "wikiparse.y"
    { debugf ("listseries#2 "); (yyval.node) = nodeAddChild (newNode (ListLine), newNode (ListBullet)); ;}
    break;

  case 45:
#line 136 "wikiparse.y"
    { debugf ("listseries#3 "); (yyval.node) = nodeAddChild (newNode (ListLine), newNode (ListNumbered)); ;}
    break;

  case 46:
#line 138 "wikiparse.y"
    { debugf ("listseries#4 "); (yyval.node) = nodeAddChild (newNode (ListLine), newNode (ListIdent)); ;}
    break;

  case 47:
#line 139 "wikiparse.y"
    { debugf ("listseries#5 "); (yyval.node) = nodeAddChild ((yyvsp[(1) - (2)].node), newNode (ListBullet)); ;}
    break;

  case 48:
#line 140 "wikiparse.y"
    { debugf ("listseries#6 "); (yyval.node) = nodeAddChild ((yyvsp[(1) - (2)].node), newNode (ListNumbered)); ;}
    break;

  case 49:
#line 141 "wikiparse.y"
    { debugf ("listseries#6 "); (yyval.node) = nodeAddChild ((yyvsp[(1) - (2)].node), newNode (ListIdent)); ;}
    break;

  case 50:
#line 151 "wikiparse.y"
    {;}
    break;

  case 51:
#line 157 "wikiparse.y"
    { debugf ("linketc#1 "); (yyval.node) = nodeAddChild (newNodeI (LinkEtc, 0), nodeAddChild (newNode (LinkTarget), (yyvsp[(2) - (3)].node))); ;}
    break;

  case 52:
#line 159 "wikiparse.y"
    { debugf ("linketc#2 "); (yyval.node) = nodeAddChild (newNodeI (LinkEtc, 1), nodeAddChild (newNode (LinkTarget), (yyvsp[(2) - (4)].node))); ;}
    break;

  case 53:
#line 161 "wikiparse.y"
    { debugf ("linketc#3 "); (yyval.node) = nodeAddChild2 (newNodeI (LinkEtc, 0), nodeAddChild (newNode (LinkTarget), (yyvsp[(2) - (4)].node)), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 54:
#line 163 "wikiparse.y"
    { debugf ("linketc#4 "); (yyval.node) = nodeAddChild2 (newNodeI (LinkEtc, 1), nodeAddChild (newNode (LinkTarget), (yyvsp[(2) - (5)].node)), (yyvsp[(3) - (5)].node)); ;}
    break;

  case 55:
#line 165 "wikiparse.y"
    { debugf ("linketc#5 "); (yyval.node) = nodeAddChild (newNodeI (LinkEtc, 2), nodeAddChild (newNode (LinkTarget), (yyvsp[(2) - (3)].node))); ;}
    break;

  case 56:
#line 167 "wikiparse.y"
    { debugf ("linketc#6 "); (yyval.node) = nodeAddChild (newNodeI (LinkEtc, 3), nodeAddChild (newNode (LinkTarget), (yyvsp[(2) - (4)].node))); ;}
    break;

  case 57:
#line 169 "wikiparse.y"
    { debugf ("linketc#7 "); (yyval.node) = nodeAddChild2 (newNodeI (LinkEtc, 2), nodeAddChild (newNode (LinkTarget), (yyvsp[(2) - (4)].node)), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 58:
#line 171 "wikiparse.y"
    { debugf ("linketc#8 "); (yyval.node) = nodeAddChild2 (newNodeI (LinkEtc, 3), nodeAddChild (newNode (LinkTarget), (yyvsp[(2) - (5)].node)), (yyvsp[(3) - (5)].node)); ;}
    break;

  case 59:
#line 175 "wikiparse.y"
    { debugf ("linketc#9 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "[["), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 60:
#line 177 "wikiparse.y"
    { debugf ("linketc#10 "); (yyval.node) = makeTextBlock2 (newNodeS (TextToken, "[["), (yyvsp[(2) - (3)].node), newNodeS (TextToken, "|")); ;}
    break;

  case 61:
#line 179 "wikiparse.y"
    { debugf ("linketc#11 "); (yyval.node) = makeTextBlock2 (newNodeS (TextToken, "[["), (yyvsp[(2) - (3)].node), convertPipeSeriesToText ((yyvsp[(3) - (3)].node))); ;}
    break;

  case 62:
#line 181 "wikiparse.y"
    { debugf ("linketc#12 "); (yyval.node) = makeTextBlock3 (newNodeS (TextToken, "[["), (yyvsp[(2) - (4)].node), convertPipeSeriesToText ((yyvsp[(3) - (4)].node)), newNodeS (TextToken, "|")); ;}
    break;

  case 63:
#line 183 "wikiparse.y"
    { debugf ("linketc#13 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "[[:"), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 64:
#line 185 "wikiparse.y"
    { debugf ("linketc#14 "); (yyval.node) = makeTextBlock2 (newNodeS (TextToken, "[[:"), (yyvsp[(2) - (3)].node), newNodeS (TextToken, "|")); ;}
    break;

  case 65:
#line 187 "wikiparse.y"
    { debugf ("linketc#15 "); (yyval.node) = makeTextBlock2 (newNodeS (TextToken, "[[:"), (yyvsp[(2) - (3)].node), convertPipeSeriesToText ((yyvsp[(3) - (3)].node))); ;}
    break;

  case 66:
#line 189 "wikiparse.y"
    { debugf ("linketc#16 "); (yyval.node) = makeTextBlock3 (newNodeS (TextToken, "[[:"), (yyvsp[(2) - (4)].node), convertPipeSeriesToText ((yyvsp[(3) - (4)].node)), newNodeS (TextToken, "|")); ;}
    break;

  case 67:
#line 192 "wikiparse.y"
    { debugf ("pipeseries#1 "); (yyval.node) = nodeAddChild (newNode (LinkOption), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 68:
#line 193 "wikiparse.y"
    { debugf ("pipeseries#2 "); (yyval.node) = nodeAddSibling ((yyvsp[(1) - (3)].node), nodeAddChild (newNode (LinkOption), (yyvsp[(3) - (3)].node))); ;}
    break;

  case 69:
#line 195 "wikiparse.y"
    { debugf ("textorempty#1 "); (yyval.node) = newNodeS (TextToken, ""); ;}
    break;

  case 70:
#line 196 "wikiparse.y"
    { debugf ("textorempty#2 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 71:
#line 199 "wikiparse.y"
    { debugf ("italicsorbold#1 "); (yyval.node) = nodeAddChild (newNode (Italics), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 72:
#line 201 "wikiparse.y"
    { debugf ("italicsorbold#2 "); (yyval.node) = nodeAddChild (newNode (Italics),
                                makeTextBlock ((yyvsp[(2) - (5)].node), nodeAddChild (newNode (Bold), (yyvsp[(4) - (5)].node)))); ;}
    break;

  case 73:
#line 204 "wikiparse.y"
    { debugf ("italicsorbold#3 "); (yyval.node) =
                        makeTextBlock2 (nodeAddChild (newNode (Italics), (yyvsp[(2) - (4)].node)), newNodeS (TextToken, "'"), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 74:
#line 207 "wikiparse.y"
    { debugf ("italicsorbold#4 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "''"), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 75:
#line 209 "wikiparse.y"
    { debugf ("italicsorbold#5 "); (yyval.node) = nodeAddChild (newNode (Bold), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 76:
#line 211 "wikiparse.y"
    { debugf ("italicsorbold#6 "); (yyval.node) = nodeAddChild (newNode (Bold),
                            makeTextBlock ((yyvsp[(2) - (5)].node), nodeAddChild (newNode (Italics), (yyvsp[(4) - (5)].node)))); ;}
    break;

  case 77:
#line 217 "wikiparse.y"
    { debugf ("italicsorbold#7 "); (yyval.node) = processNestedItalics (makeTextBlock2 (newNodeS
                            (TextToken, "'"), nodeAddChild (newNode (Italics), (yyvsp[(2) - (4)].node)), (yyvsp[(4) - (4)].node))); ;}
    break;

  case 78:
#line 220 "wikiparse.y"
    { debugf ("italicsorbold#8 "); (yyval.node) = processNestedItalics (makeTextBlock (newNodeS
                            (TextToken, "'"), nodeAddChild (newNode (Italics), (yyvsp[(2) - (3)].node)))); ;}
    break;

  case 79:
#line 223 "wikiparse.y"
    { debugf ("italicsorbold#9 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "'''"), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 80:
#line 225 "wikiparse.y"
    { debugf ("italicsorbold#10 "); (yyval.node) = nodeAddChild (newNode (Italics),
                            nodeAddChild (newNode (Bold), (yyvsp[(2) - (3)].node))); ;}
    break;

  case 81:
#line 228 "wikiparse.y"
    { debugf ("italicsorbold#11 "); (yyval.node) = nodeAddChild (newNode (Italics),
                            makeTextBlock (nodeAddChild (newNode (Bold), (yyvsp[(2) - (5)].node)), (yyvsp[(4) - (5)].node))); ;}
    break;

  case 82:
#line 231 "wikiparse.y"
    { debugf ("italicsorbold#12 "); (yyval.node) = makeTextBlock2 (newNodeS (TextToken, "''"),
                            nodeAddChild (newNode (Bold), (yyvsp[(2) - (4)].node)), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 83:
#line 234 "wikiparse.y"
    { debugf ("italicsorbold#13 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "''"),
                            nodeAddChild (newNode (Bold), (yyvsp[(2) - (3)].node))); ;}
    break;

  case 84:
#line 237 "wikiparse.y"
    { debugf ("italicsorbold#14 "); (yyval.node) = nodeAddChild (newNode (Bold),
                            makeTextBlock (nodeAddChild (newNode (Italics), (yyvsp[(2) - (5)].node)), (yyvsp[(4) - (5)].node))); ;}
    break;

  case 85:
#line 240 "wikiparse.y"
    { debugf ("italicsorbold#15 "); (yyval.node) = makeTextBlock2 (newNodeS (TextToken, "'''"),
                            nodeAddChild (newNode (Italics), (yyvsp[(2) - (4)].node)), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 86:
#line 243 "wikiparse.y"
    { debugf ("italicsorbold#16 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "'''"),
                            nodeAddChild (newNode (Italics), (yyvsp[(2) - (3)].node))); ;}
    break;

  case 87:
#line 246 "wikiparse.y"
    { debugf ("italicsorbold#17 ");
                            (yyval.node) = makeTextBlock (newNodeS (TextToken, "'''''"), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 88:
#line 250 "wikiparse.y"
    { debugf ("italicsnobold#1 "); (yyval.node) = nodeAddChild (newNode (Italics), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 89:
#line 252 "wikiparse.y"
    { debugf ("italicsnobold#2 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "''"), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 90:
#line 255 "wikiparse.y"
    { debugf ("boldnoitalics#1 "); (yyval.node) = nodeAddChild (newNode (Bold), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 91:
#line 257 "wikiparse.y"
    { debugf ("boldnoitalics#2 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "'''"), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 92:
#line 260 "wikiparse.y"
    { debugf ("table#1 "); (yyval.node) = nodeAddChild2 (newNode (Table), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 93:
#line 262 "wikiparse.y"
    { debugf ("table#2 "); (yyval.node) = nodeAddChild2 (newNode (Table), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:
#line 264 "wikiparse.y"
    { debugf ("table#3 "); (yyval.node) = nodeAddChild2 (newNode (Table), (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 95:
#line 266 "wikiparse.y"
    { debugf ("table#4 "); (yyval.node) = nodeAddChild2 (newNode (Table), (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 96:
#line 268 "wikiparse.y"
    { debugf ("table#5 "); (yyval.node) = nodeAddChild (newNode (Table), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 97:
#line 270 "wikiparse.y"
    { debugf ("table#6 "); (yyval.node) = nodeAddChild (newNode (Table), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 98:
#line 272 "wikiparse.y"
    { debugf ("table#7 "); (yyval.node) = nodeAddChild (newNode (Table), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 99:
#line 274 "wikiparse.y"
    { debugf ("table#8 "); (yyval.node) = nodeAddChild (newNode (Table), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 100:
#line 277 "wikiparse.y"
    { debugf ("table#9 "); (yyval.node) = nodeAddChild (newNode (Paragraph),
                            makeTextBlock (newNodeS (TextToken, addSpaces ("{|", (yyvsp[(1) - (3)].num))),
                                           convertAttributesToText ((yyvsp[(2) - (3)].node)))); ;}
    break;

  case 101:
#line 281 "wikiparse.y"
    { debugf ("table#10 "); (yyval.node) = nodeAddChild (newNode (Paragraph),
                            makeTextBlock2 (newNodeS (TextToken, addSpaces ("{|", (yyvsp[(1) - (4)].num))),
                                            convertAttributesToText ((yyvsp[(2) - (4)].node)), (yyvsp[(3) - (4)].node))); ;}
    break;

  case 102:
#line 285 "wikiparse.y"
    { debugf ("table#11 "); (yyval.node) = nodeAddChild (newNode (Paragraph),
                            makeTextBlock (newNodeS (TextToken, addSpaces ("{|", (yyvsp[(1) - (3)].num))), (yyvsp[(3) - (3)].node))); ;}
    break;

  case 103:
#line 288 "wikiparse.y"
    { debugf ("table#12 "); (yyval.node) = nodeAddChild (newNode (Paragraph),
                            newNodeS (TextToken, addSpaces ("{|", (yyvsp[(1) - (2)].num)))); ;}
    break;

  case 104:
#line 291 "wikiparse.y"
    { debugf ("tablerows#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 105:
#line 292 "wikiparse.y"
    { debugf ("tablerows#2 "); (yyval.node) = nodeAddSibling ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 106:
#line 295 "wikiparse.y"
    { debugf ("tablerow#1 "); (yyval.node) = nodeAddChild2 (newNode (TableRow), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 107:
#line 297 "wikiparse.y"
    { debugf ("tablerow#2 "); (yyval.node) = nodeAddChild (newNode (TableRow), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 108:
#line 299 "wikiparse.y"
    { debugf ("tablerow#3 "); (yyval.node) = nodeAddChild2 (newNode (TableRow), (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 109:
#line 301 "wikiparse.y"
    { debugf ("tablerow#4 "); (yyval.node) = nodeAddChild (newNode (TableRow), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 110:
#line 304 "wikiparse.y"
    { debugf ("tablerow#5 "); (yyval.node) = nodeAddChild (newNode (TableRow), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 111:
#line 307 "wikiparse.y"
    { debugf ("tablerow#6 "); freeRecursivelyWithSiblings ((yyvsp[(2) - (3)].node)); (yyval.node) = 0; ;}
    break;

  case 112:
#line 309 "wikiparse.y"
    { debugf ("tablerow#7 "); freeRecursivelyWithSiblings ((yyvsp[(2) - (2)].node)); (yyval.node) = 0; ;}
    break;

  case 113:
#line 311 "wikiparse.y"
    { debugf ("tablerow#8 "); (yyval.node) = 0; ;}
    break;

  case 114:
#line 313 "wikiparse.y"
    { debugf ("tablerow#9 "); (yyval.node) = 0; ;}
    break;

  case 115:
#line 315 "wikiparse.y"
    { debugf ("tablerow#10 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 116:
#line 317 "wikiparse.y"
    { debugf ("tablecells#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 117:
#line 318 "wikiparse.y"
    { debugf ("tablecells#2 "); (yyval.node) = nodeAddSibling ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 118:
#line 321 "wikiparse.y"
    { debugf ("tablecell#1 "); (yyval.node) = nodeAddChild2 (newNode (TableCell), (yyvsp[(2) - (4)].node), processTableCellContents ((yyvsp[(4) - (4)].node))); ;}
    break;

  case 119:
#line 323 "wikiparse.y"
    { debugf ("tablecell#2 "); (yyval.node) = nodeAddChild (newNode (TableCell), processTableCellContents ((yyvsp[(2) - (2)].node))); ;}
    break;

  case 120:
#line 325 "wikiparse.y"
    { debugf ("tablecell#3 "); (yyval.node) = nodeAddChild (newNode (TableCell), (yyvsp[(2) - (4)].node)); ;}
    break;

  case 121:
#line 327 "wikiparse.y"
    { debugf ("tablecell#4 "); (yyval.node) = nodeAddChild (newNode (TableCell), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 122:
#line 329 "wikiparse.y"
    { debugf ("tablecell#5 "); (yyval.node) = newNode (TableCell); ;}
    break;

  case 123:
#line 331 "wikiparse.y"
    { debugf ("tablecell#6 "); (yyval.node) = newNode (TableCell); ;}
    break;

  case 124:
#line 333 "wikiparse.y"
    { debugf ("tablecell#7 "); (yyval.node) = nodeAddChild2 (newNode (TableHead), (yyvsp[(2) - (4)].node), processTableCellContents ((yyvsp[(4) - (4)].node))); ;}
    break;

  case 125:
#line 335 "wikiparse.y"
    { debugf ("tablecell#8 "); (yyval.node) = nodeAddChild (newNode (TableHead), processTableCellContents ((yyvsp[(2) - (2)].node))); ;}
    break;

  case 126:
#line 337 "wikiparse.y"
    { debugf ("tablecell#9 "); (yyval.node) = nodeAddChild (newNode (TableHead), (yyvsp[(2) - (4)].node)); ;}
    break;

  case 127:
#line 339 "wikiparse.y"
    { debugf ("tablecell#10 "); (yyval.node) = nodeAddChild (newNode (TableHead), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 128:
#line 341 "wikiparse.y"
    { debugf ("tablecell#11 "); (yyval.node) = newNode (TableHead); ;}
    break;

  case 129:
#line 343 "wikiparse.y"
    { debugf ("tablecell#12 "); (yyval.node) = newNode (TableHead); ;}
    break;

  case 130:
#line 346 "wikiparse.y"
    { debugf ("tablecellcontents#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 131:
#line 348 "wikiparse.y"
    { debugf ("tablecellcontents#2 "); (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 132:
#line 351 "wikiparse.y"
    { debugf ("tablecaption#1 "); (yyval.node) = nodeAddChild2 (newNode (TableCaption), (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 133:
#line 353 "wikiparse.y"
    { debugf ("tablecaption#2 "); (yyval.node) = nodeAddChild (newNode (TableCaption), makeTextBlock (convertAttributesToText ((yyvsp[(2) - (3)].node)), (yyvsp[(3) - (3)].node))); ;}
    break;

  case 134:
#line 355 "wikiparse.y"
    { debugf ("tablecaption#3 "); (yyval.node) = nodeAddChild (newNode (TableCaption), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 135:
#line 357 "wikiparse.y"
    { debugf ("tablecaption#4 "); (yyval.node) = nodeAddChild (newNode (TableCaption), makeTextBlock (convertAttributesToText ((yyvsp[(2) - (3)].node)), newNodeS (TextToken, "|"))); ;}
    break;

  case 136:
#line 359 "wikiparse.y"
    { debugf ("tablecaption#5 "); (yyval.node) = nodeAddChild (newNode (TableCaption), convertAttributesToText ((yyvsp[(2) - (2)].node))); ;}
    break;

  case 137:
#line 361 "wikiparse.y"
    { debugf ("tablecaption#6 "); (yyval.node) = 0; ;}
    break;

  case 138:
#line 366 "wikiparse.y"
    { debugf ("attribute#1 "); (yyval.node) = newNodeA (0, (yyvsp[(1) - (1)].ad), 0, 0); ;}
    break;

  case 139:
#line 368 "wikiparse.y"
    { debugf ("attribute#2 "); (yyval.node) = nodeAddChild (newNodeA (1, (yyvsp[(1) - (3)].ad), (yyvsp[(2) - (3)].num), strtrimNC ((yyvsp[(3) - (3)].node))), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 140:
#line 370 "wikiparse.y"
    { debugf ("attribute#3 "); (yyval.node) = nodeAddChild (newNodeA (2, (yyvsp[(1) - (5)].ad), (yyvsp[(2) - (5)].num), (yyvsp[(5) - (5)].num)), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 141:
#line 372 "wikiparse.y"
    { debugf ("attribute#4 "); (yyval.node) = nodeAddChild (newNodeA (3, (yyvsp[(1) - (5)].ad), (yyvsp[(2) - (5)].num), (yyvsp[(5) - (5)].num)), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 142:
#line 374 "wikiparse.y"
    { debugf ("attribute#5 "); (yyval.node) = newNodeA (3, (yyvsp[(1) - (4)].ad), (yyvsp[(2) - (4)].num), (yyvsp[(4) - (4)].num)); ;}
    break;

  case 143:
#line 376 "wikiparse.y"
    { debugf ("attribute#6 "); (yyval.node) = newNodeA (1, (yyvsp[(1) - (2)].ad), (yyvsp[(2) - (2)].num), 0); ;}
    break;

  case 144:
#line 378 "wikiparse.y"
    { debugf ("attributes#1 "); (yyval.node) = nodeAddChild (newNode (AttributeGroup), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 145:
#line 379 "wikiparse.y"
    { debugf ("attributes#2 "); (yyval.node) = nodeAddChild ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 146:
#line 381 "wikiparse.y"
    { debugf ("text#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 147:
#line 382 "wikiparse.y"
    { debugf ("text#2 "); (yyval.node) = makeTextBlock ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 148:
#line 383 "wikiparse.y"
    { debugf ("textnoital#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 149:
#line 384 "wikiparse.y"
    { debugf ("textnoital#2 "); (yyval.node) = makeTextBlock ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 150:
#line 385 "wikiparse.y"
    { debugf ("textnobold#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 151:
#line 386 "wikiparse.y"
    { debugf ("textnobold#2 "); (yyval.node) = makeTextBlock ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 152:
#line 387 "wikiparse.y"
    { debugf ("textnoboit#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 153:
#line 388 "wikiparse.y"
    { debugf ("textnoboit#2 "); (yyval.node) = makeTextBlock ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 154:
#line 389 "wikiparse.y"
    { debugf ("textintbl#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 155:
#line 390 "wikiparse.y"
    { debugf ("textintbl#2 "); (yyval.node) = makeTextBlock ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 156:
#line 391 "wikiparse.y"
    { debugf ("textinlink#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 157:
#line 392 "wikiparse.y"
    { debugf ("textinlink#2 "); (yyval.node) = makeTextBlock ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 158:
#line 393 "wikiparse.y"
    { debugf ("textintmpl#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 159:
#line 394 "wikiparse.y"
    { debugf ("textintmpl#2 "); (yyval.node) = makeTextBlock ((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 160:
#line 396 "wikiparse.y"
    { debugf ("textelement#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 161:
#line 397 "wikiparse.y"
    { debugf ("textelement#2 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 162:
#line 398 "wikiparse.y"
    { debugf ("textelement#3 "); (yyval.node) = newNodeS (TextToken, "|"); ;}
    break;

  case 163:
#line 399 "wikiparse.y"
    { debugf ("textelement#4 "); (yyval.node) = newNodeS (TextToken, "]]"); ;}
    break;

  case 164:
#line 400 "wikiparse.y"
    { debugf ("textelement#5 "); (yyval.node) = newNodeS (TextToken, "''"); ;}
    break;

  case 165:
#line 401 "wikiparse.y"
    { debugf ("textelement#6 "); (yyval.node) = newNodeS (TextToken, "'''"); ;}
    break;

  case 166:
#line 402 "wikiparse.y"
    { debugf ("textelement#7 "); (yyval.node) = newNodeS (TextToken, "'''''"); ;}
    break;

  case 167:
#line 403 "wikiparse.y"
    { debugf ("textelement#8 "); (yyval.node) = newNodeS (TextToken, addSpaces ("=", (yyvsp[(1) - (1)].num))); ;}
    break;

  case 168:
#line 404 "wikiparse.y"
    { debugf ("textelement#9 "); (yyval.node) = newNodeS (TextToken, addSpaces ("    {|", (yyvsp[(1) - (1)].num))); ;}
    break;

  case 169:
#line 405 "wikiparse.y"
    { debugf ("textelement#10 "); (yyval.node) = newNodeS (TextToken, "|}"); ;}
    break;

  case 170:
#line 406 "wikiparse.y"
    { debugf ("textelement#11 "); (yyval.node) = convertTableRowToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 171:
#line 407 "wikiparse.y"
    { debugf ("textelement#12 "); (yyval.node) = convertTableCellToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 172:
#line 408 "wikiparse.y"
    { debugf ("textelement#13 "); (yyval.node) = convertTableHeadToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 173:
#line 409 "wikiparse.y"
    { debugf ("textelement#14 "); (yyval.node) = convertTableCaptionToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 174:
#line 410 "wikiparse.y"
    { debugf ("textelement#15 "); (yyval.node) = convertAttributeDataToText ((yyvsp[(1) - (1)].ad)); ;}
    break;

  case 175:
#line 411 "wikiparse.y"
    { debugf ("textelement#16 "); (yyval.node) = newNodeS (TextToken, "}}}}}"); ;}
    break;

  case 176:
#line 412 "wikiparse.y"
    { debugf ("textelement#17 "); (yyval.node) = newNodeS (TextToken, "}}}"); ;}
    break;

  case 177:
#line 413 "wikiparse.y"
    { debugf ("textelement#18 "); (yyval.node) = newNodeS (TextToken, "}}"); ;}
    break;

  case 178:
#line 414 "wikiparse.y"
    { debugf ("textelement#19 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 179:
#line 415 "wikiparse.y"
    { debugf ("textelement#20 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 180:
#line 416 "wikiparse.y"
    { debugf ("textelement#21 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 181:
#line 417 "wikiparse.y"
    { debugf ("textelement#22 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 182:
#line 418 "wikiparse.y"
    { debugf ("textelement#23 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 183:
#line 421 "wikiparse.y"
    { debugf ("textelementnoital#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 184:
#line 422 "wikiparse.y"
    { debugf ("textelementnoital#2 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 185:
#line 423 "wikiparse.y"
    { debugf ("textelementnoital#3 "); (yyval.node) = newNodeS (TextToken, "|"); ;}
    break;

  case 186:
#line 424 "wikiparse.y"
    { debugf ("textelementnoital#4 "); (yyval.node) = newNodeS (TextToken, "]]"); ;}
    break;

  case 187:
#line 425 "wikiparse.y"
    { debugf ("textelementnoital#5 "); (yyval.node) = newNodeS (TextToken, addSpaces ("    {|", (yyvsp[(1) - (1)].num))); ;}
    break;

  case 188:
#line 426 "wikiparse.y"
    { debugf ("textelementnoital#6 "); (yyval.node) = newNodeS (TextToken, "|}"); ;}
    break;

  case 189:
#line 427 "wikiparse.y"
    { debugf ("textelementnoital#7 "); (yyval.node) = convertTableRowToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 190:
#line 428 "wikiparse.y"
    { debugf ("textelementnoital#8 "); (yyval.node) = convertTableCellToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 191:
#line 429 "wikiparse.y"
    { debugf ("textelementnoital#9 "); (yyval.node) = convertTableHeadToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 192:
#line 430 "wikiparse.y"
    { debugf ("textelementnoital#10 "); (yyval.node) = convertTableCaptionToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 193:
#line 431 "wikiparse.y"
    { debugf ("textelementnoital#11 "); (yyval.node) = convertAttributeDataToText ((yyvsp[(1) - (1)].ad)); ;}
    break;

  case 194:
#line 432 "wikiparse.y"
    { debugf ("textelementnoital#12 "); (yyval.node) = newNodeS (TextToken, "}}}}}"); ;}
    break;

  case 195:
#line 433 "wikiparse.y"
    { debugf ("textelementnoital#13 "); (yyval.node) = newNodeS (TextToken, "}}}"); ;}
    break;

  case 196:
#line 434 "wikiparse.y"
    { debugf ("textelementnoital#14 "); (yyval.node) = newNodeS (TextToken, "}}"); ;}
    break;

  case 197:
#line 435 "wikiparse.y"
    { debugf ("textelementnoital#15 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 198:
#line 436 "wikiparse.y"
    { debugf ("textelementnoital#16 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 199:
#line 437 "wikiparse.y"
    { debugf ("textelementnoital#17 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 200:
#line 438 "wikiparse.y"
    { debugf ("textelementnoital#18 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 201:
#line 439 "wikiparse.y"
    { debugf ("textelementnoital#19 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 202:
#line 441 "wikiparse.y"
    { debugf ("textelementnobold#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 203:
#line 442 "wikiparse.y"
    { debugf ("textelementnobold#2 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 204:
#line 443 "wikiparse.y"
    { debugf ("textelementnobold#3 "); (yyval.node) = newNodeS (TextToken, "|"); ;}
    break;

  case 205:
#line 444 "wikiparse.y"
    { debugf ("textelementnobold#4 "); (yyval.node) = newNodeS (TextToken, "]]"); ;}
    break;

  case 206:
#line 445 "wikiparse.y"
    { debugf ("textelementnobold#5 "); (yyval.node) = newNodeS (TextToken, addSpaces ("    {|", (yyvsp[(1) - (1)].num))); ;}
    break;

  case 207:
#line 446 "wikiparse.y"
    { debugf ("textelementnobold#6 "); (yyval.node) = newNodeS (TextToken, "|}"); ;}
    break;

  case 208:
#line 447 "wikiparse.y"
    { debugf ("textelementnobold#7 "); (yyval.node) = convertTableRowToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 209:
#line 448 "wikiparse.y"
    { debugf ("textelementnobold#8 "); (yyval.node) = convertTableCellToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 210:
#line 449 "wikiparse.y"
    { debugf ("textelementnobold#9 "); (yyval.node) = convertTableHeadToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 211:
#line 450 "wikiparse.y"
    { debugf ("textelementnobold#10 "); (yyval.node) = convertTableCaptionToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 212:
#line 451 "wikiparse.y"
    { debugf ("textelementnobold#11 "); (yyval.node) = convertAttributeDataToText ((yyvsp[(1) - (1)].ad)); ;}
    break;

  case 213:
#line 452 "wikiparse.y"
    { debugf ("textelementnobold#12 "); (yyval.node) = newNodeS (TextToken, "}}}}}"); ;}
    break;

  case 214:
#line 453 "wikiparse.y"
    { debugf ("textelementnobold#13 "); (yyval.node) = newNodeS (TextToken, "}}}"); ;}
    break;

  case 215:
#line 454 "wikiparse.y"
    { debugf ("textelementnobold#14 "); (yyval.node) = newNodeS (TextToken, "}}"); ;}
    break;

  case 216:
#line 455 "wikiparse.y"
    { debugf ("textelementnobold#15 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 217:
#line 456 "wikiparse.y"
    { debugf ("textelementnobold#16 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 218:
#line 457 "wikiparse.y"
    { debugf ("textelementnobold#17 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 219:
#line 458 "wikiparse.y"
    { debugf ("textelementnobold#18 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 220:
#line 459 "wikiparse.y"
    { debugf ("textelementnobold#19 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 221:
#line 461 "wikiparse.y"
    { debugf ("textelementnoboit#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 222:
#line 462 "wikiparse.y"
    { debugf ("textelementnoboit#2 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 223:
#line 463 "wikiparse.y"
    { debugf ("textelementnoboit#3 "); (yyval.node) = newNodeS (TextToken, "|"); ;}
    break;

  case 224:
#line 464 "wikiparse.y"
    { debugf ("textelementnoboit#4 "); (yyval.node) = newNodeS (TextToken, "]]"); ;}
    break;

  case 225:
#line 465 "wikiparse.y"
    { debugf ("textelementnoboit#5 "); (yyval.node) = newNodeS (TextToken, addSpaces ("    {|", (yyvsp[(1) - (1)].num))); ;}
    break;

  case 226:
#line 466 "wikiparse.y"
    { debugf ("textelementnoboit#6 "); (yyval.node) = newNodeS (TextToken, "|}"); ;}
    break;

  case 227:
#line 467 "wikiparse.y"
    { debugf ("textelementnoboit#7 "); (yyval.node) = convertTableRowToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 228:
#line 468 "wikiparse.y"
    { debugf ("textelementnoboit#8 "); (yyval.node) = convertTableCellToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 229:
#line 469 "wikiparse.y"
    { debugf ("textelementnoboit#9 "); (yyval.node) = convertTableHeadToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 230:
#line 470 "wikiparse.y"
    { debugf ("textelementnoboit#10 "); (yyval.node) = convertTableCaptionToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 231:
#line 471 "wikiparse.y"
    { debugf ("textelementnoboit#11 "); (yyval.node) = convertAttributeDataToText ((yyvsp[(1) - (1)].ad)); ;}
    break;

  case 232:
#line 472 "wikiparse.y"
    { debugf ("textelementnobold#12 "); (yyval.node) = newNodeS (TextToken, "}}}}}"); ;}
    break;

  case 233:
#line 473 "wikiparse.y"
    { debugf ("textelementnobold#13 "); (yyval.node) = newNodeS (TextToken, "}}}"); ;}
    break;

  case 234:
#line 474 "wikiparse.y"
    { debugf ("textelementnobold#14 "); (yyval.node) = newNodeS (TextToken, "}}"); ;}
    break;

  case 235:
#line 475 "wikiparse.y"
    { debugf ("textelementnoboit#15 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 236:
#line 476 "wikiparse.y"
    { debugf ("textelementnoboit#16 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 237:
#line 477 "wikiparse.y"
    { debugf ("textelementnoboit#17 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 238:
#line 478 "wikiparse.y"
    { debugf ("textelementnoboit#18 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 239:
#line 480 "wikiparse.y"
    { debugf ("textelementintbl#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 240:
#line 481 "wikiparse.y"
    { debugf ("textelementintbl#2 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 241:
#line 482 "wikiparse.y"
    { debugf ("textelementintbl#3 "); (yyval.node) = newNodeS (TextToken, "|"); ;}
    break;

  case 242:
#line 483 "wikiparse.y"
    { debugf ("textelementintbl#4 "); (yyval.node) = newNodeS (TextToken, "]]"); ;}
    break;

  case 243:
#line 484 "wikiparse.y"
    { debugf ("textelementintbl#5 "); (yyval.node) = newNodeS (TextToken, "''"); ;}
    break;

  case 244:
#line 485 "wikiparse.y"
    { debugf ("textelementintbl#6 "); (yyval.node) = newNodeS (TextToken, "'''"); ;}
    break;

  case 245:
#line 486 "wikiparse.y"
    { debugf ("textelementintbl#7 "); (yyval.node) = newNodeS (TextToken, "'''''"); ;}
    break;

  case 246:
#line 487 "wikiparse.y"
    { debugf ("textelementintbl#8 "); (yyval.node) = newNodeS (TextToken, addSpaces ("=", (yyvsp[(1) - (1)].num))); ;}
    break;

  case 247:
#line 488 "wikiparse.y"
    { debugf ("textelementintbl#9 "); (yyval.node) = newNodeS (TextToken, "}}}}}"); ;}
    break;

  case 248:
#line 489 "wikiparse.y"
    { debugf ("textelementintbl#10 "); (yyval.node) = newNodeS (TextToken, "}}}"); ;}
    break;

  case 249:
#line 490 "wikiparse.y"
    { debugf ("textelementintbl#11 "); (yyval.node) = newNodeS (TextToken, "}}"); ;}
    break;

  case 250:
#line 491 "wikiparse.y"
    { debugf ("textelementintbl#12 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 251:
#line 492 "wikiparse.y"
    { debugf ("textelementintbl#13 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 252:
#line 493 "wikiparse.y"
    { debugf ("textelementintbl#14 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 253:
#line 494 "wikiparse.y"
    { debugf ("textelementintbl#15 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 254:
#line 495 "wikiparse.y"
    { debugf ("textelementintbl#16 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 255:
#line 497 "wikiparse.y"
    { debugf ("textelementinlink#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 256:
#line 498 "wikiparse.y"
    { debugf ("textelementinlink#2 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 257:
#line 499 "wikiparse.y"
    { debugf ("textelementinlink#3 "); (yyval.node) = newNodeS (TextToken, "''"); ;}
    break;

  case 258:
#line 500 "wikiparse.y"
    { debugf ("textelementinlink#4 "); (yyval.node) = newNodeS (TextToken, "'''"); ;}
    break;

  case 259:
#line 501 "wikiparse.y"
    { debugf ("textelementinlink#5 "); (yyval.node) = newNodeS (TextToken, "'''''"); ;}
    break;

  case 260:
#line 502 "wikiparse.y"
    { debugf ("textelementinlink#6 "); (yyval.node) = newNodeS (TextToken, addSpaces ("=", (yyvsp[(1) - (1)].num))); ;}
    break;

  case 261:
#line 503 "wikiparse.y"
    { debugf ("textelementinlink#7 "); (yyval.node) = newNodeS (TextToken, addSpaces ("    {|", (yyvsp[(1) - (1)].num))); ;}
    break;

  case 262:
#line 504 "wikiparse.y"
    { debugf ("textelementinlink#8 "); (yyval.node) = newNodeS (TextToken, "|}"); ;}
    break;

  case 263:
#line 505 "wikiparse.y"
    { debugf ("textelementinlink#9 "); (yyval.node) = convertTableRowToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 264:
#line 506 "wikiparse.y"
    { debugf ("textelementinlink#10 "); (yyval.node) = convertTableCellToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 265:
#line 507 "wikiparse.y"
    { debugf ("textelementinlink#11 "); (yyval.node) = convertTableHeadToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 266:
#line 508 "wikiparse.y"
    { debugf ("textelementinlink#12 "); (yyval.node) = convertTableCaptionToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 267:
#line 509 "wikiparse.y"
    { debugf ("textelementinlink#13 "); (yyval.node) = convertAttributeDataToText ((yyvsp[(1) - (1)].ad)); ;}
    break;

  case 268:
#line 510 "wikiparse.y"
    { debugf ("textelementinlink#14 "); (yyval.node) = newNodeS (TextToken, "}}}}}"); ;}
    break;

  case 269:
#line 511 "wikiparse.y"
    { debugf ("textelementinlink#15 "); (yyval.node) = newNodeS (TextToken, "}}}"); ;}
    break;

  case 270:
#line 512 "wikiparse.y"
    { debugf ("textelementinlink#16 "); (yyval.node) = newNodeS (TextToken, "}}"); ;}
    break;

  case 271:
#line 513 "wikiparse.y"
    { debugf ("textelementinlink#17 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 272:
#line 514 "wikiparse.y"
    { debugf ("textelementinlink#18 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 273:
#line 515 "wikiparse.y"
    { debugf ("textelementinlink#19 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 274:
#line 516 "wikiparse.y"
    { debugf ("textelementinlink#20 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 275:
#line 517 "wikiparse.y"
    { debugf ("textelementinlink#21 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 276:
#line 519 "wikiparse.y"
    { debugf ("textelementintmpl#1 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 277:
#line 520 "wikiparse.y"
    { debugf ("textelementintmpl#2 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 278:
#line 521 "wikiparse.y"
    { debugf ("textelementintmpl#3 "); (yyval.node) = newNodeS (TextToken, "|"); ;}
    break;

  case 279:
#line 522 "wikiparse.y"
    { debugf ("textelementintmpl#4 "); (yyval.node) = newNodeS (TextToken, "]]"); ;}
    break;

  case 280:
#line 523 "wikiparse.y"
    { debugf ("textelementintmpl#5 "); (yyval.node) = newNodeS (TextToken, "''"); ;}
    break;

  case 281:
#line 524 "wikiparse.y"
    { debugf ("textelementintmpl#6 "); (yyval.node) = newNodeS (TextToken, "'''"); ;}
    break;

  case 282:
#line 525 "wikiparse.y"
    { debugf ("textelementintmpl#7 "); (yyval.node) = newNodeS (TextToken, "'''''"); ;}
    break;

  case 283:
#line 526 "wikiparse.y"
    { debugf ("textelementintmpl#8 "); (yyval.node) = newNodeS (TextToken, addSpaces ("=", (yyvsp[(1) - (1)].num))); ;}
    break;

  case 284:
#line 527 "wikiparse.y"
    { debugf ("textelementintmpl#9 "); (yyval.node) = newNodeS (TextToken, addSpaces ("    {|", (yyvsp[(1) - (1)].num))); ;}
    break;

  case 285:
#line 528 "wikiparse.y"
    { debugf ("textelementintmpl#10 "); (yyval.node) = newNodeS (TextToken, "|}"); ;}
    break;

  case 286:
#line 529 "wikiparse.y"
    { debugf ("textelementintmpl#11 "); (yyval.node) = convertTableRowToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 287:
#line 530 "wikiparse.y"
    { debugf ("textelementintmpl#12 "); (yyval.node) = convertTableCellToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 288:
#line 531 "wikiparse.y"
    { debugf ("textelementintmpl#13 "); (yyval.node) = convertTableHeadToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 289:
#line 532 "wikiparse.y"
    { debugf ("textelementintmpl#14 "); (yyval.node) = convertTableCaptionToText ((yyvsp[(1) - (1)].num)); ;}
    break;

  case 290:
#line 533 "wikiparse.y"
    { debugf ("textelementintmpl#15 "); (yyval.node) = convertAttributeDataToText ((yyvsp[(1) - (1)].ad)); ;}
    break;

  case 291:
#line 534 "wikiparse.y"
    { debugf ("textelementintmpl#16 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 292:
#line 535 "wikiparse.y"
    { debugf ("textelementintmpl#17 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 293:
#line 536 "wikiparse.y"
    { debugf ("textelementintmpl#18 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 294:
#line 537 "wikiparse.y"
    { debugf ("textelementintmpl#19 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 295:
#line 538 "wikiparse.y"
    { debugf ("textelementintmpl#20 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 296:
#line 544 "wikiparse.y"
    { debugf ("template#1 "); (yyval.node) = nodeAddChild (newNode (Template), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 297:
#line 546 "wikiparse.y"
    { debugf ("template#2 "); (yyval.node) = nodeAddChild (newNode (Template),
                                makeTextBlock (nodeAddChild (newNode (TemplateVar), (yyvsp[(2) - (5)].node)), (yyvsp[(4) - (5)].node))); ;}
    break;

  case 298:
#line 549 "wikiparse.y"
    { debugf ("template#3 "); (yyval.node) = nodeAddChild (newNode (Template),
                                makeTextBlock ((yyvsp[(2) - (5)].node), nodeAddChild (newNode (TemplateVar), (yyvsp[(4) - (5)].node)))); ;}
    break;

  case 299:
#line 553 "wikiparse.y"
    { debugf ("template#4 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "{{"), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 300:
#line 555 "wikiparse.y"
    { debugf ("template#5 "); (yyval.node) = makeTextBlock3 (newNodeS (TextToken, "{{{{{"),
                                (yyvsp[(2) - (4)].node), newNodeS (TextToken, "}}}"), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 301:
#line 558 "wikiparse.y"
    { debugf ("template#6 "); (yyval.node) = makeTextBlock3 (newNodeS (TextToken, "{{"),
                                (yyvsp[(2) - (4)].node), newNodeS (TextToken, "{{{"), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 302:
#line 562 "wikiparse.y"
    { debugf ("templatevar#1 "); (yyval.node) = nodeAddChild (newNode (TemplateVar), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 303:
#line 564 "wikiparse.y"
    { debugf ("templatevar#2 "); (yyval.node) =
                                nodeAddChild (newNode (Template), nodeAddChild (newNode (TemplateVar), (yyvsp[(2) - (3)].node))); ;}
    break;

  case 304:
#line 568 "wikiparse.y"
    { debugf ("templatevar#1 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "{{{"), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 305:
#line 570 "wikiparse.y"
    { debugf ("templatevar#2 "); (yyval.node) = makeTextBlock (newNodeS (TextToken, "{{{{{"), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 306:
#line 572 "wikiparse.y"
    { debugf ("zeroormorenewlines#1 "); (yyval.node) = 0; ;}
    break;

  case 307:
#line 573 "wikiparse.y"
    { debugf ("zeroormorenewlines#2 "); (yyval.node) = 0; ;}
    break;

  case 308:
#line 574 "wikiparse.y"
    { debugf ("oneormorenewlines#1 "); (yyval.node) = 0; ;}
    break;

  case 309:
#line 575 "wikiparse.y"
    { debugf ("oneormorenewlines#2 "); (yyval.node) = 0; ;}
    break;

  case 310:
#line 577 "wikiparse.y"
    { debugf ("zeroormorenewlinessave#1 "); (yyval.node) = 0; ;}
    break;

  case 311:
#line 578 "wikiparse.y"
    { debugf ("zeroormorenewlinessave#2 "); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 312:
#line 579 "wikiparse.y"
    { debugf ("oneormorenewlinessave#1 "); (yyval.node) = newNodeI (Newlines, 0); ;}
    break;

  case 313:
#line 580 "wikiparse.y"
    { debugf ("oneormorenewlinessave#2 "); (yyvsp[(1) - (2)].node)->data.num++; (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 314:
#line 583 "wikiparse.y"
    { debugf ("paragraph#1 "); (yyval.node) = nodeAddChild (newNode (Paragraph), (yyvsp[(1) - (2)].node)); ;}
    break;

  case 315:
#line 585 "wikiparse.y"
    { debugf ("paragraph#2 "); (yyval.node) = nodeAddChild2 ((yyvsp[(1) - (3)].node), newNodeS (TextToken, " "), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 316:
#line 588 "wikiparse.y"
    { debugf ("paragraph#3 "); (yyval.node) = nodeAddChild (newNode (Paragraph), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 317:
#line 590 "wikiparse.y"
    { debugf ("paragraph#4 "); (yyval.node) = nodeAddChild2 ((yyvsp[(1) - (2)].node), newNodeS (TextToken, " "), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 318:
#line 597 "wikiparse.y"
    { debugf ("paragraphintbl#1 "); (yyval.node) = nodeAddChild (newNode (Paragraph), (yyvsp[(1) - (2)].node)); ;}
    break;

  case 319:
#line 599 "wikiparse.y"
    { debugf ("paragraphintbl#2 "); (yyval.node) = nodeAddChild2 (newNode (Paragraph), convertAttributesToText ((yyvsp[(1) - (3)].node)), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 320:
#line 601 "wikiparse.y"
    { debugf ("paragraphintbl#3 "); (yyval.node) = nodeAddChild (newNode (Paragraph), convertAttributesToText ((yyvsp[(1) - (2)].node))); ;}
    break;

  case 321:
#line 603 "wikiparse.y"
    { debugf ("paragraphintbl#4 "); (yyval.node) = nodeAddChild2 ((yyvsp[(1) - (3)].node), newNodeS (TextToken, " "), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 322:
#line 605 "wikiparse.y"
    { debugf ("paragraphintbl#5 "); (yyval.node) = nodeAddChild3 ((yyvsp[(1) - (4)].node), newNodeS (TextToken, " "), convertAttributesToText ((yyvsp[(2) - (4)].node)), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 323:
#line 607 "wikiparse.y"
    { debugf ("paragraphintbl#6 "); (yyval.node) = nodeAddChild2 ((yyvsp[(1) - (3)].node), newNodeS (TextToken, " "), convertAttributesToText ((yyvsp[(2) - (3)].node))); ;}
    break;

  case 324:
#line 610 "wikiparse.y"
    { debugf ("paragraphintbl#7 "); (yyval.node) = nodeAddChild (newNode (Paragraph), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 325:
#line 612 "wikiparse.y"
    { debugf ("paragraphintbl#8 "); (yyval.node) = nodeAddChild2 (newNode (Paragraph), convertAttributesToText ((yyvsp[(1) - (2)].node)), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 326:
#line 614 "wikiparse.y"
    { debugf ("paragraphintbl#9 "); (yyval.node) = nodeAddChild (newNode (Paragraph), convertAttributesToText ((yyvsp[(1) - (1)].node))); ;}
    break;

  case 327:
#line 616 "wikiparse.y"
    { debugf ("paragraphintbl#10 "); (yyval.node) = nodeAddChild2 ((yyvsp[(1) - (2)].node), newNodeS (TextToken, " "), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 328:
#line 618 "wikiparse.y"
    { debugf ("paragraphintbl#11 "); (yyval.node) = nodeAddChild3 ((yyvsp[(1) - (3)].node), newNodeS (TextToken, " "), convertAttributesToText ((yyvsp[(2) - (3)].node)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 329:
#line 620 "wikiparse.y"
    { debugf ("paragraphintbl#12 "); (yyval.node) = nodeAddChild2 ((yyvsp[(1) - (2)].node), newNodeS (TextToken, " "), convertAttributesToText ((yyvsp[(2) - (2)].node))); ;}
    break;

  case 330:
#line 623 "wikiparse.y"
    { debugf ("comment#1 "); (yyval.node) = nodeAddChild (newNode (Comment), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 331:
#line 625 "wikiparse.y"
    { debugf ("comment#2 "); (yyval.node) = newNode (Comment); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4003 "wikiparse.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 628 "wikiparse.y"


/* main() -- this is called whenever you invoke the parser from the command line. You probably
 * do that only to test it, which is why we are outputting some extra information. It reads
 * standard input and writes to standard output. */
int main() {
    int result;
//    printf ("Parsing... ");

    result = yyparse();
    if (!result) printf ("%s", outputXML (articlenode, 1024) ) ;
//        printf ("\n\nXML output:\n\n%s\n\n", outputXML (articlenode, 1024));
    freeRecursively (articlenode);
    return result;
}

/* wikiparse_do_parse() -- this is the function that is actually called by PHP. It uses an
 * input string, and returns an output string. No stdin/stdout. */
const char* wikiparse_do_parse (const char* input)
{
    int result, i;
    char* ret = "<error />";

    /* yy_scan_string copies the string into an internal buffer. During lexing, this internal
     * buffer may be modified. We don't really need the string anymore, so we probably don't mind
     * if it's modified, so we might not need for it to be copied. There is yy_scan_buffer which
     * uses the string directly as a buffer, but for some bizarre reason it expects the buffer to
     * end with *two* NULs instead of just one. Thus yy_scan_string is the easiest way for now. */
    yy_scan_string (input);

    result = yyparse();
    if (!result)
    {
        /* Start with an output buffer twice the size of the input, but at least 1 KB. This should
         * normally be plenty. If it isn't, it will grow automatically. */
        i = 2*strlen (input);
        ret = outputXML (articlenode, i < 1024 ? 1024 : i);
        freeRecursively (articlenode);
    }
    return ret;
}

