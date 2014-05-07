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
#line 2 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"

	#include <fstream>
	#include <iostream>  // not really needed since fstream includes it
	#include <stdlib.h>  
	#include <FlexLexer.h>
	#include "comp\hash_tabel.h"
	#include "comp\Symbol_Table.h"
	#include "comp\Interface.h"
	#include "comp\Method.h"
	#include "comp\Variable.h"
	#include "comp\Code_Generation.h"
	#include "comp\Scope.h"
	#include "comp\Defs.h"
	#include "comp\ErrorRecovery.h"
	#include "comp\AST.h"
	#include <vector>
	#include <queue>
	using namespace std;
	//global offset 
 	
	ErrorRecovery *Er=new ErrorRecovery();
	void yyerror(char *,char *);
	vector<string> param_list;
	vector<char*> param_list1;
	Symbol_Table *s=new Symbol_Table();
	char *Inhert;
	int i;
	int temp22=0;
	int datamember_offset;
 	int function_offset;

	queue<char*> var;
	void insert_param()
	{
		int c=0;
		while(c<param_list1.size())
		{
			s->insertVariableInCurrentScope(param_list1[c],intType,3);
			c=c+1;
		}
	}
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
#line 153 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
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
#line 314 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 326 "yacc.cpp"

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
#define YYLAST   1003

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  85
/* YYNRULES -- Number of rules. */
#define YYNRULES  264
/* YYNRULES -- Number of states. */
#define YYNSTATES  557

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
     418,   422,   426,   427,   432,   433,   434,   441,   443,   447,
     452,   457,   461,   463,   466,   470,   478,   481,   483,   485,
     487,   490,   495,   500,   504,   507,   511,   514,   517,   520,
     522,   524,   526,   529,   533,   534,   541,   544,   547,   551,
     552,   559,   562,   565,   567,   569,   571,   574,   576,   577,
     580,   582,   584,   588,   592,   594,   596,   598,   601,   610,
     619,   627,   636,   644,   652,   659,   667,   675,   683,   690,
     697,   704,   710,   715,   719,   724,   728,   731,   735,   737,
     741,   745,   749,   753,   757,   760,   764,   768,   772,   774,
     776,   780,   784,   788,   792,   796,   799,   803,   807,   811,
     814,   818,   822,   824,   828,   832,   834,   836,   838,   840,
     841,   845,   847,   849,   853,   857,   861,   865,   869,   872,
     876,   879,   882,   887,   892,   896,   901,   906,   909,   914,
     916,   924,   932,   940,   948,   956,   966,   976,   982,   988,
     990,   992,   994,   996,  1001,  1006,  1010,  1015,  1020,  1022,
    1024,  1026,  1030,  1033,  1035,  1038,  1041,  1045,  1048,  1052,
    1055,  1058,  1062,  1065,  1068
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      73,     0,    -1,    74,    -1,    74,    75,    -1,    75,    -1,
      76,    -1,   112,    -1,   154,    -1,    77,    78,    -1,    10,
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
       1,    -1,    95,    11,    47,   137,    17,    -1,    95,    11,
      47,   137,     1,    -1,    28,    95,    11,    17,    -1,    28,
      95,    11,     1,    -1,    28,    95,    11,    47,   137,    17,
      -1,    28,    95,    11,    47,   137,     1,    -1,    87,    -1,
      88,    -1,    90,    -1,    92,    -1,    66,    22,    80,    23,
      11,    17,    -1,    65,    66,    22,    80,    23,    11,    17,
      -1,    64,    11,    22,    89,    23,    17,    -1,    64,    11,
      22,    89,    23,    80,    17,    -1,    95,    11,    17,    -1,
      89,    95,    11,    17,    -1,    95,    11,    12,   137,    17,
      -1,    89,    95,    11,    12,   137,    17,    -1,    89,    28,
      95,    11,    17,    -1,    28,    95,    11,    17,    -1,    89,
      28,    95,    11,    12,   137,    17,    -1,    28,    95,    11,
      12,   137,    17,    -1,    95,    11,    51,    41,    52,    47,
      22,    23,    17,    -1,    95,    11,    51,    41,    52,    17,
      -1,    95,    11,    51,    41,    52,    47,    22,    91,    23,
      17,    -1,    95,    11,    51,    52,    47,    22,    91,    23,
      17,    -1,    91,    24,   132,    -1,   132,    -1,    91,    24,
      51,    41,    52,    47,   132,    -1,    51,    41,    52,    47,
     132,    -1,    95,    11,    93,    47,    22,    23,    17,    -1,
      95,    11,    93,    17,    -1,    95,    11,    93,    47,    22,
      94,    23,    17,    -1,    51,    41,    52,    51,    41,    52,
      -1,    93,    51,    41,    52,    -1,    22,    91,    23,    -1,
     132,    -1,    94,    24,    22,    91,    23,    -1,    94,    24,
     132,    -1,    96,    -1,    97,    -1,    16,    -1,    15,    -1,
      14,    -1,    13,    -1,    29,    -1,    11,    43,    -1,    98,
      99,    -1,    99,    -1,   100,    -1,   101,    -1,    30,   102,
     103,    17,    -1,    30,   102,   103,     1,    -1,    30,   103,
      17,    -1,    30,   103,     1,    -1,    31,   102,   103,    17,
      -1,    31,   103,    17,    -1,    31,   102,   103,     1,    -1,
      31,   103,     1,    -1,    32,    95,    33,    -1,     1,    95,
      33,    -1,    32,    95,     1,    -1,    -1,    11,    12,   104,
     107,    -1,    -1,    -1,    11,   105,    11,    12,   106,   107,
      -1,    11,    -1,   107,    12,   108,    -1,   107,    11,    12,
     108,    -1,   107,    11,     1,   108,    -1,   107,    11,   108,
      -1,   108,    -1,   102,    11,    -1,     3,   139,   110,    -1,
       4,    32,     5,   111,    33,   139,   110,    -1,     9,   139,
      -1,     6,    -1,     7,    -1,     8,    -1,   113,   114,    -1,
      34,    11,    12,    11,    -1,    34,    11,     1,    11,    -1,
      34,    11,    11,    -1,    34,    11,    -1,    81,   115,    27,
      -1,    81,    27,    -1,   115,    27,    -1,   115,   116,    -1,
     116,    -1,   117,    -1,   120,    -1,   118,   139,    -1,    30,
     102,   103,    -1,    -1,    30,   103,   119,    30,   102,   103,
      -1,    30,   103,    -1,   121,   139,    -1,    31,   102,   103,
      -1,    -1,    31,   103,   122,    31,   102,   103,    -1,    31,
     103,    -1,   123,   124,    -1,   124,    -1,   127,    -1,   143,
      -1,   132,    17,    -1,    86,    -1,    -1,   125,   139,    -1,
     126,    -1,   109,    -1,    55,   132,    17,    -1,    55,   132,
       1,    -1,   128,    -1,   140,    -1,   142,    -1,   129,   124,
      -1,    46,    32,   130,    17,   131,    17,   132,    33,    -1,
      46,    32,   130,    17,   131,    17,   132,     1,    -1,    46,
     130,    17,   131,    17,   132,    33,    -1,    46,     1,   130,
      17,   131,    17,   132,    33,    -1,    46,    32,    17,   131,
      17,   132,    33,    -1,    46,    32,    17,   131,    17,   132,
       1,    -1,    46,    17,   131,    17,   132,    33,    -1,    46,
       1,    17,   131,    17,   132,    33,    -1,    46,    32,   130,
      17,    17,   132,    33,    -1,    46,    32,   130,    17,   131,
      17,    33,    -1,    46,    32,   130,    17,    17,    33,    -1,
      46,    32,    17,   131,    17,    33,    -1,    46,    32,    17,
      17,   132,    33,    -1,    46,    32,    17,    17,    33,    -1,
      16,    11,    47,   132,    -1,    16,    11,   132,    -1,    16,
      11,     1,   132,    -1,    11,    47,   132,    -1,    11,   132,
      -1,    11,     1,   132,    -1,    11,    -1,   132,    25,   132,
      -1,   132,    26,   132,    -1,   132,    39,   132,    -1,   132,
      42,   132,    -1,   132,    44,   132,    -1,    45,   132,    -1,
      32,   131,    33,    -1,   131,    35,   131,    -1,   131,    36,
     131,    -1,   135,    -1,   137,    -1,   134,    25,   134,    -1,
     134,    26,   134,    -1,   134,    39,   134,    -1,   134,    42,
     134,    -1,   134,    44,   134,    -1,    45,   134,    -1,    32,
     133,    33,    -1,   133,    35,   133,    -1,   133,    36,   133,
      -1,     1,   134,    -1,    32,   133,     1,    -1,     1,   133,
      33,    -1,   137,    -1,   136,    47,   137,    -1,   136,    58,
      11,    -1,   149,    -1,    11,    -1,    37,    -1,    41,    -1,
      -1,    38,   138,    37,    -1,    40,    -1,   136,    -1,   137,
      30,   137,    -1,   137,    31,   137,    -1,   137,    43,   137,
      -1,   137,    48,   137,    -1,    32,   137,    33,    -1,   102,
     137,    -1,    22,   123,    23,    -1,    22,    23,    -1,   141,
     124,    -1,    49,    32,   131,    33,    -1,    49,    32,   131,
       1,    -1,    49,   131,    33,    -1,    49,     1,   131,    33,
      -1,    57,   124,   141,    17,    -1,   148,   124,    -1,   148,
     124,    68,   124,    -1,   144,    -1,    60,    32,   146,    33,
      22,   145,    23,    -1,    60,     1,   146,    33,    22,   145,
      23,    -1,    60,    32,   146,     1,    22,   145,    23,    -1,
      60,    32,   146,    33,    22,   145,     1,    -1,    60,    32,
     146,    33,     1,   145,    23,    -1,    63,    32,   147,    33,
      12,   124,    61,    17,   145,    -1,    63,    32,   147,    33,
      12,   124,     1,    17,   145,    -1,    62,    12,   124,    61,
      17,    -1,    62,    12,   124,     1,    17,    -1,   131,    -1,
     132,    -1,   133,    -1,   134,    -1,    50,    32,   131,    33,
      -1,    50,    32,   131,     1,    -1,    50,   131,    33,    -1,
      50,     1,   131,    33,    -1,    51,   150,   151,    52,    -1,
     149,    -1,    11,    -1,    11,    -1,    11,    12,   152,    -1,
     152,   153,    -1,   153,    -1,    12,   137,    -1,     1,   137,
      -1,    11,    12,   137,    -1,    11,   137,    -1,    11,     1,
     137,    -1,   155,   156,    -1,    56,    11,    -1,    79,    98,
      27,    -1,    98,    27,    -1,    79,    27,    -1,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   172,   172,   177,   178,   181,   182,   183,   189,   199,
     217,   226,   235,   241,   255,   260,   264,   269,   273,   277,
     281,   285,   292,   301,   302,   303,   309,   311,   313,   320,
     322,   324,   331,   339,   343,   352,   354,   357,   365,   399,
     403,   426,   431,   449,   453,   460,   464,   465,   466,   467,
     472,   473,   477,   478,   483,   484,   485,   486,   487,   488,
     489,   490,   498,   499,   500,   501,   508,   509,   510,   511,
     519,   520,   521,   527,   528,   535,   537,   539,   541,   546,
     548,   554,   556,   558,   560,   562,   569,   580,   582,   588,
     590,   596,   605,   614,   621,   632,   640,   645,   647,   652,
     654,   656,   664,   664,   666,   669,   666,   671,   680,   682,
     684,   686,   688,   693,   709,   713,   714,   717,   718,   719,
     727,   736,   749,   759,   767,   785,   787,   788,   797,   798,
     802,   803,   810,   824,   826,   826,   835,   842,   846,   848,
     848,   856,   863,   864,   870,   871,   872,   873,   874,   874,
     875,   876,   883,   884,   887,   888,   889,   892,   898,   904,
     906,   908,   911,   917,   919,   921,   926,   931,   934,   937,
     940,   944,   952,   953,   954,   955,   956,   957,   958,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   974,   975,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   994,   998,  1004,  1009,  1010,  1025,  1032,  1040,
    1040,  1048,  1051,  1086,  1088,  1089,  1090,  1092,  1093,  1098,
    1099,  1104,  1107,  1108,  1109,  1110,  1113,  1115,  1116,  1119,
    1122,  1123,  1124,  1125,  1126,  1135,  1139,  1140,  1141,  1146,
    1147,  1151,  1152,  1155,  1156,  1157,  1158,  1161,  1164,  1165,
    1168,  1169,  1172,  1173,  1176,  1177,  1178,  1179,  1180,  1182,
    1188,  1199,  1202,  1205,  1208
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
  "instance_method_declaration", "p_type", "method_selector", "@1", "@2",
  "@3", "parameter_list", "parameter", "try_catch", "catch_statment",
  "Exception_type", "class_implementation", "class_implementation_header",
  "class_implementation_body", "implementation_definition_list",
  "implementation_definition", "class_implementation_definition",
  "class_implementation_definition_header", "@4",
  "instance_implementation_definition",
  "instance_implementation_definition_header", "@5", "statement_list",
  "statement", "@6", "return_statement", "loop_statement", "for_loop",
  "for_loop_header", "for_initializer", "logic_expr", "expr",
  "logic_expr2", "expr2", "assign_expr", "long_id", "simple_expr", "@7",
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
     102,   102,   104,   103,   105,   106,   103,   103,   107,   107,
     107,   107,   107,   108,   109,   110,   110,   111,   111,   111,
     112,   113,   113,   113,   113,   114,   114,   114,   115,   115,
     116,   116,   117,   118,   119,   118,   118,   120,   121,   122,
     121,   121,   123,   123,   124,   124,   124,   124,   125,   124,
     124,   124,   126,   126,   127,   127,   127,   128,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   130,   130,   130,   130,   130,   130,   130,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   134,   135,   136,   136,   136,   137,   137,   138,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   139,
     139,   140,   141,   141,   141,   141,   142,   143,   143,   143,
     144,   144,   144,   144,   144,   145,   145,   145,   145,   146,
     146,   147,   147,   148,   148,   148,   148,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   153,   153,   153,   154,
     155,   156,   156,   156,   156
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
       3,     3,     0,     4,     0,     0,     6,     1,     3,     4,
       4,     3,     1,     2,     3,     7,     2,     1,     1,     1,
       2,     4,     4,     3,     2,     3,     2,     2,     2,     1,
       1,     1,     2,     3,     0,     6,     2,     2,     3,     0,
       6,     2,     2,     1,     1,     1,     2,     1,     0,     2,
       1,     1,     3,     3,     1,     1,     1,     2,     8,     8,
       7,     8,     7,     7,     6,     7,     7,     7,     6,     6,
       6,     5,     4,     3,     4,     3,     2,     3,     1,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     1,     1,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     2,
       3,     3,     1,     3,     3,     1,     1,     1,     1,     0,
       3,     1,     1,     3,     3,     3,     3,     3,     2,     3,
       2,     2,     4,     4,     3,     4,     4,     2,     4,     1,
       7,     7,     7,     7,     7,     9,     9,     5,     5,     1,
       1,     1,     1,     4,     4,     3,     4,     4,     1,     1,
       1,     3,     2,     1,     2,     2,     3,     2,     3,     2,
       2,     3,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,     2,     4,     5,     0,     6,
       0,     7,     0,     0,     0,   260,     1,     3,     0,     0,
      21,     0,     0,     8,     0,     0,     0,    88,    89,    90,
       0,     0,     0,   120,     0,   129,   130,     0,   131,     0,
     264,     0,     0,   259,     0,    12,    11,     0,   123,     0,
       0,    84,    83,    82,    81,    37,    36,    35,     0,    85,
       0,     0,     0,     0,    30,    31,     0,    34,    46,    47,
      48,    49,     0,    79,    80,    23,     0,     0,   107,     0,
       0,     0,     0,     0,    18,     0,     0,    19,     0,    20,
      87,     0,   134,     0,   139,   126,     0,   127,   128,     0,
     132,   137,   263,     0,   262,    10,     9,   122,   121,    86,
       0,     0,     0,     0,    27,    26,    29,    33,    32,     0,
       0,     0,    22,     0,   102,     0,     0,     0,    94,    93,
       0,    98,    96,    15,     0,    16,    17,   133,     0,   138,
       0,   125,     0,   206,   220,     0,   207,   209,   211,   208,
       0,     0,     0,     0,     0,     0,     0,   147,     0,   151,
       0,   143,     0,   150,   144,   154,     0,     0,   188,   212,
     189,   155,     0,   156,   145,   229,     0,   205,   261,     0,
       0,     0,     0,    39,    38,     0,     0,     0,    24,    25,
     100,     0,     0,   101,    99,    92,    91,    97,    95,    14,
       0,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   206,     0,     0,     0,     0,     0,     0,
       0,   249,   248,     0,     0,     0,     0,     0,   218,   219,
     142,   149,   157,   146,     0,     0,     0,     0,     0,     0,
     221,   227,    43,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,   103,   112,   105,
       0,     0,     0,     0,   114,   217,   210,     0,     0,     0,
       0,   176,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   184,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,   250,     0,   153,   152,     0,   239,   240,
       0,     0,   203,   204,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    40,     0,
       0,     0,     0,   113,     0,     0,     0,   135,   140,     0,
     116,     0,     0,   177,   175,     0,     0,   173,     0,     0,
       0,     0,     0,     0,   225,   223,   222,   186,   187,   179,
     180,   181,   182,   183,   246,   244,   243,     0,   247,   226,
       0,     0,     0,   228,    45,    44,     0,    52,     0,     0,
       0,     0,    54,     0,    50,    63,     0,     0,     0,     0,
       0,     0,    76,    74,     0,     0,   111,   108,   106,     0,
       0,     0,   174,   172,   185,     0,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   253,     0,     0,     0,
       0,     0,    59,    53,     0,     0,    55,     0,    51,     0,
       0,     0,     0,    67,     0,    70,     0,     0,   110,   109,
     117,   118,   119,     0,     0,     0,   164,   170,   169,     0,
     168,     0,     0,     0,   255,     0,     0,   257,   254,   252,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
      56,     0,     0,    73,     0,     0,     0,    75,    72,     0,
      78,     0,   165,     0,   163,   162,   166,   167,     0,   160,
     258,   256,     0,     0,   231,   232,   234,   233,   230,    61,
       0,    57,    62,     0,     0,    65,     0,    66,     0,     0,
     161,   159,   158,     0,     0,     0,     0,   241,   242,   202,
       0,    60,    64,     0,     0,    77,   115,     0,     0,     0,
     199,     0,     0,   202,   195,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,   238,   237,   201,   200,   196,
     197,   198,   190,   191,   192,   193,   194,     0,     0,     0,
      68,     0,     0,     0,     0,   236,   235
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    23,    24,    76,    25,
      63,    64,    65,    66,   157,    68,    69,   246,    70,   422,
      71,   187,   381,    72,    73,    74,    26,    27,    28,    29,
     158,    81,   191,   125,   326,   257,   258,   159,   264,   433,
       9,    10,    33,    34,    35,    36,    37,   138,    38,    39,
     140,   160,   161,   162,   163,   164,   165,   166,   211,   298,
     217,   507,   522,   168,   169,   170,   205,   100,   171,   172,
     173,   174,   175,   452,   300,   510,   176,   177,   223,   294,
     405,   406,    11,    12,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -402
static const short int yypact[] =
{
      14,     5,    41,    58,    45,    14,  -402,  -402,   528,  -402,
     190,  -402,   619,   915,   534,  -402,  -402,  -402,   249,    76,
    -402,    39,    39,  -402,   559,   581,   643,  -402,  -402,  -402,
      39,    39,   730,  -402,   744,  -402,  -402,    90,  -402,    90,
    -402,   832,   860,  -402,   103,  -402,   118,   148,  -402,   173,
     151,  -402,  -402,  -402,  -402,  -402,  -402,  -402,   942,  -402,
     200,   164,   196,   898,  -402,   331,   331,  -402,  -402,  -402,
    -402,  -402,   284,  -402,  -402,  -402,   250,   942,   145,   942,
     290,    34,   290,    42,  -402,   908,   932,  -402,   939,  -402,
    -402,   290,   220,   290,   282,  -402,   945,  -402,  -402,   442,
    -402,  -402,  -402,   947,  -402,  -402,  -402,  -402,  -402,  -402,
     306,   301,   303,    76,  -402,  -402,  -402,  -402,   331,    21,
     322,   328,  -402,   316,  -402,   378,    63,   184,  -402,  -402,
     231,  -402,  -402,  -402,   952,  -402,  -402,  -402,   390,  -402,
     391,  -402,    90,   151,  -402,   646,  -402,  -402,  -402,  -402,
     340,   165,   684,    54,   841,   569,   182,  -402,   841,  -402,
     511,  -402,    90,  -402,  -402,  -402,   569,   409,  -402,   192,
     499,  -402,   569,  -402,  -402,  -402,   569,  -402,  -402,    93,
     936,    76,   108,  -402,  -402,   841,   234,   104,  -402,  -402,
    -402,   199,   417,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
     199,   199,   369,   379,   480,   415,   318,   206,   443,   700,
     358,   450,   339,  -402,   339,   841,   618,   459,   339,   339,
     878,  -402,  -402,   458,   244,   426,   700,   700,   499,  -402,
    -402,  -402,  -402,  -402,   841,   467,   841,   841,   841,   841,
    -402,   473,  -402,  -402,   841,   942,   820,   533,   270,   543,
     429,   515,   522,  -402,   552,   563,   585,   388,  -402,  -402,
     290,   290,   573,    90,  -402,  -402,  -402,   700,   597,   646,
     841,  -402,   712,   339,    27,   271,   599,   700,   951,   144,
     480,  -402,  -402,   700,   700,   841,   841,   841,   841,   841,
     955,   160,  -402,   611,   576,  -402,  -402,   608,   454,   459,
     603,   129,   499,  -402,   211,   211,  -402,  -402,   569,   651,
     621,    43,   942,   627,   449,   634,   639,  -402,  -402,   127,
     650,   668,   613,  -402,   110,   199,   199,  -402,  -402,   671,
    -402,   346,   700,  -402,  -402,   646,   841,  -402,   959,   841,
     562,   404,   387,   406,  -402,  -402,   963,   496,   496,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,   963,   320,  -402,  -402,
     658,   666,   146,  -402,  -402,  -402,   464,  -402,   232,   685,
     488,   841,  -402,   681,  -402,  -402,   682,   673,   857,   857,
     690,   555,  -402,  -402,   402,   199,  -402,  -402,   388,   530,
     841,   427,  -402,  -402,  -402,   677,  -402,   679,   732,   747,
     451,   841,   841,   765,   841,    46,  -402,   525,   525,   525,
     525,   841,  -402,  -402,   492,   841,  -402,   600,  -402,   781,
     676,    72,   598,  -402,   669,  -402,   713,   788,  -402,  -402,
    -402,  -402,  -402,   706,   709,   841,  -402,  -402,  -402,   136,
    -402,   721,   813,   722,   499,   646,   841,   499,   499,  -402,
     750,   724,   745,   755,   763,   212,   672,   841,  -402,   764,
    -402,   773,   703,  -402,   715,   774,   864,  -402,  -402,   857,
    -402,    90,  -402,   760,  -402,  -402,  -402,  -402,   166,  -402,
     499,   499,   569,   829,  -402,  -402,  -402,  -402,  -402,  -402,
     893,  -402,  -402,   779,   753,  -402,    95,  -402,   723,   369,
    -402,  -402,  -402,    18,   626,   626,   841,   557,   692,   499,
     768,  -402,  -402,   841,   756,  -402,  -402,   792,   794,   967,
     692,   254,   692,   480,  -402,   829,   829,   841,   841,   841,
     841,   841,   803,  -402,   770,  -402,  -402,  -402,  -402,  -402,
     496,   496,  -402,  -402,  -402,  -402,  -402,   569,   841,    28,
    -402,   806,   810,   525,   525,  -402,  -402
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -402,  -402,  -402,   833,  -402,  -402,  -402,   825,  -107,   300,
    -402,   778,   789,  -402,    16,  -402,  -402,  -402,  -402,  -366,
    -402,  -402,  -402,   -54,  -402,  -402,     8,     4,  -402,  -402,
     -19,     6,  -402,  -402,  -402,   518,  -283,  -402,   348,  -402,
    -402,  -402,  -402,   824,   -20,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -145,  -402,  -402,  -402,  -402,  -402,   152,  -134,
     -99,  -207,   403,  -402,   -10,  -119,  -402,   -38,  -402,   632,
    -402,  -402,  -402,  -401,   633,  -402,  -402,  -148,  -402,  -402,
    -402,   466,  -402,  -402,  -402
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -252
static const short int yytable[] =
{
     167,   101,    80,    82,   110,   222,   182,   453,   454,   455,
     225,    91,    93,   424,    98,   230,    13,   216,   220,   517,
      42,   232,   183,   123,     1,   126,   204,   240,    83,   551,
      90,   241,    86,    88,    67,   128,    92,    94,   184,   228,
      77,   386,   387,   131,   339,    16,    90,   402,     2,   103,
      78,   129,    14,   462,    75,   224,   167,   403,   404,   132,
     367,   167,   283,   284,   193,   221,   250,   167,   185,    15,
       3,    79,   186,   167,   248,   274,    98,   167,   278,   518,
     279,   117,    67,   221,   290,   291,   127,    75,   130,   552,
      90,   126,    90,   134,   242,   280,   194,   137,  -251,   139,
     280,   428,   429,   498,   202,   153,   221,    90,   271,   120,
     243,   384,    99,   464,   105,   302,   281,   304,   305,   306,
     307,   253,   385,   153,   231,   309,   247,   299,   299,   106,
     361,   249,   121,   331,   117,   203,   514,   474,    90,   338,
     244,   341,    79,   343,   375,   345,   153,   409,   203,   347,
     348,   254,   555,   556,   280,   255,  -104,   124,   123,   107,
     126,   355,   362,   363,   123,   126,   212,   501,   410,   475,
     333,   334,   256,   337,   376,   203,   213,   346,   377,   283,
     284,   260,   261,   226,   108,   195,   349,   350,   351,   352,
     353,   310,   313,   356,   109,   283,   284,   214,   391,   502,
      77,   196,   146,   147,   368,   148,   149,   269,   400,   167,
     215,   111,    18,   487,   227,   123,   153,   213,   113,   126,
      30,    31,   382,  -178,   203,   330,   203,   203,   203,   203,
     112,    79,   197,   120,   203,   488,   392,   393,   145,   234,
     395,   397,  -136,   146,   147,   295,   148,   149,   198,   413,
     235,   120,   417,   270,   238,   538,   121,   153,   369,   239,
      50,   296,    51,    52,    53,    54,   327,   328,    55,    56,
      57,   120,    77,   222,   121,   251,   122,    58,    59,   423,
     423,   123,   213,   444,   447,   448,   252,   539,   340,   525,
     526,   434,   456,   315,   121,   119,   459,   519,   521,   439,
     441,    78,   443,   273,  -141,   256,   256,   256,   146,   147,
      32,   148,   149,    60,    61,    62,   215,   179,   540,   541,
     423,   402,   153,   180,    85,   181,   480,   481,   470,   207,
     123,   403,   404,   188,   208,   267,   473,   503,   490,   189,
      77,   206,    50,   478,    51,    52,    53,    54,   222,   190,
     143,   207,    51,    52,    53,    54,   208,   209,   268,    58,
      59,   203,   276,   390,   509,   256,   256,   497,    59,   207,
     423,   273,   210,   262,   208,   275,   146,   147,   263,   148,
     149,   283,   284,   167,   215,   509,   523,   509,    77,   192,
     153,   123,   203,   203,   203,    60,    61,    62,   213,   324,
     325,   203,   549,    77,   399,   203,   509,   509,   509,   509,
     509,   509,   509,    50,   533,    51,    52,    53,    54,   273,
     200,   398,   201,   401,   146,   147,   233,   148,   149,   259,
     317,    59,   215,   499,    79,   203,   203,   235,   153,   283,
     284,   283,   284,    77,   435,   142,   318,   203,   167,   550,
     123,   126,   266,   143,   272,    51,    52,    53,    54,   236,
     237,   371,   283,   284,  -148,   144,   372,   277,   442,   293,
      58,    59,   238,   203,   145,   151,   411,   239,   303,   146,
     147,   412,   148,   149,   285,   286,   283,   284,   150,   283,
     284,   151,   152,   153,   203,   203,   203,   154,   287,   155,
     415,   288,   156,   289,   457,   416,    60,    61,    62,   458,
     236,   237,    77,   265,   142,   203,   203,   203,   203,   203,
     203,   203,   143,   238,    51,    52,    53,    54,   239,   236,
     237,  -252,  -252,  -148,   229,    47,   430,   431,   432,    58,
      59,   308,   238,   145,   314,    48,    49,   239,   146,   147,
      18,   148,   149,    19,   316,    20,  -124,   150,    21,    22,
     151,   152,   153,    77,  -124,  -124,   154,   319,   155,   320,
      77,   156,   142,   213,   321,    60,    61,    62,   426,   427,
     143,    18,    51,    52,    53,    54,    84,   450,   451,    21,
      22,  -148,   525,   526,   145,   396,   323,    58,    59,   146,
     147,   145,   148,   149,   322,   329,   146,   147,    87,   148,
     149,    21,    22,   153,   332,   150,   342,   460,   151,   152,
     153,   465,   466,   357,   154,   359,   155,   504,   358,   156,
     236,   237,   366,    60,    61,    62,   360,   143,   370,    51,
      52,    53,    54,   238,    19,   373,    40,    77,   239,    21,
      22,   282,   364,   283,   284,    59,   374,   143,   505,    51,
      52,    53,    54,   146,   147,   383,   148,   149,   365,    77,
      89,   506,   378,    21,    22,    59,   389,   153,   145,   213,
     407,   236,   237,   146,   147,   218,   148,   149,   408,   489,
     379,   380,   467,   466,   238,   213,   414,   153,   418,   239,
     145,    77,   236,   237,   419,   146,   147,   425,   148,   149,
     436,   213,   437,   335,   420,   238,   219,   527,   528,   153,
     239,   146,   147,   213,   148,   149,   493,   466,   463,   215,
     468,   529,   273,    77,   530,   153,   531,   146,   147,   471,
     148,   149,   472,   213,   145,   215,   515,   466,    77,   146,
     147,   153,   148,   149,   476,   479,   483,    95,   213,   336,
      30,    31,   482,   153,   145,   438,   445,   494,   484,   146,
     147,    97,   148,   149,    30,    31,   213,   446,   485,   145,
     440,   491,    77,   153,   146,   147,   486,   148,   149,    77,
     492,   495,   213,   500,   236,   237,   512,   145,   153,   213,
     513,   532,   146,   147,   461,   148,   149,   238,   534,   535,
     469,   536,   239,   145,    77,   547,   153,   548,   146,   147,
     145,   148,   149,   553,   213,   146,   147,   554,   148,   149,
     504,    50,   421,    51,    52,    53,    54,    41,    17,   153,
     213,   116,    77,   311,   388,   145,   477,   516,   312,    59,
     146,   147,   213,   148,   149,   118,    96,   297,    77,   102,
     301,   505,    21,    22,   153,    77,   146,   147,   213,   148,
     149,   449,     0,   145,   506,   213,     0,     0,   146,   147,
     153,   148,   149,     0,     0,     0,   508,   104,     0,   145,
      21,    22,   153,     0,   146,   147,   145,   148,   149,   114,
       0,   146,   147,     0,   148,   149,     0,   520,   421,   524,
     511,   292,     0,   283,   284,   496,    44,    55,    56,    57,
       0,   115,     0,   236,   237,   -28,    45,    46,   -28,   -28,
     542,   543,   544,   545,   546,   133,   238,   -13,    21,    22,
     -13,   239,   -13,     0,     0,   -13,   -13,    50,     0,    51,
      52,    53,    54,    50,     0,    51,    52,    53,    54,   135,
       0,     0,    21,    22,   245,    59,   136,     0,     0,    21,
      22,    59,   141,     0,   178,    30,    31,    21,    22,   199,
       0,     0,    21,    22,   344,     0,   283,   284,   354,     0,
     283,   284,   394,     0,   283,   284,  -185,     0,  -185,  -185,
     537,     0,   525,   526
};

static const short int yycheck[] =
{
      99,    39,    21,    22,    58,   153,   113,   408,   409,   410,
     155,    30,    31,   379,    34,   160,    11,   151,   152,     1,
      12,   166,     1,    77,    10,    79,   145,   172,    22,     1,
      26,   176,    24,    25,    18,     1,    30,    31,    17,   158,
       1,   324,   325,     1,    17,     0,    42,     1,    34,    41,
      11,    17,    11,   419,    11,   154,   155,    11,    12,    17,
      17,   160,    35,    36,     1,    11,   185,   166,    47,    11,
      56,    32,    51,   172,   181,   209,    96,   176,   212,    61,
     214,    65,    66,    11,   218,   219,    80,    11,    82,    61,
      86,   145,    88,    85,     1,   214,    33,    91,    52,    93,
     219,   384,   385,   469,   142,    51,    11,   103,   207,     1,
      17,     1,    22,    41,    11,   234,   215,   236,   237,   238,
     239,    17,    12,    51,   162,   244,   180,   226,   227,    11,
       1,    23,    24,   267,   118,   145,    41,     1,   134,   273,
      47,   275,    32,   277,    17,     1,    51,     1,   158,   283,
     284,    47,   553,   554,   273,    51,    11,    12,   212,    11,
     214,     1,    33,   308,   218,   219,     1,     1,    22,    33,
     269,   270,   191,   272,    47,   185,    11,    33,    51,    35,
      36,   200,   201,     1,    11,     1,   285,   286,   287,   288,
     289,   245,   246,    33,    43,    35,    36,    32,   332,    33,
       1,    17,    37,    38,   311,    40,    41,     1,   342,   308,
      45,    11,    22,     1,    32,   269,    51,    11,    22,   273,
      30,    31,   321,    17,   234,   263,   236,   237,   238,   239,
      66,    32,     1,     1,   244,    23,   335,   336,    32,    47,
     339,   340,    22,    37,    38,     1,    40,    41,    17,    17,
      58,     1,   371,    47,    43,     1,    24,    51,   312,    48,
      11,    17,    13,    14,    15,    16,   260,   261,    19,    20,
      21,     1,     1,   421,    24,    41,    26,    28,    29,   378,
     379,   335,    11,   402,   403,   404,    52,    33,    17,    35,
      36,   390,   411,    23,    24,    11,   415,   504,   505,   398,
     399,    11,   401,    32,    22,   324,   325,   326,    37,    38,
      10,    40,    41,    64,    65,    66,    45,    11,   525,   526,
     419,     1,    51,    22,    24,    22,   445,   446,   427,    11,
     384,    11,    12,    11,    16,    17,   435,   482,   457,    11,
       1,     1,    11,   442,    13,    14,    15,    16,   496,    33,
      11,    11,    13,    14,    15,    16,    16,    17,   206,    28,
      29,   371,   210,    17,   483,   384,   385,   466,    29,    11,
     469,    32,    32,     4,    16,    17,    37,    38,     9,    40,
      41,    35,    36,   482,    45,   504,   505,   506,     1,    11,
      51,   445,   402,   403,   404,    64,    65,    66,    11,    11,
      12,   411,   547,     1,    17,   415,   525,   526,   527,   528,
     529,   530,   531,    11,   513,    13,    14,    15,    16,    32,
      30,    17,    31,    17,    37,    38,    17,    40,    41,    12,
       1,    29,    45,   471,    32,   445,   446,    58,    51,    35,
      36,    35,    36,     1,    17,     3,    17,   457,   547,   548,
     504,   505,    37,    11,    11,    13,    14,    15,    16,    30,
      31,    12,    35,    36,    22,    23,    17,    17,    17,    11,
      28,    29,    43,   483,    32,    49,    12,    48,    11,    37,
      38,    17,    40,    41,    25,    26,    35,    36,    46,    35,
      36,    49,    50,    51,   504,   505,   506,    55,    39,    57,
      12,    42,    60,    44,    12,    17,    64,    65,    66,    17,
      30,    31,     1,    33,     3,   525,   526,   527,   528,   529,
     530,   531,    11,    43,    13,    14,    15,    16,    48,    30,
      31,    35,    36,    22,    23,     1,     6,     7,     8,    28,
      29,    68,    43,    32,    11,    11,    12,    48,    37,    38,
      22,    40,    41,    25,    11,    27,    22,    46,    30,    31,
      49,    50,    51,     1,    30,    31,    55,    52,    57,    47,
       1,    60,     3,    11,    22,    64,    65,    66,    23,    24,
      11,    22,    13,    14,    15,    16,    27,    62,    63,    30,
      31,    22,    35,    36,    32,    33,    11,    28,    29,    37,
      38,    32,    40,    41,    41,    32,    37,    38,    27,    40,
      41,    30,    31,    51,    17,    46,    17,    17,    49,    50,
      51,    23,    24,    12,    55,    17,    57,     1,    52,    60,
      30,    31,    11,    64,    65,    66,    33,    11,    11,    13,
      14,    15,    16,    43,    25,    11,    27,     1,    48,    30,
      31,    33,     1,    35,    36,    29,    17,    11,    32,    13,
      14,    15,    16,    37,    38,    52,    40,    41,    17,     1,
      27,    45,    22,    30,    31,    29,     5,    51,    32,    11,
      22,    30,    31,    37,    38,     1,    40,    41,    22,    17,
      22,    23,    23,    24,    43,    11,    11,    51,    17,    48,
      32,     1,    30,    31,    22,    37,    38,    17,    40,    41,
      33,    11,    33,     1,    41,    43,    32,    25,    26,    51,
      48,    37,    38,    11,    40,    41,    23,    24,    52,    45,
      17,    39,    32,     1,    42,    51,    44,    37,    38,    33,
      40,    41,    33,    11,    32,    45,    23,    24,     1,    37,
      38,    51,    40,    41,    33,    33,    32,    27,    11,    47,
      30,    31,    12,    51,    32,    33,     1,    52,    23,    37,
      38,    27,    40,    41,    30,    31,    11,    12,    23,    32,
      33,    17,     1,    51,    37,    38,    23,    40,    41,     1,
      17,    17,    11,    33,    30,    31,    17,    32,    51,    11,
      47,    33,    37,    38,    23,    40,    41,    43,    52,    17,
      22,    17,    48,    32,     1,    12,    51,    47,    37,    38,
      32,    40,    41,    17,    11,    37,    38,    17,    40,    41,
       1,    11,    51,    13,    14,    15,    16,    12,     5,    51,
      11,    63,     1,    23,   326,    32,    33,   499,    28,    29,
      37,    38,    11,    40,    41,    66,    32,   225,     1,    27,
     227,    32,    30,    31,    51,     1,    37,    38,    11,    40,
      41,   405,    -1,    32,    45,    11,    -1,    -1,    37,    38,
      51,    40,    41,    -1,    -1,    -1,   483,    27,    -1,    32,
      30,    31,    51,    -1,    37,    38,    32,    40,    41,     1,
      -1,    37,    38,    -1,    40,    41,    -1,   504,    51,   506,
      17,    33,    -1,    35,    36,    51,     1,    19,    20,    21,
      -1,    23,    -1,    30,    31,    27,    11,    12,    30,    31,
     527,   528,   529,   530,   531,    27,    43,    22,    30,    31,
      25,    48,    27,    -1,    -1,    30,    31,    11,    -1,    13,
      14,    15,    16,    11,    -1,    13,    14,    15,    16,    27,
      -1,    -1,    30,    31,    28,    29,    27,    -1,    -1,    30,
      31,    29,    27,    -1,    27,    30,    31,    30,    31,    27,
      -1,    -1,    30,    31,    33,    -1,    35,    36,    33,    -1,
      35,    36,    33,    -1,    35,    36,    33,    -1,    35,    36,
      33,    -1,    35,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    10,    34,    56,    73,    74,    75,    76,    77,   112,
     113,   154,   155,    11,    11,    11,     0,    75,    22,    25,
      27,    30,    31,    78,    79,    81,    98,    99,   100,   101,
      30,    31,    81,   114,   115,   116,   117,   118,   120,   121,
      27,    79,    98,   156,     1,    11,    12,     1,    11,    12,
      11,    13,    14,    15,    16,    19,    20,    21,    28,    29,
      64,    65,    66,    82,    83,    84,    85,    86,    87,    88,
      90,    92,    95,    96,    97,    11,    80,     1,    11,    32,
     102,   103,   102,   103,    27,    81,    98,    27,    98,    27,
      99,   102,   103,   102,   103,    27,   115,    27,   116,    22,
     139,   139,    27,    98,    27,    11,    11,    11,    11,    43,
      95,    11,    66,    22,     1,    23,    83,    86,    84,    11,
       1,    24,    26,    95,    12,   105,    95,   103,     1,    17,
     103,     1,    17,    27,    98,    27,    27,   103,   119,   103,
     122,    27,     3,    11,    23,    32,    37,    38,    40,    41,
      46,    49,    50,    51,    55,    57,    60,    86,   102,   109,
     123,   124,   125,   126,   127,   128,   129,   132,   135,   136,
     137,   140,   141,   142,   143,   144,   148,   149,    27,    11,
      22,    22,    80,     1,    17,    47,    51,    93,    11,    11,
      33,   104,    11,     1,    33,     1,    17,     1,    17,    27,
      30,    31,   139,   136,   137,   138,     1,    11,    16,    17,
      32,   130,     1,    11,    32,    45,   131,   132,     1,    32,
     131,    11,   149,   150,   132,   124,     1,    32,   137,    23,
     124,   139,   124,    17,    47,    58,    30,    31,    43,    48,
     124,   124,     1,    17,    47,    28,    89,    95,    80,    23,
     137,    41,    52,    17,    47,    51,   102,   107,   108,    12,
     102,   102,     4,     9,   110,    33,    37,    17,   130,     1,
      47,   132,    11,    32,   131,    17,   130,    17,   131,   131,
     137,   132,    33,    35,    36,    25,    26,    39,    42,    44,
     131,   131,    33,    11,   151,     1,    17,   141,   131,   132,
     146,   146,   137,    11,   137,   137,   137,   137,    68,   137,
      95,    23,    28,    95,    11,    23,    11,     1,    17,    52,
      47,    22,    41,    11,    11,    12,   106,   103,   103,    32,
     139,   131,    17,   132,   132,     1,    47,   132,   131,    17,
      17,   131,    17,   131,    33,     1,    33,   131,   131,   132,
     132,   132,   132,   132,    33,     1,    33,    12,    52,    17,
      33,     1,    33,   124,     1,    17,    11,    17,    80,    95,
      11,    12,    17,    11,    17,    17,    47,    51,    22,    22,
      23,    94,   132,    52,     1,    12,   108,   108,   107,     5,
      17,   131,   132,   132,    33,   132,    33,   132,    17,    17,
     131,    17,     1,    11,    12,   152,   153,    22,    22,     1,
      22,    12,    17,    17,    11,    12,    17,   137,    17,    22,
      41,    51,    91,   132,    91,    17,    23,    24,   108,   108,
       6,     7,     8,   111,   132,    17,    33,    33,    33,   132,
      33,   132,    17,   132,   137,     1,    12,   137,   137,   153,
      62,    63,   145,   145,   145,   145,   137,    12,    17,   137,
      17,    23,    91,    52,    41,    23,    24,    23,    17,    22,
     132,    33,    33,   132,     1,    33,    33,    33,   132,    33,
     137,   137,    12,    32,    23,    23,    23,     1,    23,    17,
     137,    17,    17,    23,    52,    17,    51,   132,    91,   139,
      33,     1,    33,   124,     1,    32,    45,   133,   134,   137,
     147,    17,    17,    47,    41,    23,   110,     1,    61,   133,
     134,   133,   134,   137,   134,    35,    36,    25,    26,    39,
      42,    44,    33,   132,    52,    17,    17,    33,     1,    33,
     133,   133,   134,   134,   134,   134,   134,    12,    47,   124,
     132,     1,    61,    17,    17,   145,   145
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
#line 172 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Code_Generation b;   ast->print((yyvsp[0].tn),0);cout<<"program: components\n";;}
    break;

  case 3:
#line 177 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"components: components component\n"; (yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, componentsListNode));;}
    break;

  case 4:
#line 178 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"components: component\n";			 (yyval.tn) = ast->createNode((yyvsp[0].tn), 0, componentNode);;}
    break;

  case 5:
#line 181 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"component:	class_interface\n";			(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 6:
#line 182 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"component:	class_implementation\n";	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 7:
#line 183 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"component:	protocol\n";				(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 8:
#line 189 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		s->insert_scope((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
		cout<<"class_interface: class_interface_header class_interface_body\n";
		(yyval.tn) =ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn), class_interface);;}
    break;

  case 9:
#line 199 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		i=1;

		
		datamember_offset=0;


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
#line 217 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		i=1;
		(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Interface((yyvsp[-2].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;																																		
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error",":");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 11:
#line 226 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
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
#line 235 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		i=1;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Interface((yyvsp[-1].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 																				Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 13:
#line 241 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		datamember_offset=0;
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
#line 256 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 15:
#line 261 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 16:
#line 265 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 					interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 17:
#line 270 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);;}
    break;

  case 18:
#line 274 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-1].tn),0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 19:
#line 278 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:instance_variables		 AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 20:
#line 282 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 21:
#line 286 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"class_interface_body:AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 22:
#line 292 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"protocol_reference_list: LESS_THAN ids_list MORE_THAN\n";
										(yyval.tn) = (yyvsp[-1].tn);
										;}
    break;

  case 23:
#line 301 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"ids_list:IDENTIFIER\n";									    (yyval.tn) = ast->createNode(0, 0, ids_list_Node);;}
    break;

  case 24:
#line 302 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",","); (yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 25:
#line 303 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"ids_list:ids_list COMMA IDENTIFIER\n";						(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 26:
#line 309 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 27:
#line 311 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 28:
#line 313 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","}");
														(yyval.tn) =(yyvsp[0].tn) ;}
    break;

  case 29:
#line 320 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";
																		(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node));;}
    break;

  case 30:
#line 322 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 31:
#line 324 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:variable_declaration_list\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 32:
#line 331 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"instance_variable_declaration:variable_declaration_list\n";
																	(yyval.tn) = ast->createNode((yyvsp[-1].tn), (yyvsp[0].tn), instance_variable_declaration_Node);
																	;}
    break;

  case 33:
#line 340 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node));
										;}
    break;

  case 34:
#line 344 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration\n";
										(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node);
										;}
    break;

  case 35:
#line 352 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PRIVATE\n";
					(yyval.tn) = ast->createNode(0,0, visibility_specification_private_Node);;}
    break;

  case 36:
#line 354 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PROTECTED\n";
						(yyval.tn) = ast->createNode(0,0, visibility_specification_protected_Node);;}
    break;

  case 37:
#line 357 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PUBLIC\n";
						(yyval.tn) = ast->createNode(0,0, visibility_specification_public_Node);;}
    break;

  case 38:
#line 366 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
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
#line 399 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
											(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 40:
#line 403 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
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
#line 426 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
													(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 42:
#line 431 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
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
#line 449 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
												(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 44:
#line 453 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-4].r.type));if(s->insertVariableInCurrentScope((yyvsp[-4].r.str),t,visability) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
		(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 45:
#line 460 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
														(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 46:
#line 464 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout << "Enum \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_enum);;}
    break;

  case 47:
#line 465 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout << "Struct \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_struct);;}
    break;

  case 48:
#line 466 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout << "Array \n" ; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayone);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 49:
#line 467 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout <<"Array N \n ";				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayN);		(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 50:
#line 472 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 51:
#line 473 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 52:
#line 477 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, structNode);;}
    break;

  case 53:
#line 478 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn), structNode);;}
    break;

  case 54:
#line 483 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {;;}
    break;

  case 55:
#line 484 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {;;}
    break;

  case 56:
#line 485 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 57:
#line 486 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 58:
#line 487 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 59:
#line 488 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 60:
#line 489 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 61:
#line 490 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 62:
#line 498 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 63:
#line 499 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-5].tn)->expectedType;;}
    break;

  case 64:
#line 500 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-9].tn)->expectedType;;}
    break;

  case 65:
#line 501 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 66:
#line 508 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 67:
#line 509 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) =ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 68:
#line 510 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-6].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 69:
#line 511 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 70:
#line 519 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-4].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-6].tn)->expectedType;;}
    break;

  case 71:
#line 520 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-3].tn)->expectedType;;}
    break;

  case 72:
#line 521 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-5].tn),(yyvsp[-2].tn), ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-7].tn)->expectedType;;}
    break;

  case 73:
#line 527 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, ArrayNMultiNode);;}
    break;

  case 74:
#line 528 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode(0,0, ArrayNMultiNode));;}
    break;

  case 75:
#line 535 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[-1].tn),0, array_body2Node);
															;}
    break;

  case 76:
#line 537 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[0].tn),0, array_body2Node);
															;}
    break;

  case 77:
#line 539 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-4].tn), ast->createNode((yyvsp[-1].tn),0, array_body2Node));
															;}
    break;

  case 78:
#line 541 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode(0,0, array_body2Node));
															;}
    break;

  case 79:
#line 546 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: simple_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;}
    break;

  case 80:
#line 548 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: complex_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 81:
#line 554 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"simple_type:int\n";(yyval.r.type)=1;
													(yyval.tn)=ast->createNode(0,0, simple_type_INT);  (yyval.tn)->expectedType=inttype;;}
    break;

  case 82:
#line 556 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"simple_type:char\n";(yyval.r.type)=2;
													(yyval.tn)=ast->createNode(0,0, simple_type_CHAR);	(yyval.tn)->expectedType=chartype;;}
    break;

  case 83:
#line 558 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"simple_type:float\n";(yyval.r.type)=3;
													(yyval.tn)=ast->createNode(0,0, simple_typeFLOAT);	(yyval.tn)->expectedType=floattype;;}
    break;

  case 84:
#line 560 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"simple_type:string\n";(yyval.r.type)=4;
													(yyval.tn)=ast->createNode(0,0, simple_type_NSSTRING);	(yyval.tn)->expectedType=stringtype;;}
    break;

  case 85:
#line 562 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"simple_type:void\n";(yyval.r.type)=5;
													(yyval.tn)=ast->createNode(0,0, simple_type_VOID);	(yyval.tn)->expectedType=voidtype;;}
    break;

  case 86:
#line 569 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		(yyval.r.type)=6;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_var_type((yyvsp[-1].r.str))==0)	
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","type is undefined");
		cout<<"complex_type:	IDENTIFIER	MULTI\n";
		(yyval.tn)=ast->createNode(0,0, complex_type);
			(yyval.tn)->expectedType=complextype;;}
    break;

  case 87:
#line 580 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
														(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node));;}
    break;

  case 88:
#line 582 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration\n";	(yyval.tn) = ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node);;}
    break;

  case 89:
#line 588 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"interface_declaration: class_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 90:
#line 590 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"interface_declaration: instance_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 91:
#line 596 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
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
#line 605 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		yyclearin;Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0)
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");		(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), class_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 93:
#line 614 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		cout<<"class_method_declaration: PLUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);
		;}
    break;

  case 94:
#line 621 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		yyclearin;
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");		(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);;}
    break;

  case 95:
#line 632 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS p_type method_selector	SEMI_COMA\n";	(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 96:
#line 640 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 97:
#line 645 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
												(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 98:
#line 647 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
													(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 99:
#line 652 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[-1].r.type);cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 100:
#line 654 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 101:
#line 656 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 102:
#line 664 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 103:
#line 664 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {i=3;s->currScope=s->currScope->parent;(yyval.r.str)=(yyvsp[-3].r.str);cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
								(yyval.tn) = ast->createNode(0,0, method_selector_Node);			;}
    break;

  case 104:
#line 666 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);cout<<"method_selector:IDENTIFIER \n";
												(yyval.tn) = ast->createNode(0,0, method_selector_Node);		;}
    break;

  case 105:
#line 669 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[-3].r.str);Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 106:
#line 669 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {i=3;s->currScope=s->currScope->parent;(yyval.r.str)=(yyvsp[-5].r.str);cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
								(yyval.tn) = ast->createNode(0,0, method_selector_Node);;}
    break;

  case 107:
#line 671 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
												(yyval.r.str)=(yyvsp[0].r.str);
												(yyval.r.str)=(yyvsp[0].r.str);cout<<"method_selector:IDENTIFIER \n";
												(yyval.tn) = ast->createNode(0,0, method_selector_Node);;}
    break;

  case 108:
#line 680 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 109:
#line 682 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 110:
#line 684 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 111:
#line 686 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 112:
#line 688 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"parameter_list: parameter\n";
																			(yyval.tn) =ast->createNode((yyvsp[0].tn),0, paramListNode);;}
    break;

  case 113:
#line 693 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
	add_param((yyvsp[-1].r.type));
	Type t=static_cast<Type>((yyvsp[-1].r.type));
	if(s->insertVariableInCurrentScope((yyvsp[0].r.str),t,1) == 0) 
		cout<<"error redefine variable";

	cout<<"parameter: p_type IDENTIFIER\n";	(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, parameter_Node);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;

	param_list1.push_back((yyvsp[0].r.str));
	;}
    break;

  case 114:
#line 709 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"statment: try_catch_statment\n";;}
    break;

  case 115:
#line 713 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"statment: catch_statment\n";;}
    break;

  case 116:
#line 714 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"statment: finally_TRY_CATCH\n";;}
    break;

  case 117:
#line 717 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"Exception NullPointerException";;}
    break;

  case 118:
#line 718 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"Exception OutOfBoundryException";;}
    break;

  case 119:
#line 719 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"Exception CastException";;}
    break;

  case 120:
#line 727 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ImpNode);
		(yyval.tn)->currST=s->currScope;
		s->insert_scope1((yyvsp[-1].r.str),s->currScope); s->currScope=s->currScope->parent;
		cout<<"class_implementation: class_implementation_header class_implementation_body\n";;}
    break;

  case 121:
#line 736 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
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

  case 122:
#line 749 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		i=2;(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Implementation_Interface((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 123:
#line 759 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		i=2;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Implementation_Interface((yyvsp[-1].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[-1].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 124:
#line 767 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
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

  case 125:
#line 785 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";;}
    break;

  case 126:
#line 787 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BdyImpNode);cout<<"class_implementation_body: instance_variables AT_END\n";;}
    break;

  case 127:
#line 788 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body:	implementation_definition_list	AT_END\n";;}
    break;

  case 128:
#line 797 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,ImpdefNode));i=3;cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";;}
    break;

  case 129:
#line 798 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {								(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ImpdefNode);i=3;cout<<"implementation_definition_list: implementation_definition\n";;}
    break;

  case 130:
#line 802 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: class_implementation_definition	\n";;}
    break;

  case 131:
#line 803 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: instance_implementation_definition \n";;}
    break;

  case 132:
#line 810 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
	(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefNode);i=2;

	cout<<"class_implementation_definition: class_implementation_definition_header block_body";
	
		 

	s->insert_scope((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
	;}
    break;

  case 133:
#line 824 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefHdrNode);cout<<"class_implementation_definition_header: PLUS p_type method_selector\n";
										(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;		  ;}
    break;

  case 134:
#line 826 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[0].tn),ClsImpDefHdrNode);cout<<"class_implementation_definition_header:  PLUS	method_selector\n";
										 ;}
    break;

  case 135:
#line 828 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[-3].r.str);Type t=static_cast<Type>((yyvsp[-4].r.type));
										if(s->insertFunctionInCurrentScope((yyvsp[-3].r.str),t,param_list) == 0) 
												Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
										Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
										insert_param();
										param_list1.clear();param_list.clear();
										(yyval.tn)=ast->createNode((yyvsp[-4].tn),(yyvsp[-3].tn),ClsImpDefHdrNode);cout<<"class_implementation_definition_header: PLUS p_type method_selector\n";;}
    break;

  case 136:
#line 835 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ClsImpDefHdrNode);cout<<"class_implementation_definition_header:  PLUS	method_selector\n";;}
    break;

  case 137:
#line 842 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {s->insert_scope((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefNode);i=2;(yyval.r.str)=(yyvsp[-1].r.str);cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";;}
    break;

  case 138:
#line 846 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS p_type	method_selector\n";
											(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 139:
#line 848 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,(yyvsp[0].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS method_selector\n";;}
    break;

  case 140:
#line 849 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    { (yyval.r.str)=(yyvsp[-3].r.str);Type t=static_cast<Type>((yyvsp[-4].r.type));
											  if(s->insertFunctionInCurrentScope((yyvsp[-3].r.str),t,param_list) == 0) 
												Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");\
											  Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
											  insert_param();
											  param_list1.clear();param_list.clear();
											 ast->createNode((yyvsp[-4].tn),(yyvsp[-3].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS p_type	method_selector\n";;}
    break;

  case 141:
#line 856 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS method_selector\n";;}
    break;

  case 142:
#line 863 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,stmtListNode));cout<<"statement_list: statement_list statement\n";;}
    break;

  case 143:
#line 864 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,stmtListNode);cout<<"statement_list: statement\n";;}
    break;

  case 144:
#line 870 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: loop_statement\n";;}
    break;

  case 145:
#line 871 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: conditional_statement\n";;}
    break;

  case 146:
#line 872 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[-1].tn);cout<<"statement: expr\n";;}
    break;

  case 147:
#line 873 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: variable_declaration\n";;}
    break;

  case 148:
#line 874 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Scope *new_scope = new Scope(); new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 149:
#line 874 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[-1].tn);s->currScope=s->currScope->parent;cout<<"statement: block_body\n";;}
    break;

  case 150:
#line 875 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: return_statement\n";;}
    break;

  case 152:
#line 883 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,ReturnNode);cout<<"return_statement: RETURN expr\n";;}
    break;

  case 153:
#line 884 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 154:
#line 887 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: for_loop\n";;}
    break;

  case 155:
#line 888 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: while_loop\n";;}
    break;

  case 156:
#line 889 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: do_while_loop\n";;}
    break;

  case 157:
#line 892 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ForNode);cout<<"for_loop: for_loop_header statement\n";;}
    break;

  case 158:
#line 898 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {	
		(yyval.tn)=ast->createNode((yyvsp[-5].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 159:
#line 905 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 160:
#line 907 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 161:
#line 909 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 162:
#line 911 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 163:
#line 918 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",")");;}
    break;

  case 164:
#line 920 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 165:
#line 922 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 166:
#line 927 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 167:
#line 932 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA CLOSE_P \n";;}
    break;

  case 168:
#line 935 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-3].tn),ast->createNode(0,0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 169:
#line 938 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA CLOSE_P\n";;}
    break;

  case 170:
#line 941 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA SEMI_COMA expr CLOSE_P";;}
    break;

  case 171:
#line 945 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForHdrNode);	
		cout<<"for_loop_hearder: FOR OPEN_P SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 172:
#line 952 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),intType,1) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error","Variable not found");cout<<"for_initializer: INT ID EQUAL expr\n";;}
    break;

  case 173:
#line 953 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 174:
#line 954 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 175:
#line 955 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);cout<<"for_initializer: ID EQUAL expr\n";;}
    break;

  case 176:
#line 956 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 177:
#line 957 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 178:
#line 958 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForIniNode);cout<<"for_initializer: ID\n";;}
    break;

  case 179:
#line 963 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 180:
#line 964 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 181:
#line 965 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 182:
#line 966 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 183:
#line 967 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 184:
#line 968 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 185:
#line 969 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 186:
#line 970 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 187:
#line 971 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 188:
#line 974 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:assign_expr\n";	;}
    break;

  case 189:
#line 975 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 190:
#line 978 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 191:
#line 979 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 192:
#line 980 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 193:
#line 981 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 194:
#line 982 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 195:
#line 983 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 196:
#line 984 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 197:
#line 985 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 198:
#line 986 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 199:
#line 987 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","LOGIC EXPR");;}
    break;

  case 200:
#line 988 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 201:
#line 989 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 202:
#line 994 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 203:
#line 998 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),AsgExpNode);cout<<"assign_expr:long_id EQUAL simple_expr\n";
										;}
    break;

  case 204:
#line 1004 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		var.push((yyvsp[0].r.str));				
		(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0,0,longidNode));
		cout<<"long_id: long_id.IDENTIFIER\n";;}
    break;

  case 205:
#line 1009 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"long_id: long_id.message_call\n";;}
    break;

  case 206:
#line 1010 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,IdentNode);
		if(strcmp(lexer->YYText(),".")==0) 
			var.push((yyvsp[0].r.str));
		if(s->getVariableFromCurrentScope((yyvsp[0].r.str))==0) {
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable Not found ");
		}
		cout<<"long_id:IDENTIFIER\n";;}
    break;

  case 207:
#line 1025 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,stringNode);    (yyval.tn)->expectedType=stringtype;
									cout<<"simple_expr:STRING_VAL\n";
									(yyval.tn)->item=(void *)yylval.r.str;;}
    break;

  case 208:
#line 1032 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,intNode);	 (yyval.tn)->expectedType=inttype;   (yyval.tn)->item=(void *)yylval.r.i;
								 cout<<" \n\n\n\n\n\n\n\n\n"<<(int)(yyval.tn)->item<<" \n\n\n\n\n\n\n\n\n";
									;}
    break;

  case 209:
#line 1040 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,floatNode);cout<<"simple_expr:FLOAT_VAL\n";	(yyval.tn)->expectedType=floattype;
								// $<tn>$->item=(void *)yylval.r.f;
								;}
    break;

  case 210:
#line 1043 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,stringNode);  
								cout<<"simple_expr:STRING_VAL\n";;}
    break;

  case 211:
#line 1048 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,CharNode);cout<<"simple_expr:CHAR_VAL\n";	(yyval.tn)->expectedType=chartype;
								 (yyval.tn)->item=(void *)yylval.r.c;;}
    break;

  case 212:
#line 1051 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
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

  case 213:
#line 1086 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpPlusNode);cout<<"simple_expr:expr PLUS expr\n";
											;}
    break;

  case 214:
#line 1088 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMinusNode);cout<<"simple_expr:expr MINUS expr\n";;}
    break;

  case 215:
#line 1089 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMultiNode);cout<<"simple_expr:expr MULTI expr\n";;}
    break;

  case 216:
#line 1090 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpDivNode);cout<<"simple_expr:expr DIV expr\n";;}
    break;

  case 217:
#line 1092 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,SmpExpNode);cout<<"simple_expr:OPEN_P expr CLOSE_P\n";;}
    break;

  case 218:
#line 1093 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,SmpExpNode);cout<<"expr:p_type expr\n";;}
    break;

  case 219:
#line 1098 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BlockNode); cout<<"block_body:OPEN_S statement_list	CLOSE_S\n";;}
    break;

  case 220:
#line 1099 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,BlockNode);cout<<"block_body:OPEN_S CLOSE_S\n";;}
    break;

  case 221:
#line 1104 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),WhileNode);cout<<"while_loop:while_loop_header statement\n";;}
    break;

  case 222:
#line 1107 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,WleHdrNode);cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 223:
#line 1108 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 224:
#line 1109 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 225:
#line 1110 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 226:
#line 1113 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),DoWhlNode);cout<<"do_while_loop_header: DO statement while_loop_header SEMI_COMA\n";;}
    break;

  case 227:
#line 1115 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),CondtiNode);cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 228:
#line 1116 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),CondtiNode);
		cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 229:
#line 1119 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,CondtiNode);cout<<"conditional_statement: switch\n";;}
    break;

  case 230:
#line 1122 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),(yyvsp[-1].tn),SwitchNode);cout<<"switch statment";;}
    break;

  case 231:
#line 1123 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 232:
#line 1124 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 233:
#line 1125 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");;}
    break;

  case 234:
#line 1126 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","{");;}
    break;

  case 235:
#line 1135 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
									(yyval.tn)=ast->createNode((yyvsp[-6].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[0].tn),SwtBdyNode),SwtBdyNode);
										
												cout<<"case statment";;}
    break;

  case 236:
#line 1139 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 237:
#line 1140 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-2].tn),SwtBdyNode);cout<<"default statment";;}
    break;

  case 238:
#line 1141 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 239:
#line 1146 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 240:
#line 1147 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 241:
#line 1151 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 242:
#line 1152 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 243:
#line 1155 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,IfHdrNode);cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 244:
#line 1156 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 245:
#line 1157 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 246:
#line 1158 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 247:
#line 1161 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),MsgCalNode);cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";;}
    break;

  case 248:
#line 1164 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,SndrNode);cout<<"sender: message_call\n";;}
    break;

  case 249:
#line 1165 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"sender: IDENTIFIER\n";;}
    break;

  case 250:
#line 1168 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {cout<<"message: IDENTIFIER\n";;}
    break;

  case 251:
#line 1169 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,MsgNode);cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";;}
    break;

  case 252:
#line 1172 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,argListNode));cout<<"argument_list: argument_list argument\n";;}
    break;

  case 253:
#line 1173 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argListNode);cout<<"argument_list: argument\n";;}
    break;

  case 254:
#line 1176 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: SEMI_COLUMN simple_expr\n";;}
    break;

  case 255:
#line 1177 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 256:
#line 1178 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: IDENTIFIER SEMI_COLUMN simple_expr\n";;}
    break;

  case 257:
#line 1179 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 258:
#line 1180 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 259:
#line 1182 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
	(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ProtclNode);
	s->insert_scope1((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
	cout<<"protocol: protocol_header protocol_body\n";;}
    break;

  case 260:
#line 1188 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
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

  case 261:
#line 1200 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list interface_declaration_list AT_END\n";;}
    break;

  case 262:
#line 1202 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: interface_declaration_list AT_END\n";;}
    break;

  case 263:
#line 1205 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list AT_END \n";;}
    break;

  case 264:
#line 1208 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode(0,0,ProtclBdyNode);
		cout<<"protocol_body:	AT_END\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3622 "yacc.cpp"

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


#line 1211 "C:\\Users\\Hasan\\Desktop\\compiler\\comp\\yacc.y"

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

