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
     SYS_PROC = 315,
     NAME = 316
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
#define NAME 316




/* Copy the first part of user declarations.  */
#line 1 "parse.y"

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "tree.h"
#include "token.h"

extern FILE* yyin;
extern FILE* yyout;
extern int yyrow;
extern int yycol;
extern char* yytext;

int yylex();
void yyerror(const char*s);

// root: AST root
TreeNode *root;
// flag: yyparse flag
int flag=0; 



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
#line 26 "parse.y"
{
  TreeNode* node;
}
/* Line 193 of yacc.c.  */
#line 245 "dist/y.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 258 "dist/y.tab.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  261

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    14,    17,    23,    24,    27,
      28,    34,    39,    41,    43,    45,    47,    50,    51,    54,
      56,    61,    63,    65,    67,    69,    71,    75,    79,    84,
      90,    94,   101,   105,   108,   110,   115,   119,   121,   124,
     125,   128,   130,   135,   138,   141,   143,   145,   146,   151,
     157,   162,   166,   170,   171,   175,   177,   181,   185,   188,
     190,   192,   196,   200,   201,   205,   207,   209,   211,   213,
     215,   217,   219,   221,   223,   225,   229,   236,   242,   244,
     249,   251,   256,   261,   267,   270,   271,   276,   281,   290,
     292,   294,   300,   303,   305,   310,   315,   318,   322,   324,
     328,   332,   336,   340,   344,   348,   350,   354,   358,   362,
     364,   368,   372,   376,   380,   382,   384,   389,   391,   396,
     398,   402,   405,   408,   413,   417,   421
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    64,    65,    16,    -1,    44,    28,    50,
      -1,    67,    95,    -1,    67,    95,    -1,    68,    69,    72,
      82,    85,    -1,    -1,    11,    70,    -1,    -1,    70,    61,
      22,    71,    50,    -1,    61,    22,    71,    50,    -1,    31,
      -1,    46,    -1,     8,    -1,    14,    -1,    54,    73,    -1,
      -1,    73,    74,    -1,    74,    -1,    61,    22,    75,    50,
      -1,    76,    -1,    77,    -1,    78,    -1,    43,    -1,    61,
      -1,    34,    81,    49,    -1,    71,    17,    71,    -1,    36,
      71,    17,    71,    -1,    36,    71,    17,    36,    71,    -1,
      61,    17,    61,    -1,     4,    32,    76,    42,    40,    75,
      -1,    47,    79,    21,    -1,    79,    80,    -1,    80,    -1,
      81,     9,    75,    50,    -1,    81,    10,    28,    -1,    28,
      -1,    57,    83,    -1,    -1,    83,    84,    -1,    84,    -1,
      81,     9,    75,    50,    -1,    85,    86,    -1,    85,    88,
      -1,    86,    -1,    88,    -1,    -1,    87,    50,    66,    50,
      -1,    24,    61,    90,     9,    76,    -1,    89,    50,    66,
      50,    -1,    15,    61,    90,    -1,    34,    91,    49,    -1,
      -1,    91,    50,    92,    -1,    92,    -1,    93,     9,    76,
      -1,    94,     9,    76,    -1,    57,    81,    -1,    81,    -1,
      96,    -1,     6,    97,    21,    -1,    97,    98,    50,    -1,
      -1,    31,     9,    99,    -1,    99,    -1,   100,    -1,   101,
      -1,    96,    -1,   102,    -1,   104,    -1,   105,    -1,   106,
      -1,   108,    -1,   111,    -1,    28,     5,   113,    -1,    28,
      32,   113,    42,     5,   113,    -1,    28,    16,    28,     5,
     113,    -1,    28,    -1,    28,    34,   117,    49,    -1,    60,
      -1,    60,    34,   112,    49,    -1,    45,    34,   116,    49,
      -1,    30,   113,    52,    98,   103,    -1,    20,    98,    -1,
      -1,    48,    97,    56,   113,    -1,    58,   113,    13,    98,
      -1,    23,    28,     5,   113,   107,   113,    13,    98,    -1,
      53,    -1,    18,    -1,     7,   113,    40,   109,    21,    -1,
     109,   110,    -1,   110,    -1,    71,     9,    98,    50,    -1,
      28,     9,    98,    50,    -1,    26,    31,    -1,   112,    10,
     113,    -1,   113,    -1,   113,    25,   114,    -1,   113,    27,
     114,    -1,   113,    33,   114,    -1,   113,    35,   114,    -1,
     113,    22,   114,    -1,   113,    55,   114,    -1,   114,    -1,
     114,    41,   115,    -1,   114,    36,   115,    -1,   114,    19,
     115,    -1,   115,    -1,   115,    38,   116,    -1,   115,    12,
     116,    -1,   115,    37,   116,    -1,   115,     3,   116,    -1,
     116,    -1,    61,    -1,    61,    34,   117,    49,    -1,    59,
      -1,    59,    34,   117,    49,    -1,    71,    -1,    34,   113,
      49,    -1,    39,   116,    -1,    36,   116,    -1,    28,    32,
     113,    42,    -1,    28,    16,    28,    -1,   117,    10,   113,
      -1,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    48,    51,    54,    57,    60,    61,    63,
      66,    68,    71,    73,    75,    77,    80,    82,    85,    87,
      90,    93,    95,    97,   100,   102,   104,   106,   108,   110,
     112,   115,   118,   121,   123,   126,   129,   131,   134,   136,
     139,   141,   144,   147,   149,   151,   153,   155,   158,   161,
     164,   167,   170,   172,   175,   177,   180,   182,   185,   188,
     191,   194,   197,   199,   202,   204,   207,   209,   211,   213,
     215,   217,   219,   221,   223,   226,   228,   230,   233,   235,
     237,   239,   241,   244,   247,   249,   252,   255,   258,   261,
     263,   266,   269,   271,   274,   276,   279,   282,   284,   287,
     289,   291,   293,   295,   297,   299,   302,   304,   306,   308,
     311,   313,   315,   317,   319,   322,   324,   326,   328,   330,
     332,   334,   336,   338,   340,   343,   345
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ARRAY", "ASSIGN", "SBEGIN",
  "CASE", "CHAR", "COLON", "COMMA", "CONST", "DIV", "DO", "SYS_CON",
  "PROCEDURE", "DOT", "DOTDOT", "DOWNTO", "OR", "ELSE", "END", "EQUAL",
  "FOR", "FUNCTION", "GE", "GOTO", "GT", "ID", "PACKED", "IF", "INTEGER",
  "LB", "LE", "LP", "LT", "MINUS", "MOD", "MUL", "NOT", "OF", "PLUS", "RB",
  "SYS_TYPE", "PROGRAM", "READ", "REAL", "RECORD", "REPEAT", "RP", "SEMI",
  "STRING", "THEN", "TO", "TYPE", "UNEQUAL", "UNTIL", "VAR", "WHILE",
  "SYS_FUNCT", "SYS_PROC", "NAME", "$accept", "program", "program_head",
  "routine", "sub_routine", "routine_head", "label_part", "const_part",
  "const_expr_list", "const_value", "type_part", "type_decl_list",
  "type_definition", "type_decl", "simple_type_decl", "array_type_decl",
  "record_type_decl", "field_decl_list", "field_decl", "name_list",
  "var_part", "var_decl_list", "var_decl", "routine_part", "function_decl",
  "function_head", "procedure_decl", "procedure_head", "parameters",
  "para_decl_list", "para_type_list", "var_para_list", "val_para_list",
  "routine_body", "compound_stmt", "stmt_list", "stmt", "non_label_stmt",
  "assign_stmt", "proc_stmt", "if_stmt", "else_clause", "repeat_stmt",
  "while_stmt", "for_stmt", "direction", "case_stmt", "case_expr_list",
  "case_expr", "goto_stmt", "expression_list", "expression", "expr",
  "term", "factor", "args_list", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    65,    66,    67,    68,    69,    69,
      70,    70,    71,    71,    71,    71,    72,    72,    73,    73,
      74,    75,    75,    75,    76,    76,    76,    76,    76,    76,
      76,    77,    78,    79,    79,    80,    81,    81,    82,    82,
      83,    83,    84,    85,    85,    85,    85,    85,    86,    87,
      88,    89,    90,    90,    91,    91,    92,    92,    93,    94,
      95,    96,    97,    97,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   101,   101,
     101,   101,   101,   102,   103,   103,   104,   105,   106,   107,
     107,   108,   109,   109,   110,   110,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   114,
     115,   115,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     2,     5,     0,     2,     0,
       5,     4,     1,     1,     1,     1,     2,     0,     2,     1,
       4,     1,     1,     1,     1,     1,     3,     3,     4,     5,
       3,     6,     3,     2,     1,     4,     3,     1,     2,     0,
       2,     1,     4,     2,     2,     1,     1,     0,     4,     5,
       4,     3,     3,     0,     3,     1,     3,     3,     2,     1,
       1,     3,     3,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     6,     5,     1,     4,
       1,     4,     4,     5,     2,     0,     4,     4,     8,     1,
       1,     5,     2,     1,     4,     4,     2,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     4,     1,     4,     1,
       3,     2,     2,     4,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     7,     0,     1,     0,     0,     9,     3,
       2,    63,     4,    60,     0,    17,     0,     0,     8,     0,
      39,     0,    61,     0,     0,    78,     0,     0,     0,    63,
       0,    80,    68,     0,    65,    66,    67,    69,    70,    71,
      72,    73,    74,     0,     0,     0,    16,    19,     0,    47,
      14,    15,     0,    12,     0,     0,     0,    13,   117,   115,
     119,     0,   105,   109,   114,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,     0,
       0,    18,    37,     0,    38,    41,     0,     0,     6,    45,
       0,    46,     0,     0,     0,     0,   122,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,   126,     0,
       0,    64,     0,     0,     0,     0,    98,    11,     0,     0,
       0,     0,    24,     0,    25,     0,     0,    21,    22,    23,
       0,     0,    40,    53,    53,    43,    44,     7,     7,   124,
       0,   120,     0,     0,   103,    99,   100,   101,   102,     0,
       0,     0,    93,   104,   108,   107,   106,   113,   111,   112,
     110,     0,     0,     0,     0,    79,    85,    82,    86,    87,
       0,    81,    10,     0,     0,     0,     0,    34,     0,     0,
       0,    20,     0,    36,     0,    51,     0,     0,     0,     0,
     123,   118,   116,     0,     0,    91,    92,    90,    89,     0,
      77,     0,   125,     0,    83,    97,     0,    26,     0,    32,
      33,     0,    30,    27,    42,     0,    59,     0,    55,     0,
       0,     0,    48,     5,    50,     0,     0,     0,    76,    84,
       0,     0,    28,     0,    58,    52,     0,     0,     0,    49,
      95,    94,     0,     0,    29,    35,    54,    56,    57,    88,
      31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,   197,   198,     8,    15,    18,    60,
      20,    46,    47,   136,   137,   138,   139,   186,   187,    83,
      49,    84,    85,    88,    89,    90,    91,    92,   195,   227,
     228,   229,   230,    12,    32,    16,    33,    34,    35,    36,
      37,   214,    38,    39,    40,   209,    41,   161,   162,    42,
     125,   118,    62,    63,    64,   119
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -180
static const yytype_int16 yypact[] =
{
     -35,    -5,    44,  -180,   -38,  -180,    49,    28,    56,  -180,
    -180,  -180,  -180,  -180,    16,    33,    83,    69,    35,    39,
      53,   193,  -180,    66,    84,   288,   193,   108,   116,  -180,
     193,   133,  -180,    73,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,    62,   141,   147,    39,  -180,   117,    68,
    -180,  -180,    31,  -180,   193,   193,   193,  -180,   136,   138,
    -180,   234,   125,    37,  -180,   168,  -180,   193,   148,   193,
     193,   250,   190,   193,   123,     6,   193,  -180,   132,    62,
      12,  -180,  -180,    92,   117,  -180,   124,   130,    68,  -180,
     140,  -180,   144,   156,   193,   251,  -180,  -180,   193,   193,
     193,   193,   193,   193,   193,   134,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   290,   181,   274,   290,     5,
     129,  -180,   150,   193,   129,     7,   290,  -180,   153,   174,
     117,    62,  -180,   117,   183,   192,   161,  -180,  -180,  -180,
      12,   184,  -180,   180,   180,  -180,  -180,  -180,  -180,  -180,
     286,  -180,     8,    17,   125,   125,   125,   125,   125,   206,
     208,    91,  -180,   125,    37,    37,    37,  -180,  -180,  -180,
    -180,   235,   193,   214,   193,  -180,   203,  -180,   290,  -180,
     193,  -180,  -180,   194,    22,   216,     1,  -180,   111,   165,
      62,  -180,   191,  -180,    -7,  -180,   236,   196,    28,   197,
    -180,  -180,  -180,   129,   129,  -180,  -180,  -180,  -180,   193,
     290,   193,   290,   129,  -180,   290,   201,  -180,    -1,  -180,
    -180,    12,  -180,  -180,  -180,   117,   239,    89,  -180,   242,
     249,   194,  -180,  -180,  -180,   213,   215,   209,   290,  -180,
     226,    62,  -180,   221,   239,  -180,    -7,   194,   194,  -180,
    -180,  -180,   129,    12,  -180,  -180,  -180,  -180,  -180,  -180,
    -180
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,  -180,   131,   277,  -180,  -180,  -180,   -43,
    -180,  -180,   241,  -137,  -179,  -180,  -180,  -180,    95,  -122,
    -180,  -180,   198,  -180,   204,  -180,   207,  -180,   154,  -180,
      45,  -180,  -180,    96,    -6,   268,  -118,   231,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,   149,  -180,
    -180,   -16,   230,    18,   -31,    34
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      78,    13,   176,   192,   216,    61,   179,    50,   184,     1,
      71,   188,     9,    51,    75,   174,   129,   180,   174,   124,
      50,    82,   219,     4,    96,    97,    51,   174,   100,    82,
      53,   101,   141,   102,    11,   241,   128,   135,    95,   103,
     110,   104,   122,    53,     5,    57,   130,    93,   131,   111,
     225,   115,   249,   117,   175,   132,   181,   201,    57,   133,
     126,   106,   160,    94,   188,    10,   202,    14,   257,   258,
      50,   217,   226,   134,   112,   113,    51,    17,   150,   167,
     168,   169,   170,    86,   243,   235,   236,    19,   185,    11,
      21,    43,    87,    53,    65,   239,    44,   135,   171,    50,
      45,   140,   141,   244,    22,    51,    23,   178,    57,    24,
      48,    25,   205,    26,    27,    66,   260,    72,   160,   159,
     221,   141,    53,    77,   226,   164,   165,   166,    28,    11,
      21,    29,   152,   153,   259,    11,    21,    57,   245,   246,
     135,    30,    50,    31,   107,    82,    23,   223,    51,    24,
      73,    25,    23,    26,    27,    24,   210,    25,   212,    26,
      27,   108,   159,    79,   215,    53,   109,    76,    28,    80,
      98,    29,    99,   114,    28,   242,   116,    29,   135,   123,
      57,    30,   127,    31,   149,   143,   172,    30,   135,    31,
     147,   144,    13,   237,   148,   238,    11,    21,   254,   177,
     189,    50,    50,   182,   135,   135,   183,    51,    51,   190,
     135,   191,   193,    23,   194,   203,    24,   204,    25,   211,
      26,    52,   252,   213,    53,    53,   222,    54,   130,    55,
     131,   100,    56,   218,   101,    28,   102,   132,    29,    57,
      57,   224,   103,   240,   104,   231,   232,   234,    30,   141,
      31,   247,    58,   207,    59,   134,   100,   100,   248,   101,
     101,   102,   102,   250,   106,   251,   253,   103,   103,   104,
     104,   255,   100,   100,   105,   101,   101,   102,   102,   199,
       7,   220,   142,   103,   103,   104,   104,    81,   208,   106,
     106,   256,   145,    67,   233,   146,   100,    74,   196,   101,
     151,   102,   120,   121,    68,   106,   106,   103,   100,   104,
     206,   101,   100,   102,     0,   101,   173,   102,     0,   103,
      69,   104,    70,   103,     0,   104,     0,     0,   200,   106,
     154,   155,   156,   157,   158,     0,   163,     0,     0,     0,
       0,   106,     0,     0,     0,   106
};

static const yytype_int16 yycheck[] =
{
      43,     7,   120,   140,   183,    21,   124,     8,   130,    44,
      26,   133,    50,    14,    30,    10,     4,    10,    10,    13,
       8,    28,    21,    28,    55,    56,    14,    10,    22,    28,
      31,    25,    10,    27,     6,    36,    79,    80,    54,    33,
       3,    35,    73,    31,     0,    46,    34,    16,    36,    12,
      57,    67,   231,    69,    49,    43,    49,    49,    46,    47,
      76,    55,   105,    32,   186,    16,    49,    11,   247,   248,
       8,    49,   194,    61,    37,    38,    14,    61,    94,   110,
     111,   112,   113,    15,   221,   203,   204,    54,   131,     6,
       7,    22,    24,    31,    28,   213,    61,   140,   114,     8,
      61,     9,    10,   225,    21,    14,    23,   123,    46,    26,
      57,    28,    21,    30,    31,    31,   253,     9,   161,    28,
       9,    10,    31,    50,   246,   107,   108,   109,    45,     6,
       7,    48,    98,    99,   252,     6,     7,    46,    49,    50,
     183,    58,     8,    60,    19,    28,    23,   190,    14,    26,
      34,    28,    23,    30,    31,    26,   172,    28,   174,    30,
      31,    36,    28,    22,   180,    31,    41,    34,    45,    22,
      34,    48,    34,     5,    45,   218,    28,    48,   221,    56,
      46,    58,    50,    60,    28,    61,     5,    58,   231,    60,
      50,    61,   198,   209,    50,   211,     6,     7,   241,    49,
      17,     8,     8,    50,   247,   248,    32,    14,    14,    17,
     253,    50,    28,    23,    34,     9,    26,     9,    28,     5,
      30,    28,    13,    20,    31,    31,    61,    34,    34,    36,
      36,    22,    39,    17,    25,    45,    27,    43,    48,    46,
      46,    50,    33,    42,    35,     9,    50,    50,    58,    10,
      60,     9,    59,    18,    61,    61,    22,    22,     9,    25,
      25,    27,    27,    50,    55,    50,    40,    33,    33,    35,
      35,    50,    22,    22,    40,    25,    25,    27,    27,   148,
       3,   186,    84,    33,    33,    35,    35,    46,    53,    55,
      55,   246,    88,     5,   198,    88,    22,    29,   144,    25,
      49,    27,    52,    72,    16,    55,    55,    33,    22,    35,
     161,    25,    22,    27,    -1,    25,    42,    27,    -1,    33,
      32,    35,    34,    33,    -1,    35,    -1,    -1,    42,    55,
     100,   101,   102,   103,   104,    -1,   106,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    63,    64,    28,     0,    65,    67,    68,    50,
      16,     6,    95,    96,    11,    69,    97,    61,    70,    54,
      72,     7,    21,    23,    26,    28,    30,    31,    45,    48,
      58,    60,    96,    98,    99,   100,   101,   102,   104,   105,
     106,   108,   111,    22,    61,    61,    73,    74,    57,    82,
       8,    14,    28,    31,    34,    36,    39,    46,    59,    61,
      71,   113,   114,   115,   116,    28,    31,     5,    16,    32,
      34,   113,     9,    34,    97,   113,    34,    50,    71,    22,
      22,    74,    28,    81,    83,    84,    15,    24,    85,    86,
      87,    88,    89,    16,    32,   113,   116,   116,    34,    34,
      22,    25,    27,    33,    35,    40,    55,    19,    36,    41,
       3,    12,    37,    38,     5,   113,    28,   113,   113,   117,
      52,    99,   116,    56,    13,   112,   113,    50,    71,     4,
      34,    36,    43,    47,    61,    71,    75,    76,    77,    78,
       9,    10,    84,    61,    61,    86,    88,    50,    50,    28,
     113,    49,   117,   117,   114,   114,   114,   114,   114,    28,
      71,   109,   110,   114,   115,   115,   115,   116,   116,   116,
     116,   113,     5,    42,    10,    49,    98,    49,   113,    98,
      10,    49,    50,    32,    81,    71,    79,    80,    81,    17,
      17,    50,    75,    28,    34,    90,    90,    66,    67,    66,
      42,    49,    49,     9,     9,    21,   110,    18,    53,   107,
     113,     5,   113,    20,   103,   113,    76,    49,    17,    21,
      80,     9,    61,    71,    50,    57,    81,    91,    92,    93,
      94,     9,    50,    95,    50,    98,    98,   113,   113,    98,
      42,    36,    71,    75,    81,    49,    50,     9,     9,    76,
      50,    50,    13,    40,    71,    50,    92,    76,    76,    98,
      75
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
#line 45 "parse.y"
    {
    root = new TreeNode(program,3,(yyvsp[(1) - (3)].node),(yyvsp[(2) - (3)].node),(yyvsp[(3) - (3)].node));
}
    break;

  case 3:
#line 48 "parse.y"
    {
    (yyval.node)=new TreeNode(program_head,3,(yyvsp[(1) - (3)].node),(yyvsp[(2) - (3)].node),(yyvsp[(3) - (3)].node));
}
    break;

  case 4:
#line 51 "parse.y"
    {
    (yyval.node)=new TreeNode(routine,2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));
}
    break;

  case 5:
#line 54 "parse.y"
    {
    (yyval.node)=new TreeNode(sub_routine,2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));
}
    break;

  case 6:
#line 57 "parse.y"
    {
    (yyval.node)=new TreeNode(routine_head,4,(yyvsp[(2) - (5)].node),(yyvsp[(3) - (5)].node),(yyvsp[(4) - (5)].node),(yyvsp[(5) - (5)].node));
}
    break;

  case 7:
#line 60 "parse.y"
    { (yyval.node)=new TreeNode(undefined, "label"); }
    break;

  case 8:
#line 61 "parse.y"
    {
    (yyval.node)=new TreeNode(const_part,2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));
}
    break;

  case 9:
#line 63 "parse.y"
    {
    (yyval.node)=new TreeNode(undefined, "const_part no member");
}
    break;

  case 10:
#line 66 "parse.y"
    {
    (yyval.node)=new TreeNode(const_expr_list,5,(yyvsp[(1) - (5)].node),(yyvsp[(2) - (5)].node),(yyvsp[(3) - (5)].node),(yyvsp[(4) - (5)].node),(yyvsp[(5) - (5)].node));
}
    break;

  case 11:
#line 68 "parse.y"
    {
    (yyval.node)=new TreeNode(const_expr_list,4,(yyvsp[(1) - (4)].node),(yyvsp[(2) - (4)].node),(yyvsp[(3) - (4)].node),(yyvsp[(4) - (4)].node));
}
    break;

  case 12:
#line 71 "parse.y"
    {
    (yyval.node)=new TreeNode(const_value, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 13:
#line 73 "parse.y"
    {
    (yyval.node)=new TreeNode(const_value, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 14:
#line 75 "parse.y"
    {
    (yyval.node)=new TreeNode(const_value, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 15:
#line 77 "parse.y"
    {
    (yyval.node)=new TreeNode(const_value, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 16:
#line 80 "parse.y"
    {
    (yyval.node)=new TreeNode(type_part, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 17:
#line 82 "parse.y"
    {
    (yyval.node)=new TreeNode(undefined, "type_part no member");
}
    break;

  case 18:
#line 85 "parse.y"
    {
    (yyval.node)=new TreeNode(type_decl_list, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 19:
#line 87 "parse.y"
    {
    (yyval.node)=new TreeNode(type_decl_list, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 20:
#line 90 "parse.y"
    {
    (yyval.node)=new TreeNode(type_definition,4,(yyvsp[(1) - (4)].node),(yyvsp[(2) - (4)].node),(yyvsp[(3) - (4)].node),(yyvsp[(4) - (4)].node));
}
    break;

  case 21:
#line 93 "parse.y"
    {
    (yyval.node)=new TreeNode(type_decl, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 22:
#line 95 "parse.y"
    {
    (yyval.node)=new TreeNode(type_decl, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 23:
#line 97 "parse.y"
    {
    (yyval.node)=new TreeNode(type_decl, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 24:
#line 100 "parse.y"
    {
    (yyval.node)=new TreeNode(simple_type_decl, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 25:
#line 102 "parse.y"
    {
    (yyval.node)=new TreeNode(simple_type_decl, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 26:
#line 104 "parse.y"
    {
    (yyval.node)=new TreeNode(simple_type_decl, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 27:
#line 106 "parse.y"
    {
    (yyval.node)=new TreeNode(simple_type_decl, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 28:
#line 108 "parse.y"
    {
    (yyval.node)=new TreeNode(simple_type_decl, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 29:
#line 110 "parse.y"
    {
    (yyval.node)=new TreeNode(simple_type_decl, 5, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
}
    break;

  case 30:
#line 112 "parse.y"
    {
    (yyval.node)=new TreeNode(simple_type_decl, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 31:
#line 115 "parse.y"
    {
    (yyval.node)=new TreeNode(array_type_decl, 6, (yyvsp[(1) - (6)].node), (yyvsp[(2) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
}
    break;

  case 32:
#line 118 "parse.y"
    {
    (yyval.node)=new TreeNode(record_type_decl, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 33:
#line 121 "parse.y"
    {
    (yyval.node)=new TreeNode(field_decl_list, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 34:
#line 123 "parse.y"
    {
    (yyval.node)=new TreeNode(field_decl_list, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 35:
#line 126 "parse.y"
    {
    (yyval.node)=new TreeNode(field_decl, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 36:
#line 129 "parse.y"
    {
    (yyval.node)=new TreeNode(name_list, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 37:
#line 131 "parse.y"
    {
    (yyval.node)=new TreeNode(name_list, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 38:
#line 134 "parse.y"
    {
    (yyval.node)=new TreeNode(var_part, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 39:
#line 136 "parse.y"
    {
    (yyval.node)=new TreeNode(undefined, "var_part no member");
}
    break;

  case 40:
#line 139 "parse.y"
    {
    (yyval.node)=new TreeNode(var_decl_list, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 41:
#line 141 "parse.y"
    {
    (yyval.node)=new TreeNode(var_decl_list, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 42:
#line 144 "parse.y"
    {
    (yyval.node)=new TreeNode(var_decl, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 43:
#line 147 "parse.y"
    {
    (yyval.node)=new TreeNode(routine_part, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 44:
#line 149 "parse.y"
    {
    (yyval.node)=new TreeNode(routine_part, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 45:
#line 151 "parse.y"
    {
    (yyval.node)=new TreeNode(routine_part, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 46:
#line 153 "parse.y"
    {
    (yyval.node)=new TreeNode(routine_part, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 47:
#line 155 "parse.y"
    {
    (yyval.node)=new TreeNode(routine_part, "routine_part no member");
}
    break;

  case 48:
#line 158 "parse.y"
    {
    (yyval.node)=new TreeNode(function_decl, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 49:
#line 161 "parse.y"
    {
    (yyval.node)=new TreeNode(function_head, 5, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
}
    break;

  case 50:
#line 164 "parse.y"
    {
    (yyval.node)=new TreeNode(procedure_decl, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 51:
#line 167 "parse.y"
    {
    (yyval.node)=new TreeNode(procedure_head, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 52:
#line 170 "parse.y"
    {
    (yyval.node)=new TreeNode(parameters, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 53:
#line 172 "parse.y"
    {
    (yyval.node)=new TreeNode(parameters, "parameters no member");
}
    break;

  case 54:
#line 175 "parse.y"
    {
    (yyval.node)=new TreeNode(para_decl_list, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 55:
#line 177 "parse.y"
    {
    (yyval.node)=new TreeNode(para_decl_list, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 56:
#line 180 "parse.y"
    {
    (yyval.node)=new TreeNode(para_type_list, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 57:
#line 182 "parse.y"
    {
    (yyval.node)=new TreeNode(para_type_list, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 58:
#line 185 "parse.y"
    {
    (yyval.node)=new TreeNode(var_para_list, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 59:
#line 188 "parse.y"
    {
    (yyval.node)=new TreeNode(val_para_list, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 60:
#line 191 "parse.y"
    {
    (yyval.node)=new TreeNode(routine_body, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 61:
#line 194 "parse.y"
    {
    (yyval.node)=new TreeNode(compound_stmt, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 62:
#line 197 "parse.y"
    {
    (yyval.node)=new TreeNode(stmt_list, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 63:
#line 199 "parse.y"
    {
    (yyval.node)=new TreeNode(stmt_list, "stmt_list no member"); 
}
    break;

  case 64:
#line 202 "parse.y"
    {
    (yyval.node)=new TreeNode(stmt, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 65:
#line 204 "parse.y"
    {
    (yyval.node)=new TreeNode(stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 66:
#line 207 "parse.y"
    {
    (yyval.node)=new TreeNode(non_label_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 67:
#line 209 "parse.y"
    {
    (yyval.node)=new TreeNode(non_label_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 68:
#line 211 "parse.y"
    {
    (yyval.node)=new TreeNode(non_label_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 69:
#line 213 "parse.y"
    {
    (yyval.node)=new TreeNode(non_label_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 70:
#line 215 "parse.y"
    {
    (yyval.node)=new TreeNode(non_label_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 71:
#line 217 "parse.y"
    {
    (yyval.node)=new TreeNode(non_label_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 72:
#line 219 "parse.y"
    {
    (yyval.node)=new TreeNode(non_label_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 73:
#line 221 "parse.y"
    {
    (yyval.node)=new TreeNode(non_label_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 74:
#line 223 "parse.y"
    {
    (yyval.node)=new TreeNode(non_label_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 75:
#line 226 "parse.y"
    {
    (yyval.node)=new TreeNode(assign_stmt, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 76:
#line 228 "parse.y"
    {
    (yyval.node)=new TreeNode(assign_stmt, 6, (yyvsp[(1) - (6)].node), (yyvsp[(2) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
}
    break;

  case 77:
#line 230 "parse.y"
    {
    (yyval.node)=new TreeNode(assign_stmt, 5, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
}
    break;

  case 78:
#line 233 "parse.y"
    {
    (yyval.node)=new TreeNode(proc_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 79:
#line 235 "parse.y"
    {
    (yyval.node)=new TreeNode(proc_stmt, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 80:
#line 237 "parse.y"
    {
    (yyval.node)=new TreeNode(proc_stmt, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 81:
#line 239 "parse.y"
    {
    (yyval.node)=new TreeNode(proc_stmt, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 82:
#line 241 "parse.y"
    {
    (yyval.node)=new TreeNode(proc_stmt, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 83:
#line 244 "parse.y"
    {
    (yyval.node)=new TreeNode(if_stmt, 5, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
}
    break;

  case 84:
#line 247 "parse.y"
    {
    (yyval.node)=new TreeNode(else_clause, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 85:
#line 249 "parse.y"
    {
    (yyval.node)=new TreeNode(else_clause, "else_clause no member"); 
}
    break;

  case 86:
#line 252 "parse.y"
    {
    (yyval.node)=new TreeNode(repeat_stmt, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 87:
#line 255 "parse.y"
    {
    (yyval.node)=new TreeNode(while_stmt, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 88:
#line 258 "parse.y"
    {
    (yyval.node)=new TreeNode(for_stmt, 8, (yyvsp[(1) - (8)].node), (yyvsp[(2) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(4) - (8)].node), (yyvsp[(5) - (8)].node), (yyvsp[(6) - (8)].node), (yyvsp[(7) - (8)].node), (yyvsp[(8) - (8)].node));
}
    break;

  case 89:
#line 261 "parse.y"
    {
    (yyval.node)=new TreeNode(direction, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 90:
#line 263 "parse.y"
    {
    (yyval.node)=new TreeNode(direction, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 91:
#line 266 "parse.y"
    {
    (yyval.node)=new TreeNode(case_stmt, 5, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
}
    break;

  case 92:
#line 269 "parse.y"
    {
    (yyval.node)=new TreeNode(case_expr_list, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 93:
#line 271 "parse.y"
    {
    (yyval.node)=new TreeNode(case_expr_list, 2, (yyvsp[(1) - (1)].node));
}
    break;

  case 94:
#line 274 "parse.y"
    {
    (yyval.node)=new TreeNode(case_expr, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 95:
#line 276 "parse.y"
    {
    (yyval.node)=new TreeNode(case_expr, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 96:
#line 279 "parse.y"
    {
    (yyval.node)=new TreeNode(direction, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 97:
#line 282 "parse.y"
    {
    (yyval.node)=new TreeNode(expression_list, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 98:
#line 284 "parse.y"
    {
    (yyval.node)=new TreeNode(expression_list, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 99:
#line 287 "parse.y"
    {
    (yyval.node)=new TreeNode(expression, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 100:
#line 289 "parse.y"
    {
    (yyval.node)=new TreeNode(expression, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 101:
#line 291 "parse.y"
    {
    (yyval.node)=new TreeNode(expression, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 102:
#line 293 "parse.y"
    {
    (yyval.node)=new TreeNode(expression, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 103:
#line 295 "parse.y"
    {
    (yyval.node)=new TreeNode(expression, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 104:
#line 297 "parse.y"
    {
    (yyval.node)=new TreeNode(expression, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 105:
#line 299 "parse.y"
    {
    (yyval.node)=new TreeNode(expression, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 106:
#line 302 "parse.y"
    {
    (yyval.node)=new TreeNode(expr, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 107:
#line 304 "parse.y"
    {
    (yyval.node)=new TreeNode(expr, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 108:
#line 306 "parse.y"
    {
    (yyval.node)=new TreeNode(expr, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 109:
#line 308 "parse.y"
    {
    (yyval.node)=new TreeNode(expr, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 110:
#line 311 "parse.y"
    {
    (yyval.node)=new TreeNode(term, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 111:
#line 313 "parse.y"
    {
    (yyval.node)=new TreeNode(term, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 112:
#line 315 "parse.y"
    {
    (yyval.node)=new TreeNode(term, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 113:
#line 317 "parse.y"
    {
    (yyval.node)=new TreeNode(term, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 114:
#line 319 "parse.y"
    {
    (yyval.node)=new TreeNode(term, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 115:
#line 322 "parse.y"
    {
    (yyval.node)=new TreeNode(factor, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 116:
#line 324 "parse.y"
    {
    (yyval.node)=new TreeNode(factor, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 117:
#line 326 "parse.y"
    {
    (yyval.node)=new TreeNode(factor, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 118:
#line 328 "parse.y"
    {
    (yyval.node)=new TreeNode(factor, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 119:
#line 330 "parse.y"
    {
    (yyval.node)=new TreeNode(factor, 1, (yyvsp[(1) - (1)].node));
}
    break;

  case 120:
#line 332 "parse.y"
    {
    (yyval.node)=new TreeNode(factor, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 121:
#line 334 "parse.y"
    {
    (yyval.node)=new TreeNode(factor, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 122:
#line 336 "parse.y"
    {
    (yyval.node)=new TreeNode(factor, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
}
    break;

  case 123:
#line 338 "parse.y"
    {
    (yyval.node)=new TreeNode(factor, 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
}
    break;

  case 124:
#line 340 "parse.y"
    {
    (yyval.node)=new TreeNode(factor, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 125:
#line 343 "parse.y"
    {
    (yyval.node)=new TreeNode(args_list, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
}
    break;

  case 126:
#line 345 "parse.y"
    {
    (yyval.node)=new TreeNode(args_list, 1, (yyvsp[(1) - (1)].node));
}
    break;


/* Line 1267 of yacc.c.  */
#line 2586 "dist/y.tab.cpp"
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


#line 349 "parse.y"


int main(int argc,char* argv[]){
    // input demo code file
    yyin = fopen(argv[1],"r");
    yyparse();
    // output AST to json file
    root->write_json("./demo/syntax-tree.json");
    fclose(yyin);
    return flag;
}

void yyerror(char const *s)
{
	//fflush(stdout);
    cout<<endl<<"ROW:"<<yyrow<<" COL:"<<yycol<<"   ";
    cout<<s<<endl;
	//printf("\n%*s\n%*s\n", column, "^", column, s);
}

