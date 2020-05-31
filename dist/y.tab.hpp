#include"tree.h"

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
     AND = 258,
     ARRAY = 259,
     ASSIGN = 260,
     SBEGIN = 261,
     CASE = 262,
     CHAR = 263,
     COLON = 264,
     COMMA = 265,
     CONST = 266,
     DIV = 267,
     DO = 268,
     SYS_CON = 269,
     PROCEDURE = 270,
     DOT = 271,
     DOTDOT = 272,
     DOWNTO = 273,
     OR = 274,
     ELSE = 275,
     END = 276,
     EQUAL = 277,
     FOR = 278,
     FUNCTION = 279,
     GE = 280,
     GOTO = 281,
     GT = 282,
     ID = 283,
     PACKED = 284,
     IF = 285,
     INTEGER = 286,
     LB = 287,
     LE = 288,
     LP = 289,
     LT = 290,
     MINUS = 291,
     MOD = 292,
     MUL = 293,
     NOT = 294,
     OF = 295,
     PLUS = 296,
     RB = 297,
     SYS_TYPE = 298,
     PROGRAM = 299,
     READ = 300,
     REAL = 301,
     RECORD = 302,
     REPEAT = 303,
     RP = 304,
     SEMI = 305,
     STRING = 306,
     THEN = 307,
     TO = 308,
     TYPE = 309,
     UNEQUAL = 310,
     UNTIL = 311,
     VAR = 312,
     WHILE = 313,
     SYS_FUNCT = 314,
     SYS_PROC = 315
   };
#endif
/* Tokens.  */
#define AND 258
#define ARRAY 259
#define ASSIGN 260
#define SBEGIN 261
#define CASE 262
#define CHAR 263
#define COLON 264
#define COMMA 265
#define CONST 266
#define DIV 267
#define DO 268
#define SYS_CON 269
#define PROCEDURE 270
#define DOT 271
#define DOTDOT 272
#define DOWNTO 273
#define OR 274
#define ELSE 275
#define END 276
#define EQUAL 277
#define FOR 278
#define FUNCTION 279
#define GE 280
#define GOTO 281
#define GT 282
#define ID 283
#define PACKED 284
#define IF 285
#define INTEGER 286
#define LB 287
#define LE 288
#define LP 289
#define LT 290
#define MINUS 291
#define MOD 292
#define MUL 293
#define NOT 294
#define OF 295
#define PLUS 296
#define RB 297
#define SYS_TYPE 298
#define PROGRAM 299
#define READ 300
#define REAL 301
#define RECORD 302
#define REPEAT 303
#define RP 304
#define SEMI 305
#define STRING 306
#define THEN 307
#define TO 308
#define TYPE 309
#define UNEQUAL 310
#define UNTIL 311
#define VAR 312
#define WHILE 313
#define SYS_FUNCT 314
#define SYS_PROC 315




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 29 "parser.y"
{
  TreeNode* node;
}
/* Line 1529 of yacc.c.  */
#line 173 "dist/y.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

