/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 26 "wikiparse.y"
{
    Node node;
    char* str;
    int num;
    AttributeData ad;
}
/* Line 1489 of yacc.c.  */
#line 128 "wikiparse.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

