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




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include <stdlib.h>
#include <stdio.h>
#include <string>

#ifndef YYPARSER
#include "tree.h"
// #include "token.h"
#endif

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
#line 29 "parser.y"
{
  TreeNode* node;
}
/* Line 193 of yacc.c.  */
#line 246 "dist/y.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 259 "dist/y.tab.cpp"

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
#define YYLAST   377

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  259

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    14,    17,    22,    25,    26,
      32,    37,    39,    41,    43,    45,    48,    49,    52,    54,
      59,    61,    63,    65,    67,    69,    73,    77,    82,    88,
      92,    99,   103,   106,   108,   113,   117,   119,   122,   123,
     126,   128,   133,   136,   139,   141,   143,   144,   149,   155,
     160,   164,   168,   169,   173,   175,   179,   183,   186,   188,
     190,   194,   198,   199,   203,   205,   207,   209,   211,   213,
     215,   217,   219,   221,   223,   227,   234,   240,   242,   247,
     249,   254,   259,   265,   268,   269,   274,   279,   288,   290,
     292,   298,   301,   303,   308,   313,   316,   320,   322,   326,
     330,   334,   338,   342,   346,   348,   352,   356,   360,   362,
     366,   370,   374,   378,   380,   382,   387,   389,   394,   396,
     400,   403,   406,   411,   415,   419
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    63,    64,    16,    -1,    44,    28,    50,
      -1,    66,    93,    -1,    66,    93,    -1,    67,    70,    80,
      83,    -1,    11,    68,    -1,    -1,    68,    28,    22,    69,
      50,    -1,    28,    22,    69,    50,    -1,    31,    -1,    46,
      -1,     8,    -1,    14,    -1,    54,    71,    -1,    -1,    71,
      72,    -1,    72,    -1,    28,    22,    73,    50,    -1,    74,
      -1,    75,    -1,    76,    -1,    43,    -1,    28,    -1,    34,
      79,    49,    -1,    69,    17,    69,    -1,    36,    69,    17,
      69,    -1,    36,    69,    17,    36,    69,    -1,    28,    17,
      28,    -1,     4,    32,    74,    42,    40,    73,    -1,    47,
      77,    21,    -1,    77,    78,    -1,    78,    -1,    79,     9,
      73,    50,    -1,    79,    10,    28,    -1,    28,    -1,    57,
      81,    -1,    -1,    81,    82,    -1,    82,    -1,    79,     9,
      73,    50,    -1,    83,    84,    -1,    83,    86,    -1,    84,
      -1,    86,    -1,    -1,    85,    50,    65,    50,    -1,    24,
      28,    88,     9,    74,    -1,    87,    50,    65,    50,    -1,
      15,    28,    88,    -1,    34,    89,    49,    -1,    -1,    89,
      50,    90,    -1,    90,    -1,    91,     9,    74,    -1,    92,
       9,    74,    -1,    57,    79,    -1,    79,    -1,    94,    -1,
       6,    95,    21,    -1,    95,    96,    50,    -1,    -1,    31,
       9,    97,    -1,    97,    -1,    98,    -1,    99,    -1,    94,
      -1,   100,    -1,   102,    -1,   103,    -1,   104,    -1,   106,
      -1,   109,    -1,    28,     5,   111,    -1,    28,    32,   111,
      42,     5,   111,    -1,    28,    16,    28,     5,   111,    -1,
      28,    -1,    28,    34,   115,    49,    -1,    60,    -1,    60,
      34,   110,    49,    -1,    45,    34,   114,    49,    -1,    30,
     111,    52,    96,   101,    -1,    20,    96,    -1,    -1,    48,
      95,    56,   111,    -1,    58,   111,    13,    96,    -1,    23,
      28,     5,   111,   105,   111,    13,    96,    -1,    53,    -1,
      18,    -1,     7,   111,    40,   107,    21,    -1,   107,   108,
      -1,   108,    -1,    69,     9,    96,    50,    -1,    28,     9,
      96,    50,    -1,    26,    31,    -1,   110,    10,   111,    -1,
     111,    -1,   111,    25,   112,    -1,   111,    27,   112,    -1,
     111,    33,   112,    -1,   111,    35,   112,    -1,   111,    22,
     112,    -1,   111,    55,   112,    -1,   112,    -1,   112,    41,
     113,    -1,   112,    36,   113,    -1,   112,    19,   113,    -1,
     113,    -1,   113,    38,   114,    -1,   113,    12,   114,    -1,
     113,    37,   114,    -1,   113,     3,   114,    -1,   114,    -1,
      28,    -1,    28,    34,   115,    49,    -1,    59,    -1,    59,
      34,   115,    49,    -1,    69,    -1,    34,   111,    49,    -1,
      39,   114,    -1,    36,   114,    -1,    28,    32,   111,    42,
      -1,    28,    16,    28,    -1,   115,    10,   111,    -1,   111,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    54,    59,    64,    69,    74,    77,    82,
      85,    90,    93,    96,    99,   104,   107,   112,   115,   120,
     125,   128,   131,   136,   139,   142,   145,   148,   151,   154,
     159,   164,   169,   172,   177,   182,   185,   190,   193,   198,
     201,   206,   211,   214,   217,   220,   223,   228,   233,   238,
     243,   248,   251,   256,   259,   264,   267,   272,   277,   282,
     287,   292,   295,   300,   303,   308,   311,   314,   317,   320,
     323,   326,   329,   332,   337,   340,   343,   348,   351,   354,
     357,   360,   365,   370,   373,   378,   383,   388,   393,   396,
     401,   406,   409,   414,   417,   422,   427,   430,   435,   438,
     441,   444,   447,   450,   453,   458,   461,   464,   467,   472,
     475,   478,   481,   484,   489,   492,   495,   498,   501,   504,
     507,   510,   513,   516,   521,   524
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
  "SYS_FUNCT", "SYS_PROC", "$accept", "program", "program_head", "routine",
  "sub_routine", "routine_head", "const_part", "const_expr_list",
  "const_value", "type_part", "type_decl_list", "type_definition",
  "type_decl", "simple_type_decl", "array_type_decl", "record_type_decl",
  "field_decl_list", "field_decl", "name_list", "var_part",
  "var_decl_list", "var_decl", "routine_part", "function_decl",
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
     315
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    64,    65,    66,    67,    67,    68,
      68,    69,    69,    69,    69,    70,    70,    71,    71,    72,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      75,    76,    77,    77,    78,    79,    79,    80,    80,    81,
      81,    82,    83,    83,    83,    83,    83,    84,    85,    86,
      87,    88,    88,    89,    89,    90,    90,    91,    92,    93,
      94,    95,    95,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    98,    99,    99,    99,
      99,    99,   100,   101,   101,   102,   103,   104,   105,   105,
     106,   107,   107,   108,   108,   109,   110,   110,   111,   111,
     111,   111,   111,   111,   111,   112,   112,   112,   112,   113,
     113,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   115,   115
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     2,     4,     2,     0,     5,
       4,     1,     1,     1,     1,     2,     0,     2,     1,     4,
       1,     1,     1,     1,     1,     3,     3,     4,     5,     3,
       6,     3,     2,     1,     4,     3,     1,     2,     0,     2,
       1,     4,     2,     2,     1,     1,     0,     4,     5,     4,
       3,     3,     0,     3,     1,     3,     3,     2,     1,     1,
       3,     3,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     6,     5,     1,     4,     1,
       4,     4,     5,     2,     0,     4,     4,     8,     1,     1,
       5,     2,     1,     4,     4,     2,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     4,     1,     4,     1,     3,
       2,     2,     4,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     8,     0,     1,     0,     0,     0,    16,
       3,     0,     7,     2,    62,     4,    59,     0,    38,     0,
       0,     0,     0,    15,    18,     0,    46,    13,    14,    11,
      12,     0,     0,     0,    60,     0,     0,    77,     0,     0,
       0,    62,     0,    79,    67,     0,    64,    65,    66,    68,
      69,    70,    71,    72,    73,     0,    17,    36,     0,    37,
      40,     0,     0,     6,    44,     0,    45,     0,    10,     0,
     114,     0,     0,     0,   116,   118,     0,   104,   108,   113,
       0,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,    24,     0,     0,    23,     0,     0,
       0,    20,    21,    22,     0,     0,    39,    52,    52,    42,
      43,     8,     8,     9,     0,     0,     0,     0,   121,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,   125,
       0,     0,    63,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,    33,     0,     0,    19,     0,    35,     0,
      50,     0,     0,     0,     0,   123,     0,     0,   119,     0,
     102,    98,    99,   100,   101,     0,     0,     0,    92,   103,
     107,   106,   105,   112,   110,   111,   109,     0,     0,     0,
       0,    78,    84,    81,    85,    86,     0,    80,     0,    29,
      25,     0,    31,    32,     0,    26,    41,     0,    58,     0,
      54,     0,     0,     0,    47,     5,    49,   122,   115,   117,
       0,     0,    90,    91,    89,    88,     0,    76,     0,   124,
       0,    82,    96,     0,     0,    27,     0,    57,    51,     0,
       0,     0,    48,     0,     0,     0,    75,    83,     0,    28,
      34,    53,    55,    56,    94,    93,     0,    30,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,   162,   163,     9,    12,    75,    18,
      23,    24,   100,   101,   102,   103,   152,   153,    58,    26,
      59,    60,    63,    64,    65,    66,    67,   160,   209,   210,
     211,   212,    15,    44,    21,    45,    46,    47,    48,    49,
     231,    50,    51,    52,   226,    53,   177,   178,    54,   146,
     139,    77,    78,    79,   140
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -140
static const yytype_int16 yypact[] =
{
     -14,    11,    41,    62,    26,  -140,    54,    33,    91,    46,
    -140,    83,    84,  -140,  -140,  -140,  -140,    87,    66,    17,
     106,   145,   109,    87,  -140,   113,    -9,  -140,  -140,  -140,
    -140,   103,    17,    80,  -140,   122,   123,    90,    80,   128,
     121,  -140,    80,   130,  -140,   112,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,   235,  -140,  -140,    49,   113,
    -140,   142,   144,    -9,  -140,   124,  -140,   127,  -140,   129,
      59,    80,    80,    80,   146,  -140,   271,    51,    34,  -140,
     173,  -140,    80,   160,    80,    80,   275,    38,    80,   200,
      -1,    80,  -140,   151,   175,   113,    17,  -140,   113,   181,
     150,  -140,  -140,  -140,   235,   174,  -140,   177,   177,  -140,
    -140,    62,    62,  -140,   180,    80,    80,   287,  -140,  -140,
      80,    80,    80,    80,    80,    80,    19,    80,    80,    80,
      80,    80,    80,    80,    80,    80,   322,   204,   296,   322,
      -6,   231,  -140,   163,    80,   231,     6,   322,   153,   185,
       7,   197,     1,  -140,   100,    17,  -140,   166,  -140,    -5,
    -140,   209,   169,    91,   170,  -140,   310,     8,  -140,    18,
      51,    51,    51,    51,    51,   216,   223,   196,  -140,    51,
      34,    34,    34,  -140,  -140,  -140,  -140,   250,    80,   228,
      80,  -140,   214,  -140,   322,  -140,    80,  -140,   193,  -140,
    -140,   155,  -140,  -140,   235,  -140,  -140,   113,   226,    71,
    -140,   232,   237,   153,  -140,  -140,  -140,  -140,  -140,  -140,
     231,   231,  -140,  -140,  -140,  -140,    80,   322,    80,   322,
     231,  -140,   322,   207,    17,  -140,   190,   226,  -140,    -5,
     153,   153,  -140,   194,   201,   105,   322,  -140,   235,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,   231,  -140,  -140
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,   138,   249,  -140,  -140,   -19,  -140,
    -140,   230,  -101,  -139,  -140,  -140,  -140,   115,   -90,  -140,
    -140,   205,  -140,   192,  -140,   202,  -140,   162,  -140,    35,
    -140,  -140,   110,    -7,   239,  -131,   199,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,   107,  -140,  -140,
     -31,    21,     5,   -53,   -78
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      31,    16,    76,   157,   190,   150,    61,    86,   154,   198,
     192,    90,   145,    69,   195,    62,   196,   105,   190,   118,
     119,   121,   202,    57,   122,    27,   123,    27,   190,    57,
       1,    28,   124,    28,   125,   143,    99,   131,   167,     4,
     117,     5,   169,   191,    14,    33,   132,   175,    29,    13,
      29,   136,   207,   138,   127,   197,   200,   218,   104,   105,
     147,    35,   154,    30,    36,    30,    37,   219,    38,   208,
     128,   133,   134,     6,   242,   114,    10,   151,   183,   184,
     185,   186,    11,    40,   166,    99,    41,   129,    27,   243,
     244,   115,   130,   116,    28,    82,    42,    14,    43,   247,
      17,   252,   253,   236,   187,    19,    83,   176,    70,   204,
     105,    29,    20,   194,    71,    22,    72,   237,   256,    73,
     238,   239,    84,    25,    85,   258,    30,   121,    32,    99,
     122,    55,   123,   180,   181,   182,   205,    87,   124,    74,
     125,    57,   170,   171,   172,   173,   174,   257,   179,   208,
      80,    14,    33,    68,    81,    88,    16,   227,   176,   229,
     127,    27,    92,    27,    91,   232,    34,    28,    35,    28,
     107,    36,   108,    37,   111,    38,    39,   112,   135,   113,
     120,    94,   235,   148,    29,    99,    29,    95,   137,    96,
      40,   234,   149,    41,    99,   245,    97,   246,   155,    30,
     156,    30,   158,    42,    27,    43,    14,    33,   165,   188,
      28,   159,   193,   199,   201,   249,   206,   222,   213,   214,
     216,    99,    99,    35,   175,   220,    36,    29,    37,    99,
      38,    39,   221,   228,   230,   233,   105,    14,    33,    93,
     250,   240,    30,    27,   254,    40,   241,   248,    41,    28,
     164,   255,     8,    56,    35,   109,   144,    36,    42,    37,
      43,    38,    39,    94,   106,   110,    29,   203,   224,    95,
     161,    96,   121,   215,   251,   122,    40,   123,    97,    41,
      89,    30,    98,   124,   223,   125,   142,     0,     0,    42,
       0,    43,     0,   121,     0,     0,   122,   121,   123,     0,
     122,     0,   123,   225,   124,   127,   125,     0,   124,   121,
     125,   126,   122,     0,   123,     0,     0,     0,   121,     0,
     124,   122,   125,   123,     0,     0,   127,   141,     0,   124,
     127,   125,   121,     0,     0,   122,   168,   123,   189,     0,
       0,     0,   127,   124,   121,   125,     0,   122,     0,   123,
       0,   127,   217,     0,     0,   124,     0,   125,     0,     0,
       0,     0,     0,     0,     0,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   127
};

static const yytype_int16 yycheck[] =
{
      19,     8,    33,   104,    10,    95,    15,    38,    98,   148,
     141,    42,    13,    32,   145,    24,    10,    10,    10,    72,
      73,    22,    21,    28,    25,     8,    27,     8,    10,    28,
      44,    14,    33,    14,    35,    88,    55,     3,   116,    28,
      71,     0,   120,    49,     6,     7,    12,    28,    31,    16,
      31,    82,    57,    84,    55,    49,    49,    49,     9,    10,
      91,    23,   152,    46,    26,    46,    28,    49,    30,   159,
      19,    37,    38,    11,   213,    16,    50,    96,   131,   132,
     133,   134,    28,    45,   115,   104,    48,    36,     8,   220,
     221,    32,    41,    34,    14,     5,    58,     6,    60,   230,
      54,   240,   241,   204,   135,    22,    16,   126,    28,     9,
      10,    31,    28,   144,    34,    28,    36,   207,    13,    39,
      49,    50,    32,    57,    34,   256,    46,    22,    22,   148,
      25,    22,    27,   128,   129,   130,   155,     9,    33,    59,
      35,    28,   121,   122,   123,   124,   125,   248,   127,   239,
      28,     6,     7,    50,    31,    34,   163,   188,   177,   190,
      55,     8,    50,     8,    34,   196,    21,    14,    23,    14,
      28,    26,    28,    28,    50,    30,    31,    50,     5,    50,
      34,    28,   201,    32,    31,   204,    31,    34,    28,    36,
      45,    36,    17,    48,   213,   226,    43,   228,    17,    46,
      50,    46,    28,    58,     8,    60,     6,     7,    28,     5,
      14,    34,    49,    28,    17,   234,    50,    21,     9,    50,
      50,   240,   241,    23,    28,     9,    26,    31,    28,   248,
      30,    31,     9,     5,    20,    42,    10,     6,     7,     4,
      50,     9,    46,     8,    50,    45,     9,    40,    48,    14,
     112,    50,     3,    23,    23,    63,    56,    26,    58,    28,
      60,    30,    31,    28,    59,    63,    31,   152,    18,    34,
     108,    36,    22,   163,   239,    25,    45,    27,    43,    48,
      41,    46,    47,    33,   177,    35,    87,    -1,    -1,    58,
      -1,    60,    -1,    22,    -1,    -1,    25,    22,    27,    -1,
      25,    -1,    27,    53,    33,    55,    35,    -1,    33,    22,
      35,    40,    25,    -1,    27,    -1,    -1,    -1,    22,    -1,
      33,    25,    35,    27,    -1,    -1,    55,    52,    -1,    33,
      55,    35,    22,    -1,    -1,    25,    49,    27,    42,    -1,
      -1,    -1,    55,    33,    22,    35,    -1,    25,    -1,    27,
      -1,    55,    42,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    62,    63,    28,     0,    11,    64,    66,    67,
      50,    28,    68,    16,     6,    93,    94,    54,    70,    22,
      28,    95,    28,    71,    72,    57,    80,     8,    14,    31,
      46,    69,    22,     7,    21,    23,    26,    28,    30,    31,
      45,    48,    58,    60,    94,    96,    97,    98,    99,   100,
     102,   103,   104,   106,   109,    22,    72,    28,    79,    81,
      82,    15,    24,    83,    84,    85,    86,    87,    50,    69,
      28,    34,    36,    39,    59,    69,   111,   112,   113,   114,
      28,    31,     5,    16,    32,    34,   111,     9,    34,    95,
     111,    34,    50,     4,    28,    34,    36,    43,    47,    69,
      73,    74,    75,    76,     9,    10,    82,    28,    28,    84,
      86,    50,    50,    50,    16,    32,    34,   111,   114,   114,
      34,    22,    25,    27,    33,    35,    40,    55,    19,    36,
      41,     3,    12,    37,    38,     5,   111,    28,   111,   111,
     115,    52,    97,   114,    56,    13,   110,   111,    32,    17,
      79,    69,    77,    78,    79,    17,    50,    73,    28,    34,
      88,    88,    65,    66,    65,    28,   111,   115,    49,   115,
     112,   112,   112,   112,   112,    28,    69,   107,   108,   112,
     113,   113,   113,   114,   114,   114,   114,   111,     5,    42,
      10,    49,    96,    49,   111,    96,    10,    49,    74,    28,
      49,    17,    21,    78,     9,    69,    50,    57,    79,    89,
      90,    91,    92,     9,    50,    93,    50,    42,    49,    49,
       9,     9,    21,   108,    18,    53,   105,   111,     5,   111,
      20,   101,   111,    42,    36,    69,    73,    79,    49,    50,
       9,     9,    74,    96,    96,   111,   111,    96,    40,    69,
      50,    90,    74,    74,    50,    50,    13,    73,    96
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
#line 49 "parser.y"
    {
        root = new TreeNode("program",3,(yyvsp[(1) - (3)].node),(yyvsp[(2) - (3)].node),(yyvsp[(3) - (3)].node));
    }
    break;

  case 3:
#line 54 "parser.y"
    {
        (yyval.node)=new TreeNode("program_head",3,(yyvsp[(1) - (3)].node),(yyvsp[(2) - (3)].node),(yyvsp[(3) - (3)].node));
    }
    break;

  case 4:
#line 59 "parser.y"
    {
        (yyval.node)=new TreeNode("routine",2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));
    }
    break;

  case 5:
#line 64 "parser.y"
    {
        (yyval.node)=new TreeNode("sub_routine",2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));
    }
    break;

  case 6:
#line 69 "parser.y"
    {
        (yyval.node)=new TreeNode("routine_head",4,(yyvsp[(1) - (4)].node),(yyvsp[(2) - (4)].node),(yyvsp[(3) - (4)].node),(yyvsp[(4) - (4)].node));
    }
    break;

  case 7:
#line 74 "parser.y"
    {
        (yyval.node)=new TreeNode("const_part",2,(yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));
    }
    break;

  case 8:
#line 77 "parser.y"
    {
        (yyval.node)=new TreeNode("undefined", "const_part no member");
    }
    break;

  case 9:
#line 82 "parser.y"
    {
        (yyval.node)=new TreeNode("const_expr_list",5,(yyvsp[(1) - (5)].node),(yyvsp[(2) - (5)].node),(yyvsp[(3) - (5)].node),(yyvsp[(4) - (5)].node),(yyvsp[(5) - (5)].node));
    }
    break;

  case 10:
#line 85 "parser.y"
    {
        (yyval.node)=new TreeNode("const_expr_list",4,(yyvsp[(1) - (4)].node),(yyvsp[(2) - (4)].node),(yyvsp[(3) - (4)].node),(yyvsp[(4) - (4)].node));
    }
    break;

  case 11:
#line 90 "parser.y"
    {
        (yyval.node)=new TreeNode("const_value", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 12:
#line 93 "parser.y"
    {
        (yyval.node)=new TreeNode("const_value", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 13:
#line 96 "parser.y"
    {
        (yyval.node)=new TreeNode("const_value", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 14:
#line 99 "parser.y"
    {
        (yyval.node)=new TreeNode("const_value", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 15:
#line 104 "parser.y"
    {
        (yyval.node)=new TreeNode("type_part", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 16:
#line 107 "parser.y"
    {
        (yyval.node)=new TreeNode("undefined", "type_part no member");
    }
    break;

  case 17:
#line 112 "parser.y"
    {
        (yyval.node)=new TreeNode("type_decl_list", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 18:
#line 115 "parser.y"
    {
        (yyval.node)=new TreeNode("type_decl_list", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 19:
#line 120 "parser.y"
    {
        (yyval.node)=new TreeNode("type_definition",4,(yyvsp[(1) - (4)].node),(yyvsp[(2) - (4)].node),(yyvsp[(3) - (4)].node),(yyvsp[(4) - (4)].node));
    }
    break;

  case 20:
#line 125 "parser.y"
    {
        (yyval.node)=new TreeNode("type_decl", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 21:
#line 128 "parser.y"
    {
        (yyval.node)=new TreeNode("type_decl", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 22:
#line 131 "parser.y"
    {
        (yyval.node)=new TreeNode("type_decl", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 23:
#line 136 "parser.y"
    {
        (yyval.node)=new TreeNode("simple_type_decl", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 24:
#line 139 "parser.y"
    {
        (yyval.node)=new TreeNode("simple_type_decl", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 25:
#line 142 "parser.y"
    {
        (yyval.node)=new TreeNode("simple_type_decl", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 26:
#line 145 "parser.y"
    {
        (yyval.node)=new TreeNode("simple_type_decl", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 27:
#line 148 "parser.y"
    {
        (yyval.node)=new TreeNode("simple_type_decl", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 28:
#line 151 "parser.y"
    {
        (yyval.node)=new TreeNode("simple_type_decl", 5, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    }
    break;

  case 29:
#line 154 "parser.y"
    {
        (yyval.node)=new TreeNode("simple_type_decl", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 30:
#line 159 "parser.y"
    {
        (yyval.node)=new TreeNode("array_type_decl", 6, (yyvsp[(1) - (6)].node), (yyvsp[(2) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
    }
    break;

  case 31:
#line 164 "parser.y"
    {
        (yyval.node)=new TreeNode("record_type_decl", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 32:
#line 169 "parser.y"
    {
        (yyval.node)=new TreeNode("field_decl_list", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 33:
#line 172 "parser.y"
    {
        (yyval.node)=new TreeNode("field_decl_list", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 34:
#line 177 "parser.y"
    {
        (yyval.node)=new TreeNode("field_decl", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 35:
#line 182 "parser.y"
    {
        (yyval.node)=new TreeNode("name_list", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 36:
#line 185 "parser.y"
    {
        (yyval.node)=new TreeNode("name_list", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 37:
#line 190 "parser.y"
    {
        (yyval.node)=new TreeNode("var_part", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 38:
#line 193 "parser.y"
    {
        (yyval.node)=new TreeNode("undefined", "var_part no member");
    }
    break;

  case 39:
#line 198 "parser.y"
    {
        (yyval.node)=new TreeNode("var_decl_list", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 40:
#line 201 "parser.y"
    {
        (yyval.node)=new TreeNode("var_decl_list", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 41:
#line 206 "parser.y"
    {
        (yyval.node)=new TreeNode("var_decl", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 42:
#line 211 "parser.y"
    {
        (yyval.node)=new TreeNode("routine_part", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 43:
#line 214 "parser.y"
    {
        (yyval.node)=new TreeNode("routine_part", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 44:
#line 217 "parser.y"
    {
        (yyval.node)=new TreeNode("routine_part", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 45:
#line 220 "parser.y"
    {
        (yyval.node)=new TreeNode("routine_part", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 46:
#line 223 "parser.y"
    {
        (yyval.node)=new TreeNode("routine_part", "routine_part no member");
    }
    break;

  case 47:
#line 228 "parser.y"
    {
        (yyval.node)=new TreeNode("function_decl", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 48:
#line 233 "parser.y"
    {
        (yyval.node)=new TreeNode("function_head", 5, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    }
    break;

  case 49:
#line 238 "parser.y"
    {
        (yyval.node)=new TreeNode("procedure_decl", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 50:
#line 243 "parser.y"
    {
        (yyval.node)=new TreeNode("procedure_head", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 51:
#line 248 "parser.y"
    {
        (yyval.node)=new TreeNode("parameters", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 52:
#line 251 "parser.y"
    {
        (yyval.node)=new TreeNode("parameters", "parameters no member");
    }
    break;

  case 53:
#line 256 "parser.y"
    {
        (yyval.node)=new TreeNode("para_decl_list", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 54:
#line 259 "parser.y"
    {
        (yyval.node)=new TreeNode("para_decl_list", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 55:
#line 264 "parser.y"
    {
        (yyval.node)=new TreeNode("para_type_list", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 56:
#line 267 "parser.y"
    {
        (yyval.node)=new TreeNode("para_type_list", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 57:
#line 272 "parser.y"
    {
        (yyval.node)=new TreeNode("var_para_list", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 58:
#line 277 "parser.y"
    {
        (yyval.node)=new TreeNode("val_para_list", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 59:
#line 282 "parser.y"
    {
        (yyval.node)=new TreeNode("routine_body", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 60:
#line 287 "parser.y"
    {
        (yyval.node)=new TreeNode("compound_stmt", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 61:
#line 292 "parser.y"
    {
        (yyval.node)=new TreeNode("stmt_list", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 62:
#line 295 "parser.y"
    {
        (yyval.node)=new TreeNode("stmt_list", "stmt_list no member"); 
    }
    break;

  case 63:
#line 300 "parser.y"
    {
        (yyval.node)=new TreeNode("stmt", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 64:
#line 303 "parser.y"
    {
        (yyval.node)=new TreeNode("stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 65:
#line 308 "parser.y"
    {
        (yyval.node)=new TreeNode("non_label_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 66:
#line 311 "parser.y"
    {
        (yyval.node)=new TreeNode("non_label_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 67:
#line 314 "parser.y"
    {
        (yyval.node)=new TreeNode("non_label_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 68:
#line 317 "parser.y"
    {
        (yyval.node)=new TreeNode("non_label_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 69:
#line 320 "parser.y"
    {
        (yyval.node)=new TreeNode("non_label_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 70:
#line 323 "parser.y"
    {
        (yyval.node)=new TreeNode("non_label_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 71:
#line 326 "parser.y"
    {
        (yyval.node)=new TreeNode("non_label_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 72:
#line 329 "parser.y"
    {
        (yyval.node)=new TreeNode("non_label_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 73:
#line 332 "parser.y"
    {
        (yyval.node)=new TreeNode("non_label_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 74:
#line 337 "parser.y"
    {
        (yyval.node)=new TreeNode("assign_stmt", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 75:
#line 340 "parser.y"
    {
        (yyval.node)=new TreeNode("assign_stmt", 6, (yyvsp[(1) - (6)].node), (yyvsp[(2) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
    }
    break;

  case 76:
#line 343 "parser.y"
    {
        (yyval.node)=new TreeNode("assign_stmt", 5, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    }
    break;

  case 77:
#line 348 "parser.y"
    {
        (yyval.node)=new TreeNode("proc_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 78:
#line 351 "parser.y"
    {
        (yyval.node)=new TreeNode("proc_stmt", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 79:
#line 354 "parser.y"
    {
        (yyval.node)=new TreeNode("proc_stmt", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 80:
#line 357 "parser.y"
    {
        (yyval.node)=new TreeNode("proc_stmt", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 81:
#line 360 "parser.y"
    {
        (yyval.node)=new TreeNode("proc_stmt", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 82:
#line 365 "parser.y"
    {
        (yyval.node)=new TreeNode("if_stmt", 5, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    }
    break;

  case 83:
#line 370 "parser.y"
    {
        (yyval.node)=new TreeNode("else_clause", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 84:
#line 373 "parser.y"
    {
        (yyval.node)=new TreeNode("else_clause", "else_clause no member"); 
    }
    break;

  case 85:
#line 378 "parser.y"
    {
        (yyval.node)=new TreeNode("repeat_stmt", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 86:
#line 383 "parser.y"
    {
        (yyval.node)=new TreeNode("while_stmt", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 87:
#line 388 "parser.y"
    {
        (yyval.node)=new TreeNode("for_stmt", 8, (yyvsp[(1) - (8)].node), (yyvsp[(2) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(4) - (8)].node), (yyvsp[(5) - (8)].node), (yyvsp[(6) - (8)].node), (yyvsp[(7) - (8)].node), (yyvsp[(8) - (8)].node));
    }
    break;

  case 88:
#line 393 "parser.y"
    {
        (yyval.node)=new TreeNode("direction", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 89:
#line 396 "parser.y"
    {
        (yyval.node)=new TreeNode("direction", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 90:
#line 401 "parser.y"
    {
        (yyval.node)=new TreeNode("case_stmt", 5, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    }
    break;

  case 91:
#line 406 "parser.y"
    {
        (yyval.node)=new TreeNode("case_expr_list", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 92:
#line 409 "parser.y"
    {
        (yyval.node)=new TreeNode("case_expr_list", 2, (yyvsp[(1) - (1)].node));
    }
    break;

  case 93:
#line 414 "parser.y"
    {
        (yyval.node)=new TreeNode("case_expr", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 94:
#line 417 "parser.y"
    {
        (yyval.node)=new TreeNode("case_expr", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 95:
#line 422 "parser.y"
    {
        (yyval.node)=new TreeNode("direction", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 96:
#line 427 "parser.y"
    {
        (yyval.node)=new TreeNode("expression_list", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 97:
#line 430 "parser.y"
    {
        (yyval.node)=new TreeNode("expression_list", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 98:
#line 435 "parser.y"
    {
        (yyval.node)=new TreeNode("expression", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 99:
#line 438 "parser.y"
    {
        (yyval.node)=new TreeNode("expression", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 100:
#line 441 "parser.y"
    {
        (yyval.node)=new TreeNode("expression", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 101:
#line 444 "parser.y"
    {
        (yyval.node)=new TreeNode("expression", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 102:
#line 447 "parser.y"
    {
        (yyval.node)=new TreeNode("expression", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 103:
#line 450 "parser.y"
    {
        (yyval.node)=new TreeNode("expression", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 104:
#line 453 "parser.y"
    {
        (yyval.node)=new TreeNode("expression", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 105:
#line 458 "parser.y"
    {
        (yyval.node)=new TreeNode("expr", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 106:
#line 461 "parser.y"
    {
        (yyval.node)=new TreeNode("expr", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 107:
#line 464 "parser.y"
    {
        (yyval.node)=new TreeNode("expr", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 108:
#line 467 "parser.y"
    {
        (yyval.node)=new TreeNode("expr", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 109:
#line 472 "parser.y"
    {
        (yyval.node)=new TreeNode("term", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 110:
#line 475 "parser.y"
    {
        (yyval.node)=new TreeNode("term", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 111:
#line 478 "parser.y"
    {
        (yyval.node)=new TreeNode("term", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 112:
#line 481 "parser.y"
    {
        (yyval.node)=new TreeNode("term", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 113:
#line 484 "parser.y"
    {
        (yyval.node)=new TreeNode("term", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 114:
#line 489 "parser.y"
    {
        (yyval.node)=new TreeNode("factor", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 115:
#line 492 "parser.y"
    {
        (yyval.node)=new TreeNode("factor", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 116:
#line 495 "parser.y"
    {
        (yyval.node)=new TreeNode("factor", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 117:
#line 498 "parser.y"
    {
        (yyval.node)=new TreeNode("factor", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 118:
#line 501 "parser.y"
    {
        (yyval.node)=new TreeNode("factor", 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 119:
#line 504 "parser.y"
    {
        (yyval.node)=new TreeNode("factor", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 120:
#line 507 "parser.y"
    {
        (yyval.node)=new TreeNode("factor", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 121:
#line 510 "parser.y"
    {
        (yyval.node)=new TreeNode("factor", 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 122:
#line 513 "parser.y"
    {
        (yyval.node)=new TreeNode("factor", 4, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 123:
#line 516 "parser.y"
    {
        (yyval.node)=new TreeNode("factor", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 124:
#line 521 "parser.y"
    {
        (yyval.node)=new TreeNode("args_list", 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 125:
#line 524 "parser.y"
    {
        (yyval.node)=new TreeNode("args_list", 1, (yyvsp[(1) - (1)].node));
    }
    break;


/* Line 1267 of yacc.c.  */
#line 2585 "dist/y.tab.cpp"
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


#line 528 "parser.y"


int main(int argc,char* argv[]){
    // input demo code file
    yyin = fopen(argv[1],"r");
    yyparse();
    // output AST to json file
    root->write_json("./syntax-tree.json");
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

