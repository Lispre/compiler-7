/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

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
     TRY = 258,
     CATCH = 259,
     NSEXception = 260,
     NUllPointerException = 261,
     OUtOfBoundryException = 262,
     CAstException = 263,
     FINALLY = 264,
     AT_INTERFACE = 265,
     IDENTIFIER = 266,
     SEMI_COLUMN = 267,
     NSSTRING = 268,
     FLOAT = 269,
     CHAR = 270,
     INT = 271,
     SEMI_COMA = 272,
     ID = 273,
     AT_PUBLIC = 274,
     AT_PROTECTED = 275,
     AT_PRIVATE = 276,
     OPEN_S = 277,
     CLOSE_S = 278,
     COMMA = 279,
     LESS_THAN = 280,
     MORE_THAN = 281,
     AT_END = 282,
     CONST = 283,
     VOID = 284,
     PLUS = 285,
     MINUS = 286,
     OPEN_P = 287,
     CLOSE_P = 288,
     AT_IMPLEMENTATION = 289,
     AND_AND = 290,
     OR_OR = 291,
     STRING_VAL = 292,
     FLOAT_VAL = 293,
     LESS_OR_EQUAL = 294,
     CHAR_VAL = 295,
     INT_VAL = 296,
     MORE_OR_EQUAL = 297,
     MULTI = 298,
     EQUAL_EQUAL = 299,
     NOT_EQUAL = 300,
     FOR = 301,
     EQUAL = 302,
     DIV = 303,
     WHILE = 304,
     IF = 305,
     OPEN_ARR = 306,
     CLOSE_ARR = 307,
     TRUE = 308,
     FALSE = 309,
     RETURN = 310,
     AT_PROTOCOL = 311,
     DO = 312,
     DOT = 313,
     SYMBOL = 314,
     SWITCH = 315,
     BREAK = 316,
     DEFAULT = 317,
     CASE = 318,
     STRUCT = 319,
     TYPEDEF = 320,
     ENUM = 321,
     if_h = 322,
     ELSE = 323,
     expr_1 = 324,
     p_type_expr_prec = 325,
     long_id_prec = 326
   };
#endif
/* Tokens.  */
#define TRY 258
#define CATCH 259
#define NSEXception 260
#define NUllPointerException 261
#define OUtOfBoundryException 262
#define CAstException 263
#define FINALLY 264
#define AT_INTERFACE 265
#define IDENTIFIER 266
#define SEMI_COLUMN 267
#define NSSTRING 268
#define FLOAT 269
#define CHAR 270
#define INT 271
#define SEMI_COMA 272
#define ID 273
#define AT_PUBLIC 274
#define AT_PROTECTED 275
#define AT_PRIVATE 276
#define OPEN_S 277
#define CLOSE_S 278
#define COMMA 279
#define LESS_THAN 280
#define MORE_THAN 281
#define AT_END 282
#define CONST 283
#define VOID 284
#define PLUS 285
#define MINUS 286
#define OPEN_P 287
#define CLOSE_P 288
#define AT_IMPLEMENTATION 289
#define AND_AND 290
#define OR_OR 291
#define STRING_VAL 292
#define FLOAT_VAL 293
#define LESS_OR_EQUAL 294
#define CHAR_VAL 295
#define INT_VAL 296
#define MORE_OR_EQUAL 297
#define MULTI 298
#define EQUAL_EQUAL 299
#define NOT_EQUAL 300
#define FOR 301
#define EQUAL 302
#define DIV 303
#define WHILE 304
#define IF 305
#define OPEN_ARR 306
#define CLOSE_ARR 307
#define TRUE 308
#define FALSE 309
#define RETURN 310
#define AT_PROTOCOL 311
#define DO 312
#define DOT 313
#define SYMBOL 314
#define SWITCH 315
#define BREAK 316
#define DEFAULT 317
#define CASE 318
#define STRUCT 319
#define TYPEDEF 320
#define ENUM 321
#define if_h 322
#define ELSE 323
#define expr_1 324
#define p_type_expr_prec 325
#define long_id_prec 326




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"

	#include <fstream>
	#include <iostream>  // not really needed since fstream includes it
	#include <stdlib.h>  
	#include <FlexLexer.h>
	#include "comp\hash_tabel.h"
	#include "comp\Symbol_Table.h"
	#include "comp\Interface.h"
	#include "comp\Method.h"
	#include "comp\Variable.h"
	#include "comp\Scope.h"
	#include "comp\Defs.h"
	#include "comp\ErrorRecovery.h"
	#include "comp\AST.h"
	#include <vector>
	#include <queue>
	using namespace std;
	ErrorRecovery *Er=new ErrorRecovery();
	void yyerror(char *);
	vector<string> param_list;
	Symbol_Table *s=new Symbol_Table();
	char *Inhert;
	int i;
	int temp22=0;
	int datamember_offset;
 	int function_offset;

	queue<char*> var;
	void add_param(int type)
	{
	if(type==1)
		param_list.push_back("int");
	else if(type==2)
		param_list.push_back("char");
	else if(type==3)
		param_list.push_back("float");
	else if(type==4)
		param_list.push_back("nsstring");
	else if(type==5)
		param_list.push_back("void");
	else
		param_list.push_back("complex");
}
	char* Interface_name;
	int in=0;
	int visability=0;
	using namespace std;
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	FlexLexer* lexer = new yyFlexLexer();
	class Parser{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	AST * ast = new AST();


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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 140 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int i;
		float f;
		char c;
		int type;
		char* str;
		int myLineNo;
		int myColno;
	}r;
	class TreeNode * tn;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 301 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 313 "yacc.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1009

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  80
/* YYNRULES -- Number of rules. */
#define YYNRULES  256
/* YYNRULES -- Number of states. */
#define YYNSTATES  542

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    19,
      24,    29,    33,    37,    40,    45,    49,    53,    57,    60,
      63,    66,    68,    72,    74,    78,    82,    86,    90,    93,
      96,    98,   100,   103,   106,   108,   110,   112,   114,   118,
     122,   128,   134,   139,   144,   151,   158,   160,   162,   164,
     166,   173,   181,   188,   196,   200,   205,   211,   218,   224,
     229,   237,   244,   254,   261,   272,   282,   286,   288,   296,
     302,   310,   315,   324,   331,   336,   340,   342,   348,   352,
     354,   356,   358,   360,   362,   364,   366,   369,   372,   374,
     376,   378,   383,   388,   392,   396,   401,   405,   410,   414,
     418,   422,   426,   427,   432,   434,   438,   443,   448,   452,
     454,   457,   461,   469,   472,   474,   476,   478,   481,   486,
     491,   495,   498,   502,   505,   508,   511,   513,   515,   517,
     520,   524,   527,   530,   534,   537,   540,   542,   544,   546,
     549,   551,   552,   555,   557,   559,   563,   567,   569,   571,
     573,   576,   585,   594,   602,   611,   619,   627,   634,   642,
     650,   658,   665,   672,   679,   685,   690,   694,   699,   703,
     706,   710,   712,   716,   720,   724,   728,   732,   735,   739,
     743,   747,   749,   751,   755,   759,   763,   767,   771,   774,
     778,   782,   786,   789,   793,   797,   799,   803,   807,   809,
     811,   813,   815,   817,   819,   821,   825,   829,   833,   837,
     841,   844,   848,   851,   854,   859,   864,   868,   873,   878,
     881,   886,   888,   896,   904,   912,   920,   928,   938,   948,
     954,   960,   962,   964,   966,   968,   973,   978,   982,   987,
     992,   994,   996,   998,  1002,  1005,  1007,  1010,  1013,  1017,
    1020,  1024,  1027,  1030,  1034,  1037,  1040
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      73,     0,    -1,    74,    -1,    74,    75,    -1,    75,    -1,
      76,    -1,   110,    -1,   149,    -1,    77,    78,    -1,    10,
      11,    12,    11,    -1,    10,    11,     1,    11,    -1,    10,
      11,    12,    -1,    10,    11,    11,    -1,    10,    11,    -1,
      79,    81,    98,    27,    -1,    79,    81,    27,    -1,    79,
      98,    27,    -1,    81,    98,    27,    -1,    79,    27,    -1,
      81,    27,    -1,    98,    27,    -1,    27,    -1,    25,    80,
      26,    -1,    11,    -1,    80,     1,    11,    -1,    80,    24,
      11,    -1,    22,    82,    23,    -1,    22,    82,     1,    -1,
      22,    82,    -1,    82,    83,    -1,    83,    -1,    84,    -1,
      85,    84,    -1,    84,    86,    -1,    86,    -1,    21,    -1,
      20,    -1,    19,    -1,    95,    11,    17,    -1,    95,    11,
       1,    -1,    95,    11,    47,   133,    17,    -1,    95,    11,
      47,   133,     1,    -1,    28,    95,    11,    17,    -1,    28,
      95,    11,     1,    -1,    28,    95,    11,    47,   133,    17,
      -1,    28,    95,    11,    47,   133,     1,    -1,    87,    -1,
      88,    -1,    90,    -1,    92,    -1,    66,    22,    80,    23,
      11,    17,    -1,    65,    66,    22,    80,    23,    11,    17,
      -1,    64,    11,    22,    89,    23,    17,    -1,    64,    11,
      22,    89,    23,    80,    17,    -1,    95,    11,    17,    -1,
      89,    95,    11,    17,    -1,    95,    11,    12,   133,    17,
      -1,    89,    95,    11,    12,   133,    17,    -1,    89,    28,
      95,    11,    17,    -1,    28,    95,    11,    17,    -1,    89,
      28,    95,    11,    12,   133,    17,    -1,    28,    95,    11,
      12,   133,    17,    -1,    95,    11,    51,    41,    52,    47,
      22,    23,    17,    -1,    95,    11,    51,    41,    52,    17,
      -1,    95,    11,    51,    41,    52,    47,    22,    91,    23,
      17,    -1,    95,    11,    51,    52,    47,    22,    91,    23,
      17,    -1,    91,    24,   128,    -1,   128,    -1,    91,    24,
      51,    41,    52,    47,   128,    -1,    51,    41,    52,    47,
     128,    -1,    95,    11,    93,    47,    22,    23,    17,    -1,
      95,    11,    93,    17,    -1,    95,    11,    93,    47,    22,
      94,    23,    17,    -1,    51,    41,    52,    51,    41,    52,
      -1,    93,    51,    41,    52,    -1,    22,    91,    23,    -1,
     128,    -1,    94,    24,    22,    91,    23,    -1,    94,    24,
     128,    -1,    96,    -1,    97,    -1,    16,    -1,    15,    -1,
      14,    -1,    13,    -1,    29,    -1,    11,    43,    -1,    98,
      99,    -1,    99,    -1,   100,    -1,   101,    -1,    30,   102,
     103,    17,    -1,    30,   102,   103,     1,    -1,    30,   103,
      17,    -1,    30,   103,     1,    -1,    31,   102,   103,    17,
      -1,    31,   103,    17,    -1,    31,   102,   103,     1,    -1,
      31,   103,     1,    -1,    32,    95,    33,    -1,     1,    95,
      33,    -1,    32,    95,     1,    -1,    -1,    11,    12,   104,
     105,    -1,    11,    -1,   105,    12,   106,    -1,   105,    11,
      12,   106,    -1,   105,    11,     1,   106,    -1,   105,    11,
     106,    -1,   106,    -1,   102,    11,    -1,     3,   134,   108,
      -1,     4,    32,     5,   109,    33,   134,   108,    -1,     9,
     134,    -1,     6,    -1,     7,    -1,     8,    -1,   111,   112,
      -1,    34,    11,    12,    11,    -1,    34,    11,     1,    11,
      -1,    34,    11,    11,    -1,    34,    11,    -1,    81,   113,
      27,    -1,    81,    27,    -1,   113,    27,    -1,   113,   114,
      -1,   114,    -1,   115,    -1,   117,    -1,   116,   134,    -1,
      30,   102,   103,    -1,    30,   103,    -1,   118,   134,    -1,
      31,   102,   103,    -1,    31,   103,    -1,   119,   120,    -1,
     120,    -1,   123,    -1,   138,    -1,   128,    17,    -1,    86,
      -1,    -1,   121,   134,    -1,   122,    -1,   107,    -1,    55,
     128,    17,    -1,    55,   128,     1,    -1,   124,    -1,   135,
      -1,   137,    -1,   125,   120,    -1,    46,    32,   126,    17,
     127,    17,   128,    33,    -1,    46,    32,   126,    17,   127,
      17,   128,     1,    -1,    46,   126,    17,   127,    17,   128,
      33,    -1,    46,     1,   126,    17,   127,    17,   128,    33,
      -1,    46,    32,    17,   127,    17,   128,    33,    -1,    46,
      32,    17,   127,    17,   128,     1,    -1,    46,    17,   127,
      17,   128,    33,    -1,    46,     1,    17,   127,    17,   128,
      33,    -1,    46,    32,   126,    17,    17,   128,    33,    -1,
      46,    32,   126,    17,   127,    17,    33,    -1,    46,    32,
     126,    17,    17,    33,    -1,    46,    32,    17,   127,    17,
      33,    -1,    46,    32,    17,    17,   128,    33,    -1,    46,
      32,    17,    17,    33,    -1,    16,    11,    47,   128,    -1,
      16,    11,   128,    -1,    16,    11,     1,   128,    -1,    11,
      47,   128,    -1,    11,   128,    -1,    11,     1,   128,    -1,
      11,    -1,   128,    25,   128,    -1,   128,    26,   128,    -1,
     128,    39,   128,    -1,   128,    42,   128,    -1,   128,    44,
     128,    -1,    45,   128,    -1,    32,   127,    33,    -1,   127,
      35,   127,    -1,   127,    36,   127,    -1,   131,    -1,   133,
      -1,   130,    25,   130,    -1,   130,    26,   130,    -1,   130,
      39,   130,    -1,   130,    42,   130,    -1,   130,    44,   130,
      -1,    45,   130,    -1,    32,   129,    33,    -1,   129,    35,
     129,    -1,   129,    36,   129,    -1,     1,   130,    -1,    32,
     129,     1,    -1,     1,   129,    33,    -1,   133,    -1,   132,
      47,   133,    -1,   132,    58,    11,    -1,   144,    -1,    11,
      -1,    37,    -1,    41,    -1,    38,    -1,    40,    -1,   132,
      -1,   133,    30,   133,    -1,   133,    31,   133,    -1,   133,
      43,   133,    -1,   133,    48,   133,    -1,    32,   133,    33,
      -1,   102,   133,    -1,    22,   119,    23,    -1,    22,    23,
      -1,   136,   120,    -1,    49,    32,   127,    33,    -1,    49,
      32,   127,     1,    -1,    49,   127,    33,    -1,    49,     1,
     127,    33,    -1,    57,   120,   136,    17,    -1,   143,   120,
      -1,   143,   120,    68,   120,    -1,   139,    -1,    60,    32,
     141,    33,    22,   140,    23,    -1,    60,     1,   141,    33,
      22,   140,    23,    -1,    60,    32,   141,     1,    22,   140,
      23,    -1,    60,    32,   141,    33,    22,   140,     1,    -1,
      60,    32,   141,    33,     1,   140,    23,    -1,    63,    32,
     142,    33,    12,   120,    61,    17,   140,    -1,    63,    32,
     142,    33,    12,   120,     1,    17,   140,    -1,    62,    12,
     120,    61,    17,    -1,    62,    12,   120,     1,    17,    -1,
     127,    -1,   128,    -1,   129,    -1,   130,    -1,    50,    32,
     127,    33,    -1,    50,    32,   127,     1,    -1,    50,   127,
      33,    -1,    50,     1,   127,    33,    -1,    51,   145,   146,
      52,    -1,   144,    -1,    11,    -1,    11,    -1,    11,    12,
     147,    -1,   147,   148,    -1,   148,    -1,    12,   133,    -1,
       1,   133,    -1,    11,    12,   133,    -1,    11,   133,    -1,
      11,     1,   133,    -1,   150,   151,    -1,    56,    11,    -1,
      79,    98,    27,    -1,    98,    27,    -1,    79,    27,    -1,
      27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   156,   156,   160,   161,   164,   165,   166,   172,   182,
     196,   204,   213,   218,   232,   237,   241,   246,   250,   254,
     258,   262,   269,   278,   279,   280,   286,   288,   290,   297,
     299,   301,   308,   316,   320,   329,   331,   334,   342,   372,
     374,   396,   399,   418,   422,   427,   431,   432,   433,   434,
     440,   441,   445,   446,   451,   452,   453,   454,   455,   456,
     457,   458,   465,   466,   467,   468,   476,   477,   478,   479,
     486,   487,   488,   493,   494,   501,   503,   505,   507,   512,
     514,   520,   522,   524,   526,   528,   535,   546,   548,   554,
     556,   565,   574,   583,   590,   601,   609,   614,   616,   621,
     623,   625,   632,   632,   634,   640,   642,   644,   646,   648,
     653,   664,   668,   669,   672,   673,   674,   682,   691,   704,
     714,   722,   740,   741,   742,   749,   750,   754,   755,   762,
     771,   773,   781,   785,   787,   794,   795,   801,   802,   803,
     804,   805,   805,   806,   807,   814,   815,   818,   819,   820,
     823,   829,   835,   837,   839,   842,   848,   850,   852,   857,
     862,   865,   868,   871,   875,   883,   884,   885,   886,   887,
     888,   889,   894,   895,   896,   897,   898,   899,   900,   901,
     902,   905,   906,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   918,   919,   920,   925,   929,   935,   940,   941,
     956,   963,   971,   975,   978,  1011,  1013,  1014,  1015,  1016,
    1017,  1022,  1023,  1028,  1031,  1032,  1033,  1034,  1037,  1039,
    1040,  1043,  1046,  1047,  1048,  1049,  1050,  1059,  1063,  1064,
    1065,  1070,  1071,  1075,  1076,  1079,  1080,  1081,  1082,  1085,
    1088,  1089,  1092,  1093,  1096,  1097,  1100,  1101,  1102,  1103,
    1104,  1106,  1112,  1123,  1126,  1129,  1132
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TRY", "CATCH", "NSEXception",
  "NUllPointerException", "OUtOfBoundryException", "CAstException",
  "FINALLY", "AT_INTERFACE", "IDENTIFIER", "SEMI_COLUMN", "NSSTRING",
  "FLOAT", "CHAR", "INT", "SEMI_COMA", "ID", "AT_PUBLIC", "AT_PROTECTED",
  "AT_PRIVATE", "OPEN_S", "CLOSE_S", "COMMA", "LESS_THAN", "MORE_THAN",
  "AT_END", "CONST", "VOID", "PLUS", "MINUS", "OPEN_P", "CLOSE_P",
  "AT_IMPLEMENTATION", "AND_AND", "OR_OR", "STRING_VAL", "FLOAT_VAL",
  "LESS_OR_EQUAL", "CHAR_VAL", "INT_VAL", "MORE_OR_EQUAL", "MULTI",
  "EQUAL_EQUAL", "NOT_EQUAL", "FOR", "EQUAL", "DIV", "WHILE", "IF",
  "OPEN_ARR", "CLOSE_ARR", "TRUE", "FALSE", "RETURN", "AT_PROTOCOL", "DO",
  "DOT", "SYMBOL", "SWITCH", "BREAK", "DEFAULT", "CASE", "STRUCT",
  "TYPEDEF", "ENUM", "if_h", "ELSE", "expr_1", "p_type_expr_prec",
  "long_id_prec", "$accept", "program", "components", "component",
  "class_interface", "class_interface_header", "class_interface_body",
  "protocol_reference_list", "ids_list", "instance_variables",
  "instance_variable_declarations", "instance_variable_declaration",
  "variable_declaration_list", "visibility_specification",
  "variable_declaration", "Enum", "structrule", "variable_declarations",
  "ArrayOne", "array_body", "ArrayN", "Multi", "array_body2", "type",
  "simple_type", "complex_type", "interface_declaration_list",
  "interface_declaration", "class_method_declaration",
  "instance_method_declaration", "p_type", "method_selector", "@1",
  "parameter_list", "parameter", "try_catch", "catch_statment",
  "Exception_type", "class_implementation", "class_implementation_header",
  "class_implementation_body", "implementation_definition_list",
  "implementation_definition", "class_implementation_definition",
  "class_implementation_definition_header",
  "instance_implementation_definition",
  "instance_implementation_definition_header", "statement_list",
  "statement", "@2", "return_statement", "loop_statement", "for_loop",
  "for_loop_header", "for_initializer", "logic_expr", "expr",
  "logic_expr2", "expr2", "assign_expr", "long_id", "simple_expr",
  "block_body", "while_loop", "while_loop_header", "do_while_loop",
  "conditional_statement", "switch", "switch_body", "switch_statement",
  "case_statement", "if_header", "message_call", "sender", "message",
  "argument_list", "argument", "protocol", "protocol_header",
  "protocol_body", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    72,    73,    74,    74,    75,    75,    75,    76,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    80,    80,    80,    81,    81,    81,    82,
      82,    82,    83,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    96,    96,    96,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   101,   101,   101,   101,   102,
     102,   102,   104,   103,   103,   105,   105,   105,   105,   105,
     106,   107,   108,   108,   109,   109,   109,   110,   111,   111,
     111,   111,   112,   112,   112,   113,   113,   114,   114,   115,
     116,   116,   117,   118,   118,   119,   119,   120,   120,   120,
     120,   121,   120,   120,   120,   122,   122,   123,   123,   123,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   126,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   130,   131,   132,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   134,   135,   136,   136,   136,   136,   137,   138,
     138,   138,   139,   139,   139,   139,   139,   140,   140,   140,
     140,   141,   141,   142,   142,   143,   143,   143,   143,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   148,   148,
     148,   149,   150,   151,   151,   151,   151
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     4,
       4,     3,     3,     2,     4,     3,     3,     3,     2,     2,
       2,     1,     3,     1,     3,     3,     3,     3,     2,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     3,     3,
       5,     5,     4,     4,     6,     6,     1,     1,     1,     1,
       6,     7,     6,     7,     3,     4,     5,     6,     5,     4,
       7,     6,     9,     6,    10,     9,     3,     1,     7,     5,
       7,     4,     8,     6,     4,     3,     1,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     4,     4,     3,     3,     4,     3,     4,     3,     3,
       3,     3,     0,     4,     1,     3,     4,     4,     3,     1,
       2,     3,     7,     2,     1,     1,     1,     2,     4,     4,
       3,     2,     3,     2,     2,     2,     1,     1,     1,     2,
       3,     2,     2,     3,     2,     2,     1,     1,     1,     2,
       1,     0,     2,     1,     1,     3,     3,     1,     1,     1,
       2,     8,     8,     7,     8,     7,     7,     6,     7,     7,
       7,     6,     6,     6,     5,     4,     3,     4,     3,     2,
       3,     1,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     1,     1,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     2,     3,     3,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     3,     2,     2,     4,     4,     3,     4,     4,     2,
       4,     1,     7,     7,     7,     7,     7,     9,     9,     5,
       5,     1,     1,     1,     1,     4,     4,     3,     4,     4,
       1,     1,     1,     3,     2,     1,     2,     2,     3,     2,
       3,     2,     2,     3,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,     2,     4,     5,     0,     6,
       0,     7,     0,     0,     0,   252,     1,     3,     0,     0,
      21,     0,     0,     8,     0,     0,     0,    88,    89,    90,
       0,     0,     0,   117,     0,   126,   127,     0,   128,     0,
     256,     0,     0,   251,     0,    12,    11,     0,   120,     0,
       0,    84,    83,    82,    81,    37,    36,    35,     0,    85,
       0,     0,     0,     0,    30,    31,     0,    34,    46,    47,
      48,    49,     0,    79,    80,    23,     0,     0,   104,     0,
       0,     0,     0,     0,    18,     0,     0,    19,     0,    20,
      87,     0,   131,     0,   134,   123,     0,   124,   125,     0,
     129,   132,   255,     0,   254,    10,     9,   119,   118,    86,
       0,     0,     0,     0,    27,    26,    29,    33,    32,     0,
       0,     0,    22,     0,   102,     0,     0,    94,    93,     0,
      98,    96,    15,     0,    16,    17,   130,   133,   122,     0,
     199,   212,     0,   200,   202,   203,   201,     0,     0,     0,
       0,     0,     0,     0,   140,     0,   144,     0,   136,     0,
     143,   137,   147,     0,     0,   181,   204,   182,   148,     0,
     149,   138,   221,     0,   198,   253,     0,     0,     0,     0,
      39,    38,     0,     0,     0,    24,    25,   100,     0,   101,
      99,    92,    91,    97,    95,    14,     0,   204,     0,     0,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
       0,     0,     0,     0,   241,   240,     0,     0,     0,     0,
       0,   210,   211,   135,   142,   150,   139,     0,     0,     0,
       0,     0,     0,   213,   219,    43,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
     103,   109,     0,     0,   111,   209,     0,     0,     0,     0,
     169,     0,     0,     0,     0,     0,     0,     0,     0,   182,
     177,   216,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   242,     0,   146,   145,     0,   231,   232,     0,
       0,   196,   197,   205,   206,   207,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    40,     0,     0,
       0,     0,   110,     0,     0,     0,   113,     0,     0,   170,
     168,     0,     0,   166,     0,     0,     0,     0,     0,     0,
     217,   215,   214,   179,   180,   172,   173,   174,   175,   176,
     238,   236,   235,     0,   239,   218,     0,     0,     0,   220,
      45,    44,     0,    52,     0,     0,     0,     0,    54,     0,
      50,    63,     0,     0,     0,     0,     0,     0,    76,    74,
       0,     0,   108,   105,     0,     0,     0,   167,   165,   178,
       0,   164,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,     0,     0,     0,     0,    59,    53,     0,
       0,    55,     0,    51,     0,     0,     0,     0,    67,     0,
      70,     0,     0,   107,   106,   114,   115,   116,     0,     0,
       0,   157,   163,   162,     0,   161,     0,     0,     0,   247,
       0,     0,   249,   246,   244,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,    56,     0,     0,    73,     0,
       0,     0,    75,    72,     0,    78,     0,   158,     0,   156,
     155,   159,   160,     0,   153,   250,   248,     0,     0,   223,
     224,   226,   225,   222,    61,     0,    57,    62,     0,     0,
      65,     0,    66,     0,     0,   154,   152,   151,     0,     0,
       0,     0,   233,   234,   195,     0,    60,    64,     0,     0,
      77,   112,     0,     0,     0,   192,     0,     0,   195,   188,
       0,     0,     0,     0,     0,     0,     0,     0,    69,     0,
     230,   229,   194,   193,   189,   190,   191,   183,   184,   185,
     186,   187,     0,     0,     0,    68,     0,     0,     0,     0,
     228,   227
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    23,    24,    76,    25,
      63,    64,    65,    66,   154,    68,    69,   239,    70,   407,
      71,   184,   367,    72,    73,    74,    26,    27,    28,    29,
     155,    81,   188,   250,   251,   156,   254,   418,     9,    10,
      33,    34,    35,    36,    37,    38,    39,   157,   158,   159,
     160,   161,   162,   163,   204,   287,   210,   492,   507,   165,
     166,   167,   100,   168,   169,   170,   171,   172,   437,   289,
     495,   173,   174,   216,   283,   390,   391,    11,    12,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -385
static const short int yypact[] =
{
      27,    15,    36,    68,   152,    27,  -385,  -385,   851,  -385,
     331,  -385,   426,   921,   329,  -385,  -385,  -385,   117,   154,
    -385,    37,    37,  -385,   528,   515,   577,  -385,  -385,  -385,
      37,    37,   631,  -385,   685,  -385,  -385,   149,  -385,   149,
    -385,   706,   717,  -385,   162,  -385,   199,   249,  -385,   263,
     153,  -385,  -385,  -385,  -385,  -385,  -385,  -385,   950,  -385,
     271,   220,   266,   953,  -385,   178,   178,  -385,  -385,  -385,
    -385,  -385,   279,  -385,  -385,  -385,   146,   950,   292,   950,
     345,    26,   345,   202,  -385,   749,   781,  -385,   792,  -385,
    -385,   345,  -385,   345,  -385,  -385,   806,  -385,  -385,   525,
    -385,  -385,  -385,   812,  -385,  -385,  -385,  -385,  -385,  -385,
     353,   348,   355,   154,  -385,  -385,  -385,  -385,   178,    64,
     373,   375,  -385,   365,  -385,    29,   212,  -385,  -385,   233,
    -385,  -385,  -385,   880,  -385,  -385,  -385,  -385,  -385,   149,
     153,  -385,   334,  -385,  -385,  -385,  -385,   429,   730,   745,
      40,   898,   641,   103,  -385,   898,  -385,   583,  -385,   149,
    -385,  -385,  -385,   641,   383,  -385,    -3,   579,  -385,   641,
    -385,  -385,  -385,   641,  -385,  -385,   109,   843,   154,   247,
    -385,  -385,   898,   265,   150,  -385,  -385,  -385,   163,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,   196,   357,   961,   315,
     453,   406,   762,   362,   420,   217,  -385,   217,   898,   581,
     470,   217,   217,   595,  -385,  -385,   430,   262,   398,   762,
     762,   579,  -385,  -385,  -385,  -385,  -385,   898,   441,   898,
     898,   898,   898,  -385,   390,  -385,  -385,   898,   950,   974,
     461,   314,   472,    55,   449,   468,  -385,   503,   494,   519,
     241,  -385,   512,   149,  -385,  -385,   762,   539,   334,   898,
    -385,   777,   217,    82,   532,   564,   762,   724,   133,   961,
    -385,  -385,   762,   762,   898,   898,   898,   898,   898,   756,
     179,  -385,   576,   543,  -385,  -385,   602,   427,   470,   592,
      30,   579,  -385,   216,   216,  -385,  -385,   641,   412,   615,
      96,   950,   625,   277,   626,   622,  -385,  -385,   170,   619,
     688,   594,  -385,   224,   163,   645,  -385,   370,   762,  -385,
    -385,   334,   898,  -385,   850,   898,   240,   431,   713,   442,
    -385,  -385,   890,   433,   433,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,   890,   291,  -385,  -385,   629,   637,    18,  -385,
    -385,  -385,   317,  -385,   185,   642,   327,   898,  -385,   643,
    -385,  -385,   646,   623,   918,   918,   648,   456,  -385,  -385,
     473,   163,  -385,  -385,   500,   898,   475,  -385,  -385,  -385,
     644,  -385,   647,   634,   794,   496,   898,   898,   809,   898,
      38,  -385,   489,   489,   489,   489,   898,  -385,  -385,   395,
     898,  -385,   401,  -385,   829,   624,    46,   537,  -385,   544,
    -385,   669,   852,  -385,  -385,  -385,  -385,  -385,   655,   660,
     898,  -385,  -385,  -385,   107,  -385,   661,   864,   662,   579,
     334,   898,   579,   579,  -385,   691,   672,   690,   694,   695,
     104,   486,   898,  -385,   570,  -385,   702,   555,  -385,   656,
     704,   930,  -385,  -385,   918,  -385,   149,  -385,   699,  -385,
    -385,  -385,  -385,   128,  -385,   579,   579,   641,   876,  -385,
    -385,  -385,  -385,  -385,  -385,   692,  -385,  -385,   710,   687,
    -385,    65,  -385,   569,   196,  -385,  -385,  -385,    14,   282,
     282,   898,   567,   658,   579,   705,  -385,  -385,   898,   697,
    -385,  -385,   725,   726,   909,   658,   274,   658,   961,  -385,
     876,   876,   898,   898,   898,   898,   898,   740,  -385,   708,
    -385,  -385,  -385,  -385,  -385,   433,   433,  -385,  -385,  -385,
    -385,  -385,   641,   898,    16,  -385,   744,   748,   489,   489,
    -385,  -385
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -385,  -385,  -385,   761,  -385,  -385,  -385,   757,  -112,    90,
    -385,   709,   718,  -385,    -6,  -385,  -385,  -385,  -385,  -358,
    -385,  -385,  -385,   -54,  -385,  -385,     4,    -8,  -385,  -385,
      11,    -9,  -385,  -385,  -278,  -385,   290,  -385,  -385,  -385,
    -385,   755,   -28,  -385,  -385,  -385,  -385,  -385,  -149,  -385,
    -385,  -385,  -385,  -385,    21,   209,   -99,  -101,  -122,  -385,
       8,   -88,   -37,  -385,   575,  -385,  -385,  -385,  -384,   578,
    -385,  -385,  -145,  -385,  -385,  -385,   407,  -385,  -385,  -385
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -244
static const short int yytable[] =
{
     164,   179,   101,   218,   110,   215,    98,   409,   223,   438,
     439,   440,    67,    83,   225,   502,    42,   536,    90,   394,
     233,    92,    94,   123,   234,   125,    13,   127,    86,    88,
     189,   347,    80,    82,    90,   372,   373,     1,    77,   387,
     395,    91,    93,   128,   227,   103,   447,    14,    78,   388,
     389,   214,   217,   164,   198,   228,   306,   214,   164,   117,
      67,     2,   190,   348,   164,   180,   241,   221,    98,    79,
     164,   126,   307,   129,   164,   503,   214,   537,    90,    15,
      90,   181,   136,     3,   137,   229,   230,   449,   125,   133,
    -243,   150,   413,   414,   243,    90,   483,   150,   231,   325,
      32,   260,   196,   232,   219,   472,   499,    75,   459,   270,
     235,   182,   117,   353,    85,   183,   150,   272,   273,   269,
     288,   288,   224,   240,   269,    90,   236,   473,    50,   486,
      51,    52,    53,    54,   331,   220,    55,    56,    57,   291,
     460,   293,   294,   295,   296,    58,    59,   120,   349,   298,
     197,   123,    16,   125,   540,   541,   237,   123,   125,   319,
     320,   487,   323,   197,    77,    75,   332,   246,   272,   273,
     121,    99,   122,   105,   269,   335,   336,   337,   338,   339,
     341,    60,    61,    62,   299,   302,   120,   361,   354,    50,
     197,    51,    52,    53,    54,    79,   109,   247,   164,   249,
     252,   248,   398,   130,   123,   253,    58,    59,   125,   121,
     106,   368,   342,   191,   272,   273,   316,   362,    77,   131,
     257,   363,   377,   378,   265,   370,   380,   382,   140,   192,
      51,    52,    53,    54,   193,   197,   371,   197,   197,   197,
     197,    77,    60,    61,    62,   197,    59,   355,   120,   262,
     194,   206,   313,   314,   143,   144,    79,   145,   146,   231,
     107,   215,   208,   284,   232,   408,   408,   123,   150,   402,
     242,   121,   142,   381,   108,   523,   419,   143,   144,   285,
     145,   146,   111,   489,   424,   426,   112,   428,   113,   357,
     119,   150,   387,   140,   358,    51,    52,    53,    54,   429,
     432,   433,   388,   389,   124,   408,   244,   524,   441,   510,
     511,    59,   444,   455,   490,   120,   123,   245,   488,   143,
     144,   458,   145,   146,   249,   249,   200,   491,   463,   396,
      47,   201,   256,   150,   397,    77,   215,   304,   121,   400,
      48,    49,   465,   466,   401,   140,   493,    51,    52,    53,
      54,  -121,   482,    18,   475,   408,    78,   209,   213,  -121,
    -121,    30,    31,    59,   176,   197,   142,   505,   164,   509,
     177,   143,   144,   200,   145,   146,   123,   178,   201,   264,
     494,   249,   249,   534,   185,   150,   186,   375,   504,   506,
     527,   528,   529,   530,   531,   197,   197,   197,   187,   518,
     226,   494,   508,   494,   197,   272,   273,   442,   197,   525,
     526,   263,   443,   350,   267,   228,   268,   261,   445,   484,
     279,   280,   494,   494,   494,   494,   494,   494,   494,   351,
     199,   229,   230,   164,   535,   123,   125,   266,   197,   197,
     200,   282,   229,   230,   231,   201,   202,   148,   383,   232,
     197,    19,   292,    40,   258,   231,    21,    22,   297,   386,
     232,   203,   272,   273,   206,   317,   272,   273,  -244,  -244,
    -171,   324,   303,   327,    77,   329,   197,   272,   273,   411,
     412,   333,   334,   305,    50,   142,    51,    52,    53,    54,
     143,   144,   420,   145,   146,   274,   275,   197,   197,   197,
     259,   308,    59,   474,   150,    79,   415,   416,   417,   276,
     272,   273,   277,   427,   278,   309,   229,   230,   197,   197,
     197,   197,   197,   197,   197,   310,    77,   376,   139,   231,
     312,   272,   273,    77,   232,   311,   140,   385,    51,    52,
      53,    54,    87,   206,   315,    21,    22,  -141,   141,   326,
      18,   435,   436,    58,    59,    84,   318,   142,    21,    22,
     450,   451,   143,   144,   262,   145,   146,   452,   451,   143,
     144,   147,   145,   146,   148,   149,   150,   208,   478,   451,
     151,   328,   152,   150,    77,   153,   139,   476,   343,    60,
      61,    62,   500,   451,   140,   344,    51,    52,    53,    54,
     229,   230,   510,   511,    89,  -141,   222,    21,    22,   229,
     230,    58,    59,   231,   271,   142,   272,   273,   232,   345,
     143,   144,   231,   145,   146,   346,   352,   232,   281,   147,
     272,   273,   148,   149,   150,    77,   356,   359,   151,   360,
     152,   364,    77,   153,   139,   206,   369,    60,    61,    62,
     374,   392,   140,   399,    51,    52,    53,    54,    95,   393,
     403,    30,    31,  -141,   405,   410,   142,   423,   404,    58,
      59,   143,   144,   142,   145,   146,   448,   421,   143,   144,
     422,   145,   146,   512,   513,   150,   453,   147,   456,    77,
     148,   149,   150,   457,   461,   464,   151,   514,   152,   206,
     515,   153,   516,   467,   468,    60,    61,    62,   479,   496,
     365,   366,    97,   469,    77,    30,    31,   470,   471,   477,
     142,   480,   229,   230,   206,   143,   144,   497,   145,   146,
     384,   205,   485,   102,   498,   231,    21,    22,   517,   150,
     232,   206,   520,   521,   104,   262,   211,    21,    22,   519,
     143,   144,   532,   145,   146,   533,   206,   330,   208,   272,
     273,   538,   207,    77,   150,   539,    17,   143,   144,    41,
     145,   146,   116,   206,   501,   208,   132,   212,   321,    21,
      22,   150,   143,   144,   118,   145,   146,    96,   206,   340,
     208,   272,   273,   286,   262,    77,   150,   434,   290,   143,
     144,     0,   145,   146,     0,   206,     0,   208,   134,   142,
     430,    21,    22,   150,   143,   144,     0,   145,   146,   135,
     206,   431,    21,    22,   322,     0,   142,   425,   150,     0,
      77,   143,   144,   138,   145,   146,    30,    31,     0,   175,
     206,   142,    21,    22,     0,   150,   143,   144,     0,   145,
     146,     0,   446,    77,    50,     0,    51,    52,    53,    54,
     150,   142,     0,   206,     0,    77,   143,   144,     0,   145,
     146,   238,    59,    18,   454,   206,    19,   489,    20,     0,
     406,    21,    22,   379,   142,   272,   273,   206,     0,   143,
     144,     0,   145,   146,     0,     0,   142,   462,     0,    77,
       0,   143,   144,   150,   145,   146,     0,   195,   490,   206,
      21,    22,     0,   143,   144,   150,   145,   146,     0,    77,
       0,   491,    44,  -178,     0,  -178,  -178,   150,     0,   206,
     142,    77,    45,    46,     0,   143,   144,     0,   145,   146,
       0,   206,   522,   -13,   510,   511,   -13,     0,   -13,   150,
     142,   -13,   -13,     0,   114,   143,   144,     0,   145,   146,
       0,    50,   142,    51,    52,    53,    54,   143,   144,   406,
     145,   146,    55,    56,    57,     0,   115,     0,     0,    59,
     -28,   481,     0,   -28,   -28,    50,     0,    51,    52,    53,
      54,   229,   230,     0,   255,     0,     0,   300,     0,     0,
       0,     0,   301,    59,   231,     0,     0,     0,     0,   232
};

static const short int yycheck[] =
{
      99,   113,    39,   152,    58,   150,    34,   365,   157,   393,
     394,   395,    18,    22,   163,     1,    12,     1,    26,     1,
     169,    30,    31,    77,   173,    79,    11,     1,    24,    25,
       1,     1,    21,    22,    42,   313,   314,    10,     1,     1,
      22,    30,    31,    17,    47,    41,   404,    11,    11,    11,
      12,    11,   151,   152,   142,    58,     1,    11,   157,    65,
      66,    34,    33,    33,   163,     1,   178,   155,    96,    32,
     169,    80,    17,    82,   173,    61,    11,    61,    86,    11,
      88,    17,    91,    56,    93,    30,    31,    41,   142,    85,
      52,    51,   370,   371,   182,   103,   454,    51,    43,    17,
      10,   200,   139,    48,     1,     1,    41,    11,     1,   208,
       1,    47,   118,    17,    24,    51,    51,    35,    36,   207,
     219,   220,   159,   177,   212,   133,    17,    23,    11,     1,
      13,    14,    15,    16,     1,    32,    19,    20,    21,   227,
      33,   229,   230,   231,   232,    28,    29,     1,   297,   237,
     142,   205,     0,   207,   538,   539,    47,   211,   212,   258,
     259,    33,   261,   155,     1,    11,    33,    17,    35,    36,
      24,    22,    26,    11,   262,   274,   275,   276,   277,   278,
       1,    64,    65,    66,   238,   239,     1,    17,   300,    11,
     182,    13,    14,    15,    16,    32,    43,    47,   297,   188,
       4,    51,    17,     1,   258,     9,    28,    29,   262,    24,
      11,   310,    33,     1,    35,    36,   253,    47,     1,    17,
     199,    51,   321,   322,   203,     1,   325,   326,    11,    17,
      13,    14,    15,    16,     1,   227,    12,   229,   230,   231,
     232,     1,    64,    65,    66,   237,    29,   301,     1,    32,
      17,    11,    11,    12,    37,    38,    32,    40,    41,    43,
      11,   406,    45,     1,    48,   364,   365,   321,    51,   357,
      23,    24,    32,    33,    11,     1,   375,    37,    38,    17,
      40,    41,    11,     1,   383,   384,    66,   386,    22,    12,
      11,    51,     1,    11,    17,    13,    14,    15,    16,   387,
     388,   389,    11,    12,    12,   404,    41,    33,   396,    35,
      36,    29,   400,   412,    32,     1,   370,    52,   467,    37,
      38,   420,    40,    41,   313,   314,    11,    45,   427,    12,
       1,    16,    17,    51,    17,     1,   481,    23,    24,    12,
      11,    12,   430,   431,    17,    11,   468,    13,    14,    15,
      16,    22,   451,    22,   442,   454,    11,   148,   149,    30,
      31,    30,    31,    29,    11,   357,    32,   489,   467,   491,
      22,    37,    38,    11,    40,    41,   430,    22,    16,    17,
     468,   370,   371,   532,    11,    51,    11,    17,   489,   490,
     512,   513,   514,   515,   516,   387,   388,   389,    33,   498,
      17,   489,   490,   491,   396,    35,    36,    12,   400,   510,
     511,   202,    17,     1,   205,    58,   207,    11,    17,   456,
     211,   212,   510,   511,   512,   513,   514,   515,   516,    17,
       1,    30,    31,   532,   533,   489,   490,    17,   430,   431,
      11,    11,    30,    31,    43,    16,    17,    49,    17,    48,
     442,    25,    11,    27,     1,    43,    30,    31,    68,    17,
      48,    32,    35,    36,    11,   256,    35,    36,    35,    36,
      17,   262,    11,   264,     1,   266,   468,    35,    36,    23,
      24,   272,   273,    11,    11,    32,    13,    14,    15,    16,
      37,    38,    17,    40,    41,    25,    26,   489,   490,   491,
      47,    52,    29,    17,    51,    32,     6,     7,     8,    39,
      35,    36,    42,    17,    44,    47,    30,    31,   510,   511,
     512,   513,   514,   515,   516,    22,     1,   318,     3,    43,
      11,    35,    36,     1,    48,    41,    11,   328,    13,    14,
      15,    16,    27,    11,    32,    30,    31,    22,    23,    17,
      22,    62,    63,    28,    29,    27,    17,    32,    30,    31,
      23,    24,    37,    38,    32,    40,    41,    23,    24,    37,
      38,    46,    40,    41,    49,    50,    51,    45,    23,    24,
      55,    17,    57,    51,     1,    60,     3,    17,    12,    64,
      65,    66,    23,    24,    11,    52,    13,    14,    15,    16,
      30,    31,    35,    36,    27,    22,    23,    30,    31,    30,
      31,    28,    29,    43,    33,    32,    35,    36,    48,    17,
      37,    38,    43,    40,    41,    33,    11,    48,    33,    46,
      35,    36,    49,    50,    51,     1,    11,    11,    55,    17,
      57,    22,     1,    60,     3,    11,    52,    64,    65,    66,
       5,    22,    11,    11,    13,    14,    15,    16,    27,    22,
      17,    30,    31,    22,    41,    17,    32,    33,    22,    28,
      29,    37,    38,    32,    40,    41,    52,    33,    37,    38,
      33,    40,    41,    25,    26,    51,    17,    46,    33,     1,
      49,    50,    51,    33,    33,    33,    55,    39,    57,    11,
      42,    60,    44,    12,    32,    64,    65,    66,    52,    17,
      22,    23,    27,    23,     1,    30,    31,    23,    23,    17,
      32,    17,    30,    31,    11,    37,    38,    17,    40,    41,
      17,     1,    33,    27,    47,    43,    30,    31,    33,    51,
      48,    11,    17,    17,    27,    32,     1,    30,    31,    52,
      37,    38,    12,    40,    41,    47,    11,    33,    45,    35,
      36,    17,    32,     1,    51,    17,     5,    37,    38,    12,
      40,    41,    63,    11,   484,    45,    27,    32,     1,    30,
      31,    51,    37,    38,    66,    40,    41,    32,    11,    33,
      45,    35,    36,   218,    32,     1,    51,   390,   220,    37,
      38,    -1,    40,    41,    -1,    11,    -1,    45,    27,    32,
       1,    30,    31,    51,    37,    38,    -1,    40,    41,    27,
      11,    12,    30,    31,    47,    -1,    32,    33,    51,    -1,
       1,    37,    38,    27,    40,    41,    30,    31,    -1,    27,
      11,    32,    30,    31,    -1,    51,    37,    38,    -1,    40,
      41,    -1,    23,     1,    11,    -1,    13,    14,    15,    16,
      51,    32,    -1,    11,    -1,     1,    37,    38,    -1,    40,
      41,    28,    29,    22,    22,    11,    25,     1,    27,    -1,
      51,    30,    31,    33,    32,    35,    36,    11,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    32,    33,    -1,     1,
      -1,    37,    38,    51,    40,    41,    -1,    27,    32,    11,
      30,    31,    -1,    37,    38,    51,    40,    41,    -1,     1,
      -1,    45,     1,    33,    -1,    35,    36,    51,    -1,    11,
      32,     1,    11,    12,    -1,    37,    38,    -1,    40,    41,
      -1,    11,    33,    22,    35,    36,    25,    -1,    27,    51,
      32,    30,    31,    -1,     1,    37,    38,    -1,    40,    41,
      -1,    11,    32,    13,    14,    15,    16,    37,    38,    51,
      40,    41,    19,    20,    21,    -1,    23,    -1,    -1,    29,
      27,    51,    -1,    30,    31,    11,    -1,    13,    14,    15,
      16,    30,    31,    -1,    33,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    43,    -1,    -1,    -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    10,    34,    56,    73,    74,    75,    76,    77,   110,
     111,   149,   150,    11,    11,    11,     0,    75,    22,    25,
      27,    30,    31,    78,    79,    81,    98,    99,   100,   101,
      30,    31,    81,   112,   113,   114,   115,   116,   117,   118,
      27,    79,    98,   151,     1,    11,    12,     1,    11,    12,
      11,    13,    14,    15,    16,    19,    20,    21,    28,    29,
      64,    65,    66,    82,    83,    84,    85,    86,    87,    88,
      90,    92,    95,    96,    97,    11,    80,     1,    11,    32,
     102,   103,   102,   103,    27,    81,    98,    27,    98,    27,
      99,   102,   103,   102,   103,    27,   113,    27,   114,    22,
     134,   134,    27,    98,    27,    11,    11,    11,    11,    43,
      95,    11,    66,    22,     1,    23,    83,    86,    84,    11,
       1,    24,    26,    95,    12,    95,   103,     1,    17,   103,
       1,    17,    27,    98,    27,    27,   103,   103,    27,     3,
      11,    23,    32,    37,    38,    40,    41,    46,    49,    50,
      51,    55,    57,    60,    86,   102,   107,   119,   120,   121,
     122,   123,   124,   125,   128,   131,   132,   133,   135,   136,
     137,   138,   139,   143,   144,    27,    11,    22,    22,    80,
       1,    17,    47,    51,    93,    11,    11,    33,   104,     1,
      33,     1,    17,     1,    17,    27,   134,   132,   133,     1,
      11,    16,    17,    32,   126,     1,    11,    32,    45,   127,
     128,     1,    32,   127,    11,   144,   145,   128,   120,     1,
      32,   133,    23,   120,   134,   120,    17,    47,    58,    30,
      31,    43,    48,   120,   120,     1,    17,    47,    28,    89,
      95,    80,    23,   133,    41,    52,    17,    47,    51,   102,
     105,   106,     4,     9,   108,    33,    17,   126,     1,    47,
     128,    11,    32,   127,    17,   126,    17,   127,   127,   133,
     128,    33,    35,    36,    25,    26,    39,    42,    44,   127,
     127,    33,    11,   146,     1,    17,   136,   127,   128,   141,
     141,   133,    11,   133,   133,   133,   133,    68,   133,    95,
      23,    28,    95,    11,    23,    11,     1,    17,    52,    47,
      22,    41,    11,    11,    12,    32,   134,   127,    17,   128,
     128,     1,    47,   128,   127,    17,    17,   127,    17,   127,
      33,     1,    33,   127,   127,   128,   128,   128,   128,   128,
      33,     1,    33,    12,    52,    17,    33,     1,    33,   120,
       1,    17,    11,    17,    80,    95,    11,    12,    17,    11,
      17,    17,    47,    51,    22,    22,    23,    94,   128,    52,
       1,    12,   106,   106,     5,    17,   127,   128,   128,    33,
     128,    33,   128,    17,    17,   127,    17,     1,    11,    12,
     147,   148,    22,    22,     1,    22,    12,    17,    17,    11,
      12,    17,   133,    17,    22,    41,    51,    91,   128,    91,
      17,    23,    24,   106,   106,     6,     7,     8,   109,   128,
      17,    33,    33,    33,   128,    33,   128,    17,   128,   133,
       1,    12,   133,   133,   148,    62,    63,   140,   140,   140,
     140,   133,    12,    17,   133,    17,    23,    91,    52,    41,
      23,    24,    23,    17,    22,   128,    33,    33,   128,     1,
      33,    33,    33,   128,    33,   133,   133,    12,    32,    23,
      23,    23,     1,    23,    17,   133,    17,    17,    23,    52,
      17,    51,   128,    91,   134,    33,     1,    33,   120,     1,
      32,    45,   129,   130,   133,   142,    17,    17,    47,    41,
      23,   108,     1,    61,   129,   130,   129,   130,   133,   130,
      35,    36,    25,    26,    39,    42,    44,    33,   128,    52,
      17,    17,    33,     1,    33,   129,   129,   130,   130,   130,
     130,   130,    12,    47,   120,   128,     1,    61,    17,    17,
     140,   140
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
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

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
#line 156 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {ast->print((yyvsp[0].tn),0);cout<<"program: components\n";;}
    break;

  case 3:
#line 160 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"components: components component\n"; (yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, componentsListNode));;}
    break;

  case 4:
#line 161 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"components: component\n";			 (yyval.tn) = ast->createNode((yyvsp[0].tn), 0, componentNode);;}
    break;

  case 5:
#line 164 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"component:	class_interface\n";			(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 6:
#line 165 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"component:	class_implementation\n";	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 7:
#line 166 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"component:	protocol\n";				(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 8:
#line 172 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		s->insert_scope((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
		cout<<"class_interface: class_interface_header class_interface_body\n";
		(yyval.tn) =ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn), class_interface);;}
    break;

  case 9:
#line 182 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		i=1;
		
		datamember_offset=0;

		(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Interface((yyvsp[-2].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 
		else if(s->insertInterfaceInCurrentScope((yyvsp[-2].r.str),(yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Not found inhertance Interface"); 
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
		cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 10:
#line 196 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		i=1;
		(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Interface((yyvsp[-2].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 													Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;																																		
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error",":");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 11:
#line 204 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		i=1;
		(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Interface((yyvsp[-1].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","IDENTIFIER");
																						 (yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 12:
#line 213 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {i=1;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Interface((yyvsp[-1].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 																				Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
																							(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 13:
#line 218 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		i=1;
		datamember_offset=0;

		(yyval.r.str)=(yyvsp[0].r.str);
		if(s->check_Interface((yyvsp[0].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		s->insertInterfaceInCurrentScope((yyvsp[0].r.str),"NSObject"); 	
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																						(yyval.tn) =ast->createNode(0,0, class_interface_header_Node);;}
    break;

  case 14:
#line 233 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 15:
#line 238 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 16:
#line 242 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 					interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 17:
#line 247 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);;}
    break;

  case 18:
#line 251 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-1].tn),0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 19:
#line 255 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:instance_variables		 AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 20:
#line 259 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 21:
#line 263 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 22:
#line 269 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"protocol_reference_list: LESS_THAN ids_list MORE_THAN\n";
										(yyval.tn) = (yyvsp[-1].tn);
										;}
    break;

  case 23:
#line 278 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"ids_list:IDENTIFIER\n";									    (yyval.tn) = ast->createNode(0, 0, ids_list_Node);;}
    break;

  case 24:
#line 279 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",","); (yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 25:
#line 280 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"ids_list:ids_list COMMA IDENTIFIER\n";						(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 26:
#line 286 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 27:
#line 288 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 28:
#line 290 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","}");
														(yyval.tn) =(yyvsp[0].tn) ;}
    break;

  case 29:
#line 297 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";
																		(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node));;}
    break;

  case 30:
#line 299 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 31:
#line 301 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:variable_declaration_list\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 32:
#line 308 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"instance_variable_declaration:variable_declaration_list\n";
																	(yyval.tn) = ast->createNode((yyvsp[-1].tn), (yyvsp[0].tn), instance_variable_declaration_Node);
																	;}
    break;

  case 33:
#line 317 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node));
										;}
    break;

  case 34:
#line 321 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration\n";
										(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node);
										;}
    break;

  case 35:
#line 329 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PRIVATE\n";
					(yyval.tn) = ast->createNode(0,0, visibility_specification_private_Node);;}
    break;

  case 36:
#line 331 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PROTECTED\n";
						(yyval.tn) = ast->createNode(0,0, visibility_specification_protected_Node);;}
    break;

  case 37:
#line 334 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PUBLIC\n";
						(yyval.tn) = ast->createNode(0,0, visibility_specification_public_Node);;}
    break;

  case 38:
#line 343 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {


			int offset;
 				if(i==1)
 					offset=datamember_offset++;
 				else
 					offset=function_offset++;
				cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n"; 
				Type t=static_cast<Type>((yyvsp[-2].r.type));
				(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);	
				if((yyvsp[-2].r.type)==6){
					if(s->insertVariableInCurrentScope((yyvsp[-1].r.str),(yyvsp[-2].r.str),visability,offset,(yyval.tn)) == 0)	
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				}
				else{
					if(s->insertVariableInCurrentScope((yyvsp[-1].r.str),t,visability,offset,(yyval.tn)) == 0) 
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				}
				Variable *v=(Variable*)(yyval.tn)->item;
				cout<<v->getoffset();
				(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 39:
#line 372 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
											(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 40:
#line 374 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		int offset;
		if(i==1)
			offset=datamember_offset++;
 		else
 			offset=function_offset++;
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, variable_declaration_ID);
		Type t=static_cast<Type>((yyvsp[-4].r.type));
		if((yyvsp[-4].r.type)==6){
			if(s->insertVariableInCurrentScope((yyvsp[-3].r.str),(yyvsp[-4].r.str),visability,offset,(yyval.tn)) == 0)	
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		}
		else{
			if(s->insertVariableInCurrentScope((yyvsp[-3].r.str),t,visability,offset,(yyval.tn)) == 0) 
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;
		}

		cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	
		  /*check expr type less or equal */;}
    break;

  case 41:
#line 396 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
													(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 42:
#line 399 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		
		
		
		int offset;
 		if(i==1)
 			offset=datamember_offset++;
 		else
 			offset=function_offset++;
		(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
		Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),t,visability,offset,(yyval.tn)) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;	;}
    break;

  case 43:
#line 418 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
												(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 44:
#line 422 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-4].r.type));if(s->insertVariableInCurrentScope((yyvsp[-4].r.str),t,visability) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
		(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 45:
#line 427 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
														(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 46:
#line 431 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout << "Enum \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_enum);;}
    break;

  case 47:
#line 432 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout << "Struct \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_struct);;}
    break;

  case 48:
#line 433 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout << "Array \n" ; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayone);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 49:
#line 434 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout <<"Array N \n ";				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayN);		(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 50:
#line 440 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 51:
#line 441 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 52:
#line 445 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, structNode);;}
    break;

  case 53:
#line 446 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn), structNode);;}
    break;

  case 54:
#line 451 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {;;}
    break;

  case 55:
#line 452 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {;;}
    break;

  case 56:
#line 453 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 57:
#line 454 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 58:
#line 455 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 59:
#line 456 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 60:
#line 457 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 61:
#line 458 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 62:
#line 465 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 63:
#line 466 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-5].tn)->expectedType;;}
    break;

  case 64:
#line 467 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-9].tn)->expectedType;;}
    break;

  case 65:
#line 468 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 66:
#line 476 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 67:
#line 477 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) =ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 68:
#line 478 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-6].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 69:
#line 479 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 70:
#line 486 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-4].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-6].tn)->expectedType;;}
    break;

  case 71:
#line 487 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-3].tn)->expectedType;;}
    break;

  case 72:
#line 488 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-5].tn),(yyvsp[-2].tn), ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-7].tn)->expectedType;;}
    break;

  case 73:
#line 493 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, ArrayNMultiNode);;}
    break;

  case 74:
#line 494 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode(0,0, ArrayNMultiNode));;}
    break;

  case 75:
#line 501 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[-1].tn),0, array_body2Node);
															;}
    break;

  case 76:
#line 503 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[0].tn),0, array_body2Node);
															;}
    break;

  case 77:
#line 505 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-4].tn), ast->createNode((yyvsp[-1].tn),0, array_body2Node));
															;}
    break;

  case 78:
#line 507 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode(0,0, array_body2Node));
															;}
    break;

  case 79:
#line 512 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: simple_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;}
    break;

  case 80:
#line 514 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: complex_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 81:
#line 520 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"simple_type:int\n";(yyval.r.type)=1;
													(yyval.tn)=ast->createNode(0,0, simple_type_INT);  (yyval.tn)->expectedType=inttype;;}
    break;

  case 82:
#line 522 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"simple_type:char\n";(yyval.r.type)=2;
													(yyval.tn)=ast->createNode(0,0, simple_type_CHAR);	(yyval.tn)->expectedType=chartype;;}
    break;

  case 83:
#line 524 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"simple_type:float\n";(yyval.r.type)=3;
													(yyval.tn)=ast->createNode(0,0, simple_typeFLOAT);	(yyval.tn)->expectedType=floattype;;}
    break;

  case 84:
#line 526 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"simple_type:string\n";(yyval.r.type)=4;
													(yyval.tn)=ast->createNode(0,0, simple_type_NSSTRING);	(yyval.tn)->expectedType=stringtype;;}
    break;

  case 85:
#line 528 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"simple_type:void\n";(yyval.r.type)=5;
													(yyval.tn)=ast->createNode(0,0, simple_type_VOID);	(yyval.tn)->expectedType=voidtype;;}
    break;

  case 86:
#line 535 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		(yyval.r.type)=6;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_var_type((yyvsp[-1].r.str))==0)	
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","type is undefined");
		cout<<"complex_type:	IDENTIFIER	MULTI\n";
		(yyval.tn)=ast->createNode(0,0, complex_type);
			(yyval.tn)->expectedType=complextype;;}
    break;

  case 87:
#line 546 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
														(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node));;}
    break;

  case 88:
#line 548 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration\n";	(yyval.tn) = ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node);;}
    break;

  case 89:
#line 554 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"interface_declaration: class_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 90:
#line 556 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"interface_declaration: instance_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 91:
#line 565 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
	Type t=static_cast<Type>((yyvsp[-2].r.type));
	if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) 
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
	param_list.clear();
	cout<<"class_method_declaration: PLUS p_type method_selector SEMI_COMA\n";
	(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), class_method_declaration);
	(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 92:
#line 574 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		yyclearin;Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0)
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");		(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), class_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 93:
#line 583 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		cout<<"class_method_declaration: PLUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);
		;}
    break;

  case 94:
#line 590 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		yyclearin;
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");		(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);;}
    break;

  case 95:
#line 601 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS p_type method_selector	SEMI_COMA\n";	(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 96:
#line 609 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 97:
#line 614 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
												(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 98:
#line 616 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
													(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 99:
#line 621 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[-1].r.type);cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 100:
#line 623 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 101:
#line 625 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 102:
#line 632 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 103:
#line 632 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {i=3;s->currScope=s->currScope->parent;(yyval.r.str)=(yyvsp[-3].r.str);cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
								(yyval.tn) = ast->createNode(0,0, method_selector_Node);			;}
    break;

  case 104:
#line 634 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);cout<<"method_selector:IDENTIFIER \n";
												(yyval.tn) = ast->createNode(0,0, method_selector_Node);		;}
    break;

  case 105:
#line 640 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 106:
#line 642 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 107:
#line 644 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 108:
#line 646 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 109:
#line 648 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"parameter_list: parameter\n";
																			(yyval.tn) =ast->createNode((yyvsp[0].tn),0, paramListNode);;}
    break;

  case 110:
#line 653 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
	add_param((yyvsp[-1].r.type));
	Type t=static_cast<Type>((yyvsp[-1].r.type));
	if(s->insertVariableInCurrentScope((yyvsp[0].r.str),t,1) == 0) 
		cout<<"error redefine variable";
	cout<<"parameter: p_type IDENTIFIER\n";	(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, parameter_Node);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 111:
#line 664 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"statment: try_catch_statment\n";;}
    break;

  case 112:
#line 668 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"statment: catch_statment\n";;}
    break;

  case 113:
#line 669 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"statment: finally_TRY_CATCH\n";;}
    break;

  case 114:
#line 672 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"Exception NullPointerException";;}
    break;

  case 115:
#line 673 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"Exception OutOfBoundryException";;}
    break;

  case 116:
#line 674 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"Exception CastException";;}
    break;

  case 117:
#line 682 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ImpNode);
		(yyval.tn)->currST=s->currScope;
		s->insert_scope1((yyvsp[-1].r.str),s->currScope); s->currScope=s->currScope->parent;
		cout<<"class_implementation: class_implementation_header class_implementation_body\n";;}
    break;

  case 118:
#line 691 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,0,HedrImpNode);
		Interface_name=(yyvsp[-2].r.str);
		i=2;
		(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Implementation_Interface((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->check_Implementation((yyvsp[-2].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redfine Implementation"); 
		else if(s->insertImplementationInCurrentScope((yyvsp[-2].r.str),(yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation Inhertance not found"); 
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";;}
    break;

  case 119:
#line 704 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		i=2;(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Implementation_Interface((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 120:
#line 714 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		i=2;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Implementation_Interface((yyvsp[-1].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[-1].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 121:
#line 722 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,0,HedrImpNode);
		//Interface_name=new char[30];
		//	cout<<$<r.str>2;
		//strcat(Interface_name,$<r.str>2);
		//cout<<Interface_name;
		i=2;(yyval.r.str)=(yyvsp[0].r.str);
		if(s->check_Implementation_Interface((yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER \n";
																;}
    break;

  case 122:
#line 740 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";;}
    break;

  case 123:
#line 741 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BdyImpNode);cout<<"class_implementation_body: instance_variables AT_END\n";;}
    break;

  case 124:
#line 742 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body:	implementation_definition_list	AT_END\n";;}
    break;

  case 125:
#line 749 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,ImpdefNode));i=3;cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";;}
    break;

  case 126:
#line 750 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {								(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ImpdefNode);i=3;cout<<"implementation_definition_list: implementation_definition\n";;}
    break;

  case 127:
#line 754 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: class_implementation_definition	\n";;}
    break;

  case 128:
#line 755 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: instance_implementation_definition \n";;}
    break;

  case 129:
#line 762 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
	(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefNode);i=2;
	cout<<"class_implementation_definition: class_implementation_definition_header block_body";
	
		 ;}
    break;

  case 130:
#line 771 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefHdrNode);cout<<"class_implementation_definition_header: PLUS p_type method_selector\n";
										(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;		  ;}
    break;

  case 131:
#line 773 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[0].tn),ClsImpDefHdrNode);cout<<"class_implementation_definition_header:  PLUS	method_selector\n";
										 ;}
    break;

  case 132:
#line 781 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefNode);i=2;(yyval.r.str)=(yyvsp[-1].r.str);cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";;}
    break;

  case 133:
#line 785 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS p_type	method_selector\n";
											(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 134:
#line 787 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,(yyvsp[0].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS method_selector\n";;}
    break;

  case 135:
#line 794 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,stmtListNode));cout<<"statement_list: statement_list statement\n";;}
    break;

  case 136:
#line 795 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,stmtListNode);cout<<"statement_list: statement\n";;}
    break;

  case 137:
#line 801 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: loop_statement\n";;}
    break;

  case 138:
#line 802 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: conditional_statement\n";;}
    break;

  case 139:
#line 803 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[-1].tn);cout<<"statement: expr\n";;}
    break;

  case 140:
#line 804 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: variable_declaration\n";;}
    break;

  case 141:
#line 805 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Scope *new_scope = new Scope(); new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 142:
#line 805 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {s->currScope=s->currScope->parent;cout<<"statement: block_body\n";;}
    break;

  case 143:
#line 806 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: return_statement\n";;}
    break;

  case 145:
#line 814 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,ReturnNode);cout<<"return_statement: RETURN expr\n";;}
    break;

  case 146:
#line 815 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 147:
#line 818 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: for_loop\n";;}
    break;

  case 148:
#line 819 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: while_loop\n";;}
    break;

  case 149:
#line 820 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: do_while_loop\n";;}
    break;

  case 150:
#line 823 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ForNode);cout<<"for_loop: for_loop_header statement\n";;}
    break;

  case 151:
#line 829 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {	
		(yyval.tn)=ast->createNode((yyvsp[-5].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 152:
#line 836 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 153:
#line 838 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 154:
#line 840 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 155:
#line 842 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 156:
#line 849 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",")");;}
    break;

  case 157:
#line 851 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 158:
#line 853 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 159:
#line 858 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 160:
#line 863 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA CLOSE_P \n";;}
    break;

  case 161:
#line 866 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-3].tn),ast->createNode(0,0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 162:
#line 869 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA CLOSE_P\n";;}
    break;

  case 163:
#line 872 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA SEMI_COMA expr CLOSE_P";;}
    break;

  case 164:
#line 876 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForHdrNode);	
		cout<<"for_loop_hearder: FOR OPEN_P SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 165:
#line 883 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),intType,1) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error","Variable not found");cout<<"for_initializer: INT ID EQUAL expr\n";;}
    break;

  case 166:
#line 884 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 167:
#line 885 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 168:
#line 886 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);cout<<"for_initializer: ID EQUAL expr\n";;}
    break;

  case 169:
#line 887 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 170:
#line 888 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 171:
#line 889 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForIniNode);cout<<"for_initializer: ID\n";;}
    break;

  case 172:
#line 894 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 173:
#line 895 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 174:
#line 896 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 175:
#line 897 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 176:
#line 898 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 177:
#line 899 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 178:
#line 900 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 179:
#line 901 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 180:
#line 902 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 181:
#line 905 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:assign_expr\n";	;}
    break;

  case 182:
#line 906 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 183:
#line 909 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 184:
#line 910 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 185:
#line 911 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 186:
#line 912 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 187:
#line 913 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 188:
#line 914 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 189:
#line 915 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 190:
#line 916 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 191:
#line 917 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 192:
#line 918 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","LOGIC EXPR");;}
    break;

  case 193:
#line 919 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 194:
#line 920 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 195:
#line 925 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 196:
#line 929 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),AsgExpNode);cout<<"assign_expr:long_id EQUAL simple_expr\n";
										;}
    break;

  case 197:
#line 935 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		var.push((yyvsp[0].r.str));				
		(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0,0,longidNode));
		cout<<"long_id: long_id.IDENTIFIER\n";;}
    break;

  case 198:
#line 940 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"long_id: long_id.message_call\n";;}
    break;

  case 199:
#line 941 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,IdentNode);
		if(strcmp(lexer->YYText(),".")==0) 
			var.push((yyvsp[0].r.str));
		if(s->getVariableFromCurrentScope((yyvsp[0].r.str))==0) {
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable Not found ");
		}
		cout<<"long_id:IDENTIFIER\n";;}
    break;

  case 200:
#line 956 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,stringNode);    (yyval.tn)->expectedType=stringtype;
									cout<<"simple_expr:STRING_VAL\n";
									(yyval.tn)->item=(void *)yylval.r.str;;}
    break;

  case 201:
#line 963 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,intNode);	 (yyval.tn)->expectedType=inttype;   (yyval.tn)->item=(void *)yylval.r.i;
								 cout<<" \n\n\n\n\n\n\n\n\n"<<(int)(yyval.tn)->item<<" \n\n\n\n\n\n\n\n\n";
									;}
    break;

  case 202:
#line 971 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,floatNode);cout<<"simple_expr:FLOAT_VAL\n";	(yyval.tn)->expectedType=floattype;
								// $<tn>$->item=(void *)yylval.r.f;
								;}
    break;

  case 203:
#line 975 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,CharNode);cout<<"simple_expr:CHAR_VAL\n";	(yyval.tn)->expectedType=chartype;
								 (yyval.tn)->item=(void *)yylval.r.c;;}
    break;

  case 204:
#line 978 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		char *type;
		bool ok1=true;
		if(s->getVariableNameFromInterface("I","l")=="##")
			ok1=false;
		else{
			type=s->getVariableNameFromInterface("I","l");
			cout<<"ok";
		}
		while((!var.empty())&&(ok1)){
			var.pop();
			cout<<type;
			if(var.empty())
				ok1=false;
			else if(s->getVariableNameFromInterface(type,var.front())=="##")
			{
				cout<<"error datamember not found";
				ok1=false;
			}
			else if(s->getVariableNameFromInterface(type,var.front())=="#$"){
				cout<<"error Interface not found";
				ok1=false;
			}
			else if(s->getVariableSpecFromInterface(type,var.front())!=3){
				cout<<"error not public";
				ok1=false;
			}
			else{
					type=s->getVariableNameFromInterface(type,var.front());
			}
	}
	cout<<"simple_expr:long_id\n";;}
    break;

  case 205:
#line 1011 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpPlusNode);cout<<"simple_expr:expr PLUS expr\n";
											;}
    break;

  case 206:
#line 1013 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMinusNode);cout<<"simple_expr:expr MINUS expr\n";;}
    break;

  case 207:
#line 1014 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMultiNode);cout<<"simple_expr:expr MULTI expr\n";;}
    break;

  case 208:
#line 1015 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpDivNode);cout<<"simple_expr:expr DIV expr\n";;}
    break;

  case 209:
#line 1016 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,SmpExpNode);cout<<"simple_expr:OPEN_P expr CLOSE_P\n";;}
    break;

  case 210:
#line 1017 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"expr:p_type expr\n";;}
    break;

  case 211:
#line 1022 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BlockNode); cout<<"block_body:OPEN_S statement_list	CLOSE_S\n";;}
    break;

  case 212:
#line 1023 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,BlockNode);cout<<"block_body:OPEN_S CLOSE_S\n";;}
    break;

  case 213:
#line 1028 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),WhileNode);cout<<"while_loop:while_loop_header statement\n";;}
    break;

  case 214:
#line 1031 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,WleHdrNode);cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 215:
#line 1032 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 216:
#line 1033 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 217:
#line 1034 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 218:
#line 1037 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),DoWhlNode);cout<<"do_while_loop_header: DO statement while_loop_header SEMI_COMA\n";;}
    break;

  case 219:
#line 1039 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),CondtiNode);cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 220:
#line 1040 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),CondtiNode);
		cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 221:
#line 1043 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,CondtiNode);cout<<"conditional_statement: switch\n";;}
    break;

  case 222:
#line 1046 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),(yyvsp[-1].tn),SwitchNode);cout<<"switch statment";;}
    break;

  case 223:
#line 1047 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 224:
#line 1048 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 225:
#line 1049 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");;}
    break;

  case 226:
#line 1050 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","{");;}
    break;

  case 227:
#line 1059 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
									(yyval.tn)=ast->createNode((yyvsp[-6].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[0].tn),SwtBdyNode),SwtBdyNode);
										
												cout<<"case statment";;}
    break;

  case 228:
#line 1063 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 229:
#line 1064 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-2].tn),SwtBdyNode);cout<<"default statment";;}
    break;

  case 230:
#line 1065 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 231:
#line 1070 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 232:
#line 1071 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 233:
#line 1075 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 234:
#line 1076 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 235:
#line 1079 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,IfHdrNode);cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 236:
#line 1080 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 237:
#line 1081 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 238:
#line 1082 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 239:
#line 1085 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),MsgCalNode);cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";;}
    break;

  case 240:
#line 1088 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,SndrNode);cout<<"sender: message_call\n";;}
    break;

  case 241:
#line 1089 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"sender: IDENTIFIER\n";;}
    break;

  case 242:
#line 1092 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {cout<<"message: IDENTIFIER\n";;}
    break;

  case 243:
#line 1093 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,MsgNode);cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";;}
    break;

  case 244:
#line 1096 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,argListNode));cout<<"argument_list: argument_list argument\n";;}
    break;

  case 245:
#line 1097 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argListNode);cout<<"argument_list: argument\n";;}
    break;

  case 246:
#line 1100 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: SEMI_COLUMN simple_expr\n";;}
    break;

  case 247:
#line 1101 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 248:
#line 1102 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: IDENTIFIER SEMI_COLUMN simple_expr\n";;}
    break;

  case 249:
#line 1103 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 250:
#line 1104 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 251:
#line 1106 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
	(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ProtclNode);
	s->insert_scope1((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
	cout<<"protocol: protocol_header protocol_body\n";;}
    break;

  case 252:
#line 1112 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode(0,0,ProtclHdrNode);
		(yyval.r.str)=(yyvsp[0].r.str);
		if(s->check_Interface((yyvsp[0].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","there is inteface in the same name");
		if( s->insertProtocolInCurrentScope((yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Protocol");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
		cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";;}
    break;

  case 253:
#line 1124 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list interface_declaration_list AT_END\n";;}
    break;

  case 254:
#line 1126 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: interface_declaration_list AT_END\n";;}
    break;

  case 255:
#line 1129 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list AT_END \n";;}
    break;

  case 256:
#line 1132 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode(0,0,ProtclBdyNode);
		cout<<"protocol_body:	AT_END\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3521 "yacc.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
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
	  yydestruct ("Error: discarding", yytoken, &yylval);
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
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1135 "C:\\Users\\Hasan\\Documents\\GitHub\\compiler\\comp\\yacc.y"

void yyerror(char *s) {
	;
}

int yylex(){
	return lexer->yylex();

}
void main(void){
	Parser* p = new Parser();			
	p->parse();
	Er->printErrQueue();	
	system("pause");
}

