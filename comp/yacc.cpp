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
     AT_INTERFACE = 258,
     IDENTIFIER = 259,
     SEMI_COLUMN = 260,
     NSSTRING = 261,
     FLOAT = 262,
     CHAR = 263,
     INT = 264,
     SEMI_COMA = 265,
     ID = 266,
     AT_PUBLIC = 267,
     AT_PROTECTED = 268,
     AT_PRIVATE = 269,
     OPEN_S = 270,
     CLOSE_S = 271,
     COMMA = 272,
     LESS_THAN = 273,
     MORE_THAN = 274,
     AT_END = 275,
     CONST = 276,
     VOID = 277,
     PLUS = 278,
     MINUS = 279,
     OPEN_P = 280,
     CLOSE_P = 281,
     AT_IMPLEMENTATION = 282,
     AND_AND = 283,
     OR_OR = 284,
     STRING_VAL = 285,
     FLOAT_VAL = 286,
     LESS_OR_EQUAL = 287,
     CHAR_VAL = 288,
     INT_VAL = 289,
     MORE_OR_EQUAL = 290,
     MULTI = 291,
     EQUAL_EQUAL = 292,
     NOT_EQUAL = 293,
     FOR = 294,
     EQUAL = 295,
     DIV = 296,
     WHILE = 297,
     IF = 298,
     OPEN_ARR = 299,
     CLOSE_ARR = 300,
     TRUE = 301,
     FALSE = 302,
     RETURN = 303,
     AT_PROTOCOL = 304,
     DO = 305,
     DOT = 306,
     SYMBOL = 307,
     SWITCH = 308,
     BREAK = 309,
     DEFAULT = 310,
     CASE = 311,
     STRUCT = 312,
     TYPEDEF = 313,
     ENUM = 314,
     if_h = 315,
     ELSE = 316,
     expr_1 = 317,
     p_type_expr_prec = 318,
     long_id_prec = 319
   };
#endif
/* Tokens.  */
#define AT_INTERFACE 258
#define IDENTIFIER 259
#define SEMI_COLUMN 260
#define NSSTRING 261
#define FLOAT 262
#define CHAR 263
#define INT 264
#define SEMI_COMA 265
#define ID 266
#define AT_PUBLIC 267
#define AT_PROTECTED 268
#define AT_PRIVATE 269
#define OPEN_S 270
#define CLOSE_S 271
#define COMMA 272
#define LESS_THAN 273
#define MORE_THAN 274
#define AT_END 275
#define CONST 276
#define VOID 277
#define PLUS 278
#define MINUS 279
#define OPEN_P 280
#define CLOSE_P 281
#define AT_IMPLEMENTATION 282
#define AND_AND 283
#define OR_OR 284
#define STRING_VAL 285
#define FLOAT_VAL 286
#define LESS_OR_EQUAL 287
#define CHAR_VAL 288
#define INT_VAL 289
#define MORE_OR_EQUAL 290
#define MULTI 291
#define EQUAL_EQUAL 292
#define NOT_EQUAL 293
#define FOR 294
#define EQUAL 295
#define DIV 296
#define WHILE 297
#define IF 298
#define OPEN_ARR 299
#define CLOSE_ARR 300
#define TRUE 301
#define FALSE 302
#define RETURN 303
#define AT_PROTOCOL 304
#define DO 305
#define DOT 306
#define SYMBOL 307
#define SWITCH 308
#define BREAK 309
#define DEFAULT 310
#define CASE 311
#define STRUCT 312
#define TYPEDEF 313
#define ENUM 314
#define if_h 315
#define ELSE 316
#define expr_1 317
#define p_type_expr_prec 318
#define long_id_prec 319




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"

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
#line 124 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
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
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 281 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 293 "yacc.cpp"

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
#define YYLAST   980

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  77
/* YYNRULES -- Number of rules. */
#define YYNRULES  249
/* YYNRULES -- Number of states. */
#define YYNSTATES  526

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
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
     454,   457,   460,   465,   470,   474,   477,   481,   484,   487,
     490,   492,   494,   496,   499,   503,   506,   509,   513,   516,
     519,   521,   523,   525,   528,   530,   531,   534,   536,   540,
     544,   546,   548,   550,   553,   562,   571,   579,   588,   596,
     604,   611,   619,   627,   635,   642,   649,   656,   662,   667,
     671,   676,   680,   683,   687,   689,   693,   697,   701,   705,
     709,   712,   716,   720,   724,   726,   728,   732,   736,   740,
     744,   748,   751,   755,   759,   763,   766,   770,   774,   776,
     780,   784,   786,   788,   790,   792,   794,   796,   798,   802,
     806,   810,   814,   818,   821,   825,   828,   831,   836,   841,
     845,   850,   855,   858,   863,   865,   873,   881,   889,   897,
     905,   915,   925,   931,   937,   939,   941,   943,   945,   950,
     955,   959,   964,   969,   971,   973,   975,   979,   982,   984,
     987,   990,   994,   997,  1001,  1004,  1007,  1011,  1014,  1017
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      66,     0,    -1,    67,    -1,    67,    68,    -1,    68,    -1,
      69,    -1,   100,    -1,   139,    -1,    70,    71,    -1,     3,
       4,     5,     4,    -1,     3,     4,     1,     4,    -1,     3,
       4,     5,    -1,     3,     4,     4,    -1,     3,     4,    -1,
      72,    74,    91,    20,    -1,    72,    74,    20,    -1,    72,
      91,    20,    -1,    74,    91,    20,    -1,    72,    20,    -1,
      74,    20,    -1,    91,    20,    -1,    20,    -1,    18,    73,
      19,    -1,     4,    -1,    73,     1,     4,    -1,    73,    17,
       4,    -1,    15,    75,    16,    -1,    15,    75,     1,    -1,
      15,    75,    -1,    75,    76,    -1,    76,    -1,    77,    -1,
      78,    77,    -1,    77,    79,    -1,    79,    -1,    14,    -1,
      13,    -1,    12,    -1,    88,     4,    10,    -1,    88,     4,
       1,    -1,    88,     4,    40,   123,    10,    -1,    88,     4,
      40,   123,     1,    -1,    21,    88,     4,    10,    -1,    21,
      88,     4,     1,    -1,    21,    88,     4,    40,   123,    10,
      -1,    21,    88,     4,    40,   123,     1,    -1,    80,    -1,
      81,    -1,    83,    -1,    85,    -1,    59,    15,    73,    16,
       4,    10,    -1,    58,    59,    15,    73,    16,     4,    10,
      -1,    57,     4,    15,    82,    16,    10,    -1,    57,     4,
      15,    82,    16,    73,    10,    -1,    88,     4,    10,    -1,
      82,    88,     4,    10,    -1,    88,     4,     5,   123,    10,
      -1,    82,    88,     4,     5,   123,    10,    -1,    82,    21,
      88,     4,    10,    -1,    21,    88,     4,    10,    -1,    82,
      21,    88,     4,     5,   123,    10,    -1,    21,    88,     4,
       5,   123,    10,    -1,    88,     4,    44,    34,    45,    40,
      15,    16,    10,    -1,    88,     4,    44,    34,    45,    10,
      -1,    88,     4,    44,    34,    45,    40,    15,    84,    16,
      10,    -1,    88,     4,    44,    45,    40,    15,    84,    16,
      10,    -1,    84,    17,   118,    -1,   118,    -1,    84,    17,
      44,    34,    45,    40,   118,    -1,    44,    34,    45,    40,
     118,    -1,    88,     4,    86,    40,    15,    16,    10,    -1,
      88,     4,    86,    10,    -1,    88,     4,    86,    40,    15,
      87,    16,    10,    -1,    44,    34,    45,    44,    34,    45,
      -1,    86,    44,    34,    45,    -1,    15,    84,    16,    -1,
     118,    -1,    87,    17,    15,    84,    16,    -1,    87,    17,
     118,    -1,    89,    -1,    90,    -1,     9,    -1,     8,    -1,
       7,    -1,     6,    -1,    22,    -1,     4,    36,    -1,    91,
      92,    -1,    92,    -1,    93,    -1,    94,    -1,    23,    95,
      96,    10,    -1,    23,    95,    96,     1,    -1,    23,    96,
      10,    -1,    23,    96,     1,    -1,    24,    95,    96,    10,
      -1,    24,    96,    10,    -1,    24,    95,    96,     1,    -1,
      24,    96,     1,    -1,    25,    88,    26,    -1,     1,    88,
      26,    -1,    25,    88,     1,    -1,    -1,     4,     5,    97,
      98,    -1,     4,    -1,    98,     5,    99,    -1,    98,     4,
       5,    99,    -1,    98,     4,     1,    99,    -1,    98,     4,
      99,    -1,    99,    -1,    95,     4,    -1,   101,   102,    -1,
      27,     4,     5,     4,    -1,    27,     4,     1,     4,    -1,
      27,     4,     4,    -1,    27,     4,    -1,    74,   103,    20,
      -1,    74,    20,    -1,   103,    20,    -1,   103,   104,    -1,
     104,    -1,   105,    -1,   107,    -1,   106,   124,    -1,    23,
      95,    96,    -1,    23,    96,    -1,   108,   124,    -1,    24,
      95,    96,    -1,    24,    96,    -1,   109,   110,    -1,   110,
      -1,   113,    -1,   128,    -1,   118,    10,    -1,    79,    -1,
      -1,   111,   124,    -1,   112,    -1,    48,   118,    10,    -1,
      48,   118,     1,    -1,   114,    -1,   125,    -1,   127,    -1,
     115,   110,    -1,    39,    25,   116,    10,   117,    10,   118,
      26,    -1,    39,    25,   116,    10,   117,    10,   118,     1,
      -1,    39,   116,    10,   117,    10,   118,    26,    -1,    39,
       1,   116,    10,   117,    10,   118,    26,    -1,    39,    25,
      10,   117,    10,   118,    26,    -1,    39,    25,    10,   117,
      10,   118,     1,    -1,    39,    10,   117,    10,   118,    26,
      -1,    39,     1,    10,   117,    10,   118,    26,    -1,    39,
      25,   116,    10,    10,   118,    26,    -1,    39,    25,   116,
      10,   117,    10,    26,    -1,    39,    25,   116,    10,    10,
      26,    -1,    39,    25,    10,   117,    10,    26,    -1,    39,
      25,    10,    10,   118,    26,    -1,    39,    25,    10,    10,
      26,    -1,     9,     4,    40,   118,    -1,     9,     4,   118,
      -1,     9,     4,     1,   118,    -1,     4,    40,   118,    -1,
       4,   118,    -1,     4,     1,   118,    -1,     4,    -1,   118,
      18,   118,    -1,   118,    19,   118,    -1,   118,    32,   118,
      -1,   118,    35,   118,    -1,   118,    37,   118,    -1,    38,
     118,    -1,    25,   117,    26,    -1,   117,    28,   117,    -1,
     117,    29,   117,    -1,   121,    -1,   123,    -1,   120,    18,
     120,    -1,   120,    19,   120,    -1,   120,    32,   120,    -1,
     120,    35,   120,    -1,   120,    37,   120,    -1,    38,   120,
      -1,    25,   119,    26,    -1,   119,    28,   119,    -1,   119,
      29,   119,    -1,     1,   120,    -1,    25,   119,     1,    -1,
       1,   119,    26,    -1,   123,    -1,   122,    40,   123,    -1,
     122,    51,     4,    -1,   134,    -1,     4,    -1,    30,    -1,
      34,    -1,    31,    -1,    33,    -1,   122,    -1,   123,    23,
     123,    -1,   123,    24,   123,    -1,   123,    36,   123,    -1,
     123,    41,   123,    -1,    25,   123,    26,    -1,    95,   123,
      -1,    15,   109,    16,    -1,    15,    16,    -1,   126,   110,
      -1,    42,    25,   117,    26,    -1,    42,    25,   117,     1,
      -1,    42,   117,    26,    -1,    42,     1,   117,    26,    -1,
      50,   110,   126,    10,    -1,   133,   110,    -1,   133,   110,
      61,   110,    -1,   129,    -1,    53,    25,   131,    26,    15,
     130,    16,    -1,    53,     1,   131,    26,    15,   130,    16,
      -1,    53,    25,   131,     1,    15,   130,    16,    -1,    53,
      25,   131,    26,    15,   130,     1,    -1,    53,    25,   131,
      26,     1,   130,    16,    -1,    56,    25,   132,    26,     5,
     110,    54,    10,   130,    -1,    56,    25,   132,    26,     5,
     110,     1,    10,   130,    -1,    55,     5,   110,    54,    10,
      -1,    55,     5,   110,     1,    10,    -1,   117,    -1,   118,
      -1,   119,    -1,   120,    -1,    43,    25,   117,    26,    -1,
      43,    25,   117,     1,    -1,    43,   117,    26,    -1,    43,
       1,   117,    26,    -1,    44,   135,   136,    45,    -1,   134,
      -1,     4,    -1,     4,    -1,     4,     5,   137,    -1,   137,
     138,    -1,   138,    -1,     5,   123,    -1,     1,   123,    -1,
       4,     5,   123,    -1,     4,   123,    -1,     4,     1,   123,
      -1,   140,   141,    -1,    49,     4,    -1,    72,    91,    20,
      -1,    91,    20,    -1,    72,    20,    -1,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   137,   137,   139,   140,   142,   143,   144,   146,   162,
     164,   169,   171,   173,   178,   180,   182,   184,   186,   188,
     190,   192,   196,   200,   201,   202,   205,   206,   207,   210,
     211,   212,   215,   217,   219,   223,   224,   225,   228,   242,
     243,   246,   247,   249,   250,   252,   253,   254,   255,   256,
     258,   259,   261,   262,   265,   266,   267,   268,   269,   270,
     271,   272,   274,   275,   276,   277,   280,   281,   282,   283,
     285,   286,   287,   290,   291,   294,   295,   296,   297,   299,
     300,   303,   304,   305,   306,   307,   309,   312,   313,   316,
     317,   320,   322,   324,   326,   329,   331,   333,   334,   337,
     338,   339,   342,   342,   343,   345,   346,   347,   348,   349,
     351,   354,   357,   359,   362,   365,   372,   373,   374,   377,
     378,   381,   382,   385,   388,   389,   392,   395,   396,   399,
     400,   403,   404,   405,   406,   407,   407,   408,   411,   412,
     415,   416,   417,   420,   423,   425,   427,   429,   432,   434,
     437,   439,   442,   444,   447,   449,   451,   454,   458,   459,
     460,   461,   462,   463,   464,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   478,   479,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   498,   501,
     504,   508,   509,   519,   520,   521,   522,   524,   556,   557,
     558,   559,   560,   561,   564,   565,   568,   571,   572,   573,
     574,   577,   579,   580,   581,   584,   585,   586,   587,   588,
     593,   594,   595,   596,   601,   602,   606,   607,   610,   611,
     612,   613,   616,   619,   620,   623,   624,   627,   628,   631,
     632,   633,   634,   635,   637,   640,   645,   647,   649,   651
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AT_INTERFACE", "IDENTIFIER",
  "SEMI_COLUMN", "NSSTRING", "FLOAT", "CHAR", "INT", "SEMI_COMA", "ID",
  "AT_PUBLIC", "AT_PROTECTED", "AT_PRIVATE", "OPEN_S", "CLOSE_S", "COMMA",
  "LESS_THAN", "MORE_THAN", "AT_END", "CONST", "VOID", "PLUS", "MINUS",
  "OPEN_P", "CLOSE_P", "AT_IMPLEMENTATION", "AND_AND", "OR_OR",
  "STRING_VAL", "FLOAT_VAL", "LESS_OR_EQUAL", "CHAR_VAL", "INT_VAL",
  "MORE_OR_EQUAL", "MULTI", "EQUAL_EQUAL", "NOT_EQUAL", "FOR", "EQUAL",
  "DIV", "WHILE", "IF", "OPEN_ARR", "CLOSE_ARR", "TRUE", "FALSE", "RETURN",
  "AT_PROTOCOL", "DO", "DOT", "SYMBOL", "SWITCH", "BREAK", "DEFAULT",
  "CASE", "STRUCT", "TYPEDEF", "ENUM", "if_h", "ELSE", "expr_1",
  "p_type_expr_prec", "long_id_prec", "$accept", "program", "components",
  "component", "class_interface", "class_interface_header",
  "class_interface_body", "protocol_reference_list", "ids_list",
  "instance_variables", "instance_variable_declarations",
  "instance_variable_declaration", "variable_declaration_list",
  "visibility_specification", "variable_declaration", "Enum", "structrule",
  "variable_declarations", "ArrayOne", "array_body", "ArrayN", "Multi",
  "array_body2", "type", "simple_type", "complex_type",
  "interface_declaration_list", "interface_declaration",
  "class_method_declaration", "instance_method_declaration", "p_type",
  "method_selector", "@1", "parameter_list", "parameter",
  "class_implementation", "class_implementation_header",
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
     315,   316,   317,   318,   319
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    69,    70,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    73,    73,    73,    74,    74,    74,    75,
      75,    75,    76,    77,    77,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    83,    83,    83,    83,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    90,    91,    91,    92,
      92,    93,    93,    93,    93,    94,    94,    94,    94,    95,
      95,    95,    97,    96,    96,    98,    98,    98,    98,    98,
      99,   100,   101,   101,   101,   101,   102,   102,   102,   103,
     103,   104,   104,   105,   106,   106,   107,   108,   108,   109,
     109,   110,   110,   110,   110,   111,   110,   110,   112,   112,
     113,   113,   113,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   121,
     122,   122,   122,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   125,   126,   126,   126,
     126,   127,   128,   128,   128,   129,   129,   129,   129,   129,
     130,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     133,   133,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   138,   138,   138,   139,   140,   141,   141,   141,   141
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
       2,     2,     4,     4,     3,     2,     3,     2,     2,     2,
       1,     1,     1,     2,     3,     2,     2,     3,     2,     2,
       1,     1,     1,     2,     1,     0,     2,     1,     3,     3,
       1,     1,     1,     2,     8,     8,     7,     8,     7,     7,
       6,     7,     7,     7,     6,     6,     6,     5,     4,     3,
       4,     3,     2,     3,     1,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     2,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     2,     3,     2,     2,     4,     4,     3,
       4,     4,     2,     4,     1,     7,     7,     7,     7,     7,
       9,     9,     5,     5,     1,     1,     1,     1,     4,     4,
       3,     4,     4,     1,     1,     1,     3,     2,     1,     2,
       2,     3,     2,     3,     2,     2,     3,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,     0,     2,     4,     5,     0,     6,
       0,     7,     0,     0,     0,   245,     1,     3,     0,     0,
      21,     0,     0,     8,     0,     0,     0,    88,    89,    90,
       0,     0,     0,   111,     0,   120,   121,     0,   122,     0,
     249,     0,     0,   244,     0,    12,    11,     0,   114,     0,
       0,    84,    83,    82,    81,    37,    36,    35,     0,    85,
       0,     0,     0,     0,    30,    31,     0,    34,    46,    47,
      48,    49,     0,    79,    80,    23,     0,     0,   104,     0,
       0,     0,     0,     0,    18,     0,     0,    19,     0,    20,
      87,     0,   125,     0,   128,   117,     0,   118,   119,     0,
     123,   126,   248,     0,   247,    10,     9,   113,   112,    86,
       0,     0,     0,     0,    27,    26,    29,    33,    32,     0,
       0,     0,    22,     0,   102,     0,     0,    94,    93,     0,
      98,    96,    15,     0,    16,    17,   124,   127,   116,   192,
     205,     0,   193,   195,   196,   194,     0,     0,     0,     0,
       0,     0,     0,   134,     0,     0,   130,     0,   137,   131,
     140,     0,     0,   174,   197,   175,   141,     0,   142,   132,
     214,     0,   191,   246,     0,     0,     0,     0,    39,    38,
       0,     0,     0,    24,    25,   100,     0,   101,    99,    92,
      91,    97,    95,    14,   197,     0,     0,     0,     0,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,     0,
       0,   234,   233,     0,     0,     0,     0,     0,   203,   204,
     129,   136,   143,   133,     0,     0,     0,     0,     0,     0,
     206,   212,    43,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,   103,   109,   202,
       0,     0,     0,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,   175,   170,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,   235,     0,   139,   138,
       0,   224,   225,     0,     0,   189,   190,   198,   199,   200,
     201,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    40,     0,     0,     0,     0,   110,     0,     0,     0,
       0,   163,   161,     0,     0,   159,     0,     0,     0,     0,
       0,     0,   210,   208,   207,   172,   173,   165,   166,   167,
     168,   169,   231,   229,   228,     0,   232,   211,     0,     0,
       0,   213,    45,    44,     0,    52,     0,     0,     0,     0,
      54,     0,    50,    63,     0,     0,     0,     0,     0,     0,
      76,    74,     0,     0,   108,   105,     0,     0,   160,   158,
     171,     0,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   238,     0,     0,     0,     0,     0,    59,    53,
       0,     0,    55,     0,    51,     0,     0,     0,     0,    67,
       0,    70,     0,     0,   107,   106,     0,     0,   150,   156,
     155,     0,   154,     0,     0,     0,   240,     0,     0,   242,
     239,   237,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,    56,     0,     0,    73,     0,     0,     0,    75,
      72,     0,    78,   151,     0,   149,   148,   152,   153,     0,
     146,   243,   241,     0,     0,   216,   217,   219,   218,   215,
      61,     0,    57,    62,     0,     0,    65,     0,    66,     0,
     147,   145,   144,     0,     0,     0,     0,   226,   227,   188,
       0,    60,    64,     0,     0,    77,     0,     0,     0,   185,
       0,     0,   188,   181,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     0,   223,   222,   187,   186,   182,   183,
     184,   176,   177,   178,   179,   180,     0,     0,     0,    68,
       0,     0,     0,     0,   221,   220
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    23,    24,    76,    25,
      63,    64,    65,    66,   153,    68,    69,   236,    70,   398,
      71,   182,   359,    72,    73,    74,    26,    27,    28,    29,
     154,    81,   186,   247,   248,     9,    10,    33,    34,    35,
      36,    37,    38,    39,   155,   156,   157,   158,   159,   160,
     161,   201,   281,   207,   477,   491,   163,   164,   165,   100,
     166,   167,   168,   169,   170,   424,   283,   480,   171,   172,
     213,   277,   381,   382,    11,    12,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -378
static const short int yypact[] =
{
      37,    55,    62,   172,   119,    37,  -378,  -378,   695,  -378,
     494,  -378,   780,   931,   538,  -378,  -378,  -378,   130,   174,
    -378,   181,   181,  -378,   483,   603,   620,  -378,  -378,  -378,
     181,   181,   700,  -378,   739,  -378,  -378,   178,  -378,   178,
    -378,   750,   785,  -378,   191,  -378,   197,   233,  -378,   277,
      93,  -378,  -378,  -378,  -378,  -378,  -378,  -378,   958,  -378,
     283,   204,   279,   634,  -378,   234,   234,  -378,  -378,  -378,
    -378,  -378,   322,  -378,  -378,  -378,   114,   958,   340,   958,
     367,   122,   367,   261,  -378,   802,   814,  -378,   823,  -378,
    -378,   367,  -378,   367,  -378,  -378,   836,  -378,  -378,   471,
    -378,  -378,  -378,   860,  -378,  -378,  -378,  -378,  -378,  -378,
     402,   393,   420,   174,  -378,  -378,  -378,  -378,   234,    53,
     436,   453,  -378,   434,  -378,    21,   273,  -378,  -378,   372,
    -378,  -378,  -378,   865,  -378,  -378,  -378,  -378,  -378,    93,
    -378,   361,  -378,  -378,  -378,  -378,   354,   678,   696,    16,
     866,   630,   159,  -378,   866,   571,  -378,   178,  -378,  -378,
    -378,   630,   473,  -378,    31,   357,  -378,   630,  -378,  -378,
    -378,   630,  -378,  -378,   115,   527,   174,   336,  -378,  -378,
     866,   215,   118,  -378,  -378,  -378,   185,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,   439,   709,   319,    69,   459,   713,
     444,   484,   403,  -378,   403,   866,   445,   384,   403,   403,
     562,  -378,  -378,   493,   412,   457,   713,   713,   357,  -378,
    -378,  -378,  -378,  -378,   866,   508,   866,   866,   866,   866,
    -378,   455,  -378,  -378,   866,   958,   952,   516,   422,   540,
     125,   505,   514,  -378,   541,   549,   570,   216,  -378,  -378,
     713,   593,   361,   866,  -378,   451,   403,   203,   276,   596,
     713,   583,    79,   709,  -378,  -378,   713,   713,   866,   866,
     866,   866,   866,   784,   139,  -378,   613,   577,  -378,  -378,
     639,   498,   384,   627,    22,   357,  -378,    -3,    -3,  -378,
    -378,   630,   229,   652,    33,   958,   655,   170,   664,   660,
    -378,  -378,   137,   662,   507,   645,  -378,   326,   185,   306,
     713,  -378,  -378,   361,   866,  -378,   843,   866,   735,   315,
     661,   331,  -378,  -378,   883,   535,   535,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,   883,   680,  -378,  -378,   681,   683,
      38,  -378,  -378,  -378,   256,  -378,   301,   689,   259,   866,
    -378,   691,  -378,  -378,   687,   670,   873,   873,   697,   581,
    -378,  -378,   920,   185,  -378,  -378,   866,   346,  -378,  -378,
    -378,   699,  -378,   702,   751,   763,   368,   866,   866,   786,
     866,    45,  -378,   544,   544,   544,   544,   866,  -378,  -378,
     421,   866,  -378,   193,  -378,   798,   686,    57,   600,  -378,
     616,  -378,   727,   820,  -378,  -378,   715,   866,  -378,  -378,
    -378,    29,  -378,   716,   832,   722,   357,   361,   866,   357,
     357,  -378,   701,   724,   737,   738,   740,   111,   249,   866,
    -378,   391,  -378,   748,   625,  -378,   726,   762,   889,  -378,
    -378,   873,  -378,  -378,   749,  -378,  -378,  -378,  -378,    94,
    -378,   357,   357,   630,   848,  -378,  -378,  -378,  -378,  -378,
    -378,   584,  -378,  -378,   768,   743,  -378,    70,  -378,   650,
    -378,  -378,  -378,    13,   551,   551,   866,   647,   424,   357,
     754,  -378,  -378,   866,   741,  -378,   782,   791,   887,   424,
     207,   424,   709,  -378,   848,   848,   866,   866,   866,   866,
     866,   801,  -378,   775,  -378,  -378,  -378,  -378,  -378,   535,
     535,  -378,  -378,  -378,  -378,  -378,   630,   866,    15,  -378,
     808,   817,   544,   544,  -378,  -378
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -378,  -378,  -378,   834,  -378,  -378,  -378,   828,  -111,   199,
    -378,   778,   789,  -378,    -8,  -378,  -378,  -378,  -378,  -353,
    -378,  -378,  -378,   -45,  -378,  -378,     0,   -11,  -378,  -378,
      14,    -4,  -378,  -378,  -279,  -378,  -378,  -378,   812,   -15,
    -378,  -378,  -378,  -378,  -378,  -150,  -378,  -378,  -378,  -378,
    -378,   189,    80,   -99,  -162,  -252,  -378,    71,   -30,   -36,
    -378,   633,  -378,  -378,  -378,  -377,   644,  -378,  -378,  -143,
    -378,  -378,  -378,   487,  -378,  -378,  -378
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -237
static const short int yytable[] =
{
     162,   215,   177,   101,   400,   220,   212,   425,   426,   427,
      67,   222,    42,   110,   486,    90,   520,   230,    83,    98,
     211,   231,   187,   339,    86,    88,    92,    94,   364,   365,
     445,    90,   123,   228,   125,    80,    82,    75,   229,   385,
       1,   103,   434,   345,    91,    93,   378,   188,   340,   379,
     380,   214,   162,   386,   178,   446,   162,   117,    67,    13,
     149,   211,   162,   179,     2,   238,    14,   487,   162,   521,
     252,   224,   162,   203,   211,    90,   126,    90,   129,  -164,
     323,    98,   225,   404,   405,   133,     3,   136,   469,   137,
    -236,   436,    90,   180,   141,   471,   125,   181,   254,   142,
     143,   149,   144,   145,   484,   324,   264,   266,   267,   253,
     117,   195,   458,   149,   149,   120,   232,   282,   282,    16,
     472,   221,    90,   127,   218,   233,   300,   459,   243,   109,
     237,   121,   128,   122,    50,   301,    51,    52,    53,    54,
     333,   341,    55,    56,    57,   524,   525,   353,   226,   227,
     240,    58,    59,   311,   312,   234,   315,   123,   244,   125,
     216,   228,   245,   123,   125,   334,   229,   266,   267,   327,
     328,   329,   330,   331,   263,   349,    15,   354,    75,   263,
     350,   355,    77,   346,   217,    78,    77,    60,    61,    62,
     293,   296,   162,    99,   285,   105,   287,   288,   289,   290,
     246,   106,   478,   432,   292,   360,    79,   123,   507,    32,
      79,   125,   194,   317,   368,   369,   226,   227,   371,   373,
     307,   308,   489,    85,   493,   194,   263,   206,   210,   228,
     342,   266,   267,   508,   229,   494,   495,   107,    50,   343,
      51,    52,    53,    54,   511,   512,   513,   514,   515,   241,
     347,   194,   226,   227,   212,    58,    59,   399,   399,   460,
     242,   387,   130,   112,   391,   228,   388,   406,   123,   392,
     229,   131,   226,   227,   189,   411,   413,    77,   415,   257,
     203,   108,   261,   190,   262,   228,   318,   111,   273,   274,
     229,    60,    61,    62,   113,   194,   399,   194,   194,   194,
     194,   256,   120,   473,   442,   194,   142,   143,   444,   144,
     145,   389,   488,   490,   205,   449,   366,   123,   121,   393,
     149,   246,   246,   197,   212,   374,   119,   362,   198,   250,
     309,   363,   509,   510,   266,   267,   316,   120,   319,   468,
     321,   377,   399,   266,   267,   124,   325,   326,   416,   419,
     420,    79,   239,   121,   162,   196,   407,   428,   197,   266,
     267,   431,    77,   198,   199,   139,   518,    51,    52,    53,
      54,    78,   123,   191,   266,   267,   246,   246,   414,   200,
     226,   227,   192,    59,   502,   251,   141,   451,   452,   259,
     367,   142,   143,   228,   144,   145,   266,   267,   229,   461,
     376,   462,   268,   269,    77,   149,   174,   139,   175,    51,
      52,    53,    54,   278,   226,   227,   270,   162,   519,   271,
     194,   272,   279,   120,   479,    59,   429,   228,   256,   123,
     125,   430,   229,   142,   143,   176,   144,   145,   298,   121,
     183,   205,   496,   497,   479,   492,   479,   149,   197,   194,
     194,   194,   313,   198,   258,   203,   498,   184,   194,   499,
     185,   500,   194,   255,   479,   479,   479,   479,   479,   479,
     479,   265,    77,   266,   267,   139,   141,    51,    52,    53,
      54,   142,   143,   223,   144,   145,  -135,   140,   194,   194,
     225,   314,    58,    59,   260,   149,   141,   276,    18,   147,
     194,   142,   143,    84,   144,   145,    21,    22,    77,    18,
     146,   203,   286,   147,   148,   149,   291,    30,    31,   150,
     297,   151,   357,   358,   152,   194,   266,   267,    60,    61,
      62,    50,   141,    51,    52,    53,    54,   142,   143,    47,
     144,   145,    48,    49,   299,   194,   194,   194,   235,    59,
     302,   149,   474,  -115,   303,   139,   304,    51,    52,    53,
      54,  -115,  -115,  -237,  -237,   194,   194,   194,   194,   194,
     194,   194,    77,    59,   306,   139,   475,    51,    52,    53,
      54,   142,   143,   305,   144,   145,  -135,   219,   275,   476,
     266,   267,    58,    59,   481,   149,   141,   402,   403,   422,
     423,   142,   143,   310,   144,   145,   320,   226,   227,   322,
     146,   266,   267,   147,   148,   149,   437,   438,   335,   150,
     228,   151,   336,    87,   152,   229,    21,    22,    60,    61,
      62,    77,   439,   438,   139,   114,    51,    52,    53,    54,
      89,   464,   438,    21,    22,  -135,    55,    56,    57,   337,
     115,    58,    59,   338,   -28,   141,   344,   -28,   -28,   348,
     142,   143,    77,   144,   145,   203,   485,   438,   351,   146,
     352,   375,   147,   148,   149,   494,   495,   356,   150,   202,
     151,   378,   203,   152,   379,   380,   256,    60,    61,    62,
     361,   142,   143,   390,   144,   145,   383,   208,   384,   205,
     203,   394,   395,   204,   396,   149,   453,   401,   142,   143,
      18,   144,   145,    19,    77,    20,   205,   203,    21,    22,
      95,   209,   149,    30,    31,   408,   142,   143,   409,   144,
     145,   435,   226,   227,   205,   249,    77,   440,   256,   203,
     149,   443,   447,   142,   143,   228,   144,   145,   450,   454,
     229,   205,    77,   455,   456,   203,   457,   149,   463,    97,
     141,   372,    30,    31,    77,   142,   143,   203,   144,   145,
     102,   465,   466,    21,    22,   470,   141,   410,   482,   149,
     501,   142,   143,   483,   144,   145,   503,   417,   141,   412,
     203,   418,   504,   142,   143,   149,   144,   145,    19,    77,
      40,   505,   203,    21,    22,   104,   516,   149,    21,    22,
     332,   141,   266,   267,   433,   517,   142,   143,   522,   144,
     145,    77,   132,   141,   203,    21,    22,   523,   142,   143,
     149,   144,   145,    77,   134,   441,   203,    21,    22,    17,
      41,   116,   397,   135,    96,   141,    21,    22,   280,   474,
     142,   143,   203,   144,   145,   118,   138,   141,   448,    30,
      31,   284,   142,   143,   149,   144,   145,    77,   421,   370,
     203,   266,   267,   475,    77,     0,   149,   203,   142,   143,
     173,   144,   145,    21,    22,   193,   476,     0,    21,    22,
      77,   141,   149,   203,     0,     0,   142,   143,   141,   144,
     145,     0,     0,   142,   143,     0,   144,   145,     0,  -171,
     149,  -171,  -171,   506,   141,   494,   495,   397,     0,   142,
     143,    77,   144,   145,    50,     0,    51,    52,    53,    54,
       0,     0,    44,   467,     0,    45,    46,     0,     0,     0,
       0,     0,    59,     0,     0,    79,   -13,     0,     0,   -13,
       0,   -13,     0,     0,   -13,   -13,    50,     0,    51,    52,
      53,    54,    50,     0,    51,    52,    53,    54,   294,     0,
       0,     0,     0,   295,    59,     0,     0,     0,     0,     0,
      59
};

static const short int yycheck[] =
{
      99,   151,   113,    39,   357,   155,   149,   384,   385,   386,
      18,   161,    12,    58,     1,    26,     1,   167,    22,    34,
       4,   171,     1,     1,    24,    25,    30,    31,   307,   308,
       1,    42,    77,    36,    79,    21,    22,     4,    41,     1,
       3,    41,   395,    10,    30,    31,     1,    26,    26,     4,
       5,   150,   151,    15,     1,    26,   155,    65,    66,     4,
      44,     4,   161,    10,    27,   176,     4,    54,   167,    54,
       1,    40,   171,     4,     4,    86,    80,    88,    82,    10,
       1,    96,    51,   362,   363,    85,    49,    91,   441,    93,
      45,    34,   103,    40,    25,     1,   141,    44,   197,    30,
      31,    44,    33,    34,    34,    26,   205,    28,    29,    40,
     118,   141,     1,    44,    44,     1,     1,   216,   217,     0,
      26,   157,   133,     1,   154,    10,     1,    16,    10,    36,
     175,    17,    10,    19,     4,    10,     6,     7,     8,     9,
       1,   291,    12,    13,    14,   522,   523,    10,    23,    24,
     180,    21,    22,   252,   253,    40,   255,   202,    40,   204,
       1,    36,    44,   208,   209,    26,    41,    28,    29,   268,
     269,   270,   271,   272,   204,     5,     4,    40,     4,   209,
      10,    44,     1,   294,    25,     4,     1,    57,    58,    59,
     235,   236,   291,    15,   224,     4,   226,   227,   228,   229,
     186,     4,   454,    10,   234,   304,    25,   252,     1,    10,
      25,   256,   141,    10,   313,   314,    23,    24,   317,   318,
       4,     5,   474,    24,   476,   154,   256,   147,   148,    36,
       1,    28,    29,    26,    41,    28,    29,     4,     4,    10,
       6,     7,     8,     9,   496,   497,   498,   499,   500,    34,
     295,   180,    23,    24,   397,    21,    22,   356,   357,    10,
      45,     5,     1,    59,     5,    36,    10,   366,   313,    10,
      41,    10,    23,    24,     1,   374,   375,     1,   377,   199,
       4,     4,   202,    10,   204,    36,    10,     4,   208,   209,
      41,    57,    58,    59,    15,   224,   395,   226,   227,   228,
     229,    25,     1,   453,   403,   234,    30,    31,   407,    33,
      34,    10,   474,   475,    38,   414,    10,   362,    17,   349,
      44,   307,   308,     4,   467,    10,     4,     1,     9,    10,
     250,     5,   494,   495,    28,    29,   256,     1,   258,   438,
     260,    10,   441,    28,    29,     5,   266,   267,   378,   379,
     380,    25,    16,    17,   453,     1,    10,   387,     4,    28,
      29,   391,     1,     9,    10,     4,   516,     6,     7,     8,
       9,     4,   417,     1,    28,    29,   362,   363,    10,    25,
      23,    24,    10,    22,   483,   196,    25,   417,   418,   200,
     310,    30,    31,    36,    33,    34,    28,    29,    41,   429,
     320,    10,    18,    19,     1,    44,     4,     4,    15,     6,
       7,     8,     9,     1,    23,    24,    32,   516,   517,    35,
     349,    37,    10,     1,   454,    22,     5,    36,    25,   474,
     475,    10,    41,    30,    31,    15,    33,    34,    16,    17,
       4,    38,    18,    19,   474,   475,   476,    44,     4,   378,
     379,   380,     1,     9,    10,     4,    32,     4,   387,    35,
      26,    37,   391,     4,   494,   495,   496,   497,   498,   499,
     500,    26,     1,    28,    29,     4,    25,     6,     7,     8,
       9,    30,    31,    10,    33,    34,    15,    16,   417,   418,
      51,    40,    21,    22,    10,    44,    25,     4,    15,    42,
     429,    30,    31,    20,    33,    34,    23,    24,     1,    15,
      39,     4,     4,    42,    43,    44,    61,    23,    24,    48,
       4,    50,    15,    16,    53,   454,    28,    29,    57,    58,
      59,     4,    25,     6,     7,     8,     9,    30,    31,     1,
      33,    34,     4,     5,     4,   474,   475,   476,    21,    22,
      45,    44,     1,    15,    40,     4,    15,     6,     7,     8,
       9,    23,    24,    28,    29,   494,   495,   496,   497,   498,
     499,   500,     1,    22,     4,     4,    25,     6,     7,     8,
       9,    30,    31,    34,    33,    34,    15,    16,    26,    38,
      28,    29,    21,    22,    10,    44,    25,    16,    17,    55,
      56,    30,    31,    10,    33,    34,    10,    23,    24,    26,
      39,    28,    29,    42,    43,    44,    16,    17,     5,    48,
      36,    50,    45,    20,    53,    41,    23,    24,    57,    58,
      59,     1,    16,    17,     4,     1,     6,     7,     8,     9,
      20,    16,    17,    23,    24,    15,    12,    13,    14,    10,
      16,    21,    22,    26,    20,    25,     4,    23,    24,     4,
      30,    31,     1,    33,    34,     4,    16,    17,     4,    39,
      10,    10,    42,    43,    44,    28,    29,    15,    48,     1,
      50,     1,     4,    53,     4,     5,    25,    57,    58,    59,
      45,    30,    31,     4,    33,    34,    15,     1,    15,    38,
       4,    10,    15,    25,    34,    44,     5,    10,    30,    31,
      15,    33,    34,    18,     1,    20,    38,     4,    23,    24,
      20,    25,    44,    23,    24,    26,    30,    31,    26,    33,
      34,    45,    23,    24,    38,    26,     1,    10,    25,     4,
      44,    26,    26,    30,    31,    36,    33,    34,    26,    25,
      41,    38,     1,    16,    16,     4,    16,    44,    10,    20,
      25,    26,    23,    24,     1,    30,    31,     4,    33,    34,
      20,    45,    10,    23,    24,    26,    25,    26,    10,    44,
      26,    30,    31,    40,    33,    34,    45,     1,    25,    26,
       4,     5,    10,    30,    31,    44,    33,    34,    18,     1,
      20,    10,     4,    23,    24,    20,     5,    44,    23,    24,
      26,    25,    28,    29,    16,    40,    30,    31,    10,    33,
      34,     1,    20,    25,     4,    23,    24,    10,    30,    31,
      44,    33,    34,     1,    20,    15,     4,    23,    24,     5,
      12,    63,    44,    20,    32,    25,    23,    24,   215,     1,
      30,    31,     4,    33,    34,    66,    20,    25,    26,    23,
      24,   217,    30,    31,    44,    33,    34,     1,   381,    26,
       4,    28,    29,    25,     1,    -1,    44,     4,    30,    31,
      20,    33,    34,    23,    24,    20,    38,    -1,    23,    24,
       1,    25,    44,     4,    -1,    -1,    30,    31,    25,    33,
      34,    -1,    -1,    30,    31,    -1,    33,    34,    -1,    26,
      44,    28,    29,    26,    25,    28,    29,    44,    -1,    30,
      31,     1,    33,    34,     4,    -1,     6,     7,     8,     9,
      -1,    -1,     1,    44,    -1,     4,     5,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    25,    15,    -1,    -1,    18,
      -1,    20,    -1,    -1,    23,    24,     4,    -1,     6,     7,
       8,     9,     4,    -1,     6,     7,     8,     9,    16,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,
      22
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,    27,    49,    66,    67,    68,    69,    70,   100,
     101,   139,   140,     4,     4,     4,     0,    68,    15,    18,
      20,    23,    24,    71,    72,    74,    91,    92,    93,    94,
      23,    24,    74,   102,   103,   104,   105,   106,   107,   108,
      20,    72,    91,   141,     1,     4,     5,     1,     4,     5,
       4,     6,     7,     8,     9,    12,    13,    14,    21,    22,
      57,    58,    59,    75,    76,    77,    78,    79,    80,    81,
      83,    85,    88,    89,    90,     4,    73,     1,     4,    25,
      95,    96,    95,    96,    20,    74,    91,    20,    91,    20,
      92,    95,    96,    95,    96,    20,   103,    20,   104,    15,
     124,   124,    20,    91,    20,     4,     4,     4,     4,    36,
      88,     4,    59,    15,     1,    16,    76,    79,    77,     4,
       1,    17,    19,    88,     5,    88,    96,     1,    10,    96,
       1,    10,    20,    91,    20,    20,    96,    96,    20,     4,
      16,    25,    30,    31,    33,    34,    39,    42,    43,    44,
      48,    50,    53,    79,    95,   109,   110,   111,   112,   113,
     114,   115,   118,   121,   122,   123,   125,   126,   127,   128,
     129,   133,   134,    20,     4,    15,    15,    73,     1,    10,
      40,    44,    86,     4,     4,    26,    97,     1,    26,     1,
      10,     1,    10,    20,   122,   123,     1,     4,     9,    10,
      25,   116,     1,     4,    25,    38,   117,   118,     1,    25,
     117,     4,   134,   135,   118,   110,     1,    25,   123,    16,
     110,   124,   110,    10,    40,    51,    23,    24,    36,    41,
     110,   110,     1,    10,    40,    21,    82,    88,    73,    16,
     123,    34,    45,    10,    40,    44,    95,    98,    99,    26,
      10,   116,     1,    40,   118,     4,    25,   117,    10,   116,
      10,   117,   117,   123,   118,    26,    28,    29,    18,    19,
      32,    35,    37,   117,   117,    26,     4,   136,     1,    10,
     126,   117,   118,   131,   131,   123,     4,   123,   123,   123,
     123,    61,   123,    88,    16,    21,    88,     4,    16,     4,
       1,    10,    45,    40,    15,    34,     4,     4,     5,   117,
      10,   118,   118,     1,    40,   118,   117,    10,    10,   117,
      10,   117,    26,     1,    26,   117,   117,   118,   118,   118,
     118,   118,    26,     1,    26,     5,    45,    10,    26,     1,
      26,   110,     1,    10,     4,    10,    73,    88,     4,     5,
      10,     4,    10,    10,    40,    44,    15,    15,    16,    87,
     118,    45,     1,     5,    99,    99,    10,   117,   118,   118,
      26,   118,    26,   118,    10,    10,   117,    10,     1,     4,
       5,   137,   138,    15,    15,     1,    15,     5,    10,    10,
       4,     5,    10,   123,    10,    15,    34,    44,    84,   118,
      84,    10,    16,    17,    99,    99,   118,    10,    26,    26,
      26,   118,    26,   118,    10,   118,   123,     1,     5,   123,
     123,   138,    55,    56,   130,   130,   130,   130,   123,     5,
      10,   123,    10,    16,    84,    45,    34,    16,    17,    16,
      10,    15,   118,    26,   118,     1,    26,    26,    26,   118,
      26,   123,   123,     5,    25,    16,    16,    16,     1,    16,
      10,   123,    10,    10,    16,    45,    10,    44,   118,    84,
      26,     1,    26,   110,     1,    25,    38,   119,   120,   123,
     132,    10,    10,    40,    34,    16,     1,    54,   119,   120,
     119,   120,   123,   120,    28,    29,    18,    19,    32,    35,
      37,    26,   118,    45,    10,    10,    26,     1,    26,   119,
     119,   120,   120,   120,   120,   120,     5,    40,   110,   118,
       1,    54,    10,    10,   130,   130
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
#line 137 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"program: components\n";;}
    break;

  case 3:
#line 139 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"components: components component\n";;}
    break;

  case 4:
#line 140 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"components: component\n";;}
    break;

  case 5:
#line 142 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"component:	class_interface\n";;}
    break;

  case 6:
#line 143 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"component:	class_implementation\n";;}
    break;

  case 7:
#line 144 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"component:	protocol\n";;}
    break;

  case 8:
#line 146 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {
cout<<lexer->YYText();
cout<<yytoken;
temp22++;
cout<<"temp2 is"<<temp22;
s->insert_scope((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;if(temp22==1)
	{

	std::ifstream is;
	std::filebuf * fb = is.rdbuf();
	fb->open ("D:\\t1.txt",ios::in);
	istream in1(fb);
	yy_buffer_state *y1=lexer->yy_create_buffer(&in1,100);
	lexer->yy_switch_to_buffer(y1);
	yyparse();}cout<<"class_interface: class_interface_header class_interface_body\n";;}
    break;

  case 9:
#line 162 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=1;(yyval.r.str)=(yyvsp[-2].r.str);if(s->check_Interface((yyvsp[-2].r.str))!=0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 
																				else if(s->insertInterfaceInCurrentScope((yyvsp[-2].r.str),(yyvsp[0].r.str))==0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Not found inhertance Interface"); Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";;}
    break;

  case 10:
#line 164 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {
																				i=1;(yyval.r.str)=(yyvsp[-2].r.str);if(s->check_Interface((yyvsp[-2].r.str))!=0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 
																				Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;																																		
																				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error",":");
																				;}
    break;

  case 11:
#line 169 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=1;(yyval.r.str)=(yyvsp[-1].r.str);if(s->check_Interface((yyvsp[-1].r.str))!=0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 
																				 Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","IDENTIFIER");;}
    break;

  case 12:
#line 171 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=1;(yyval.r.str)=(yyvsp[-1].r.str);if(s->check_Interface((yyvsp[-1].r.str))!=0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 
																				Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 13:
#line 173 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=1;(yyval.r.str)=(yyvsp[0].r.str);if(s->check_Interface((yyvsp[0].r.str))!=0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");s->insertInterfaceInCurrentScope((yyvsp[0].r.str),"NSObject"); 
																				Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";;}
    break;

  case 14:
#line 179 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";;}
    break;

  case 15:
#line 181 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";;}
    break;

  case 16:
#line 183 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 					interface_declaration_list	AT_END\n";;}
    break;

  case 17:
#line 185 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";;}
    break;

  case 18:
#line 187 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";;}
    break;

  case 19:
#line 189 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_interface_body:instance_variables		 AT_END\n";;}
    break;

  case 20:
#line 191 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_interface_body:interface_declaration_list	AT_END\n";;}
    break;

  case 21:
#line 193 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_interface_body:AT_END\n";;}
    break;

  case 22:
#line 196 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"protocol_reference_list: LESS_THAN ids_list MORE_THAN\n";;}
    break;

  case 23:
#line 200 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"ids_list:IDENTIFIER\n";;}
    break;

  case 24:
#line 201 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",",");;}
    break;

  case 25:
#line 202 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"ids_list:ids_list COMMA IDENTIFIER\n";;}
    break;

  case 26:
#line 205 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";;}
    break;

  case 27:
#line 206 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");;}
    break;

  case 28:
#line 207 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","}");;}
    break;

  case 29:
#line 210 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";;}
    break;

  case 30:
#line 211 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";;}
    break;

  case 31:
#line 212 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:variable_declaration_list\n";;}
    break;

  case 32:
#line 215 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"instance_variable_declaration:variable_declaration_list\n";;}
    break;

  case 33:
#line 218 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";;}
    break;

  case 34:
#line 220 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration\n";;}
    break;

  case 35:
#line 223 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {visability=1;cout<<"visibility_specification:AT_PRIVATE\n";;}
    break;

  case 36:
#line 224 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {visability=2;cout<<"visibility_specification:AT_PROTECTED\n";;}
    break;

  case 37:
#line 225 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {visability=3;cout<<"visibility_specification:AT_PUBLIC\n";;}
    break;

  case 38:
#line 229 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {
				cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n"; 
				Type t=static_cast<Type>((yyvsp[-2].r.type));
				if((yyvsp[-2].r.type)==6)
				{
					if(s->insertVariableInCurrentScope((yyvsp[-1].r.str),(yyvsp[-2].r.str),visability) == 0)
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				}
				else{
					if(s->insertVariableInCurrentScope((yyvsp[-1].r.str),t,visability) == 0)
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				}
			;}
    break;

  case 39:
#line 242 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 40:
#line 243 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Type t=static_cast<Type>((yyvsp[-4].r.type));
	if(s->insertVariableInCurrentScope((yyvsp[-3].r.str),t,visability) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
	cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 41:
#line 246 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    { yyclearin; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 42:
#line 247 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Type t=static_cast<Type>((yyvsp[-2].r.type));if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),t,visability) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
	cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 43:
#line 249 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 44:
#line 250 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Type t=static_cast<Type>((yyvsp[-4].r.type));if(s->insertVariableInCurrentScope((yyvsp[-4].r.str),t,visability) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
	cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 45:
#line 252 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 46:
#line 253 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout << "Enum \n ";;}
    break;

  case 47:
#line 254 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout << "Struct \n ";;}
    break;

  case 48:
#line 255 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout << "Array \n" ;;}
    break;

  case 49:
#line 256 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout <<"Array N \n ";;}
    break;

  case 50:
#line 258 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 51:
#line 259 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 52:
#line 261 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 53:
#line 262 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 54:
#line 265 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 55:
#line 266 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 56:
#line 267 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 57:
#line 268 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 58:
#line 269 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 59:
#line 270 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 60:
#line 271 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 61:
#line 272 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 62:
#line 274 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 63:
#line 275 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 64:
#line 276 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 65:
#line 277 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 66:
#line 280 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 67:
#line 281 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 68:
#line 282 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 69:
#line 283 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 70:
#line 285 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 71:
#line 286 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 72:
#line 287 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 73:
#line 290 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 74:
#line 291 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 75:
#line 294 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 76:
#line 295 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 77:
#line 296 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 78:
#line 297 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 79:
#line 299 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: simple_type\n";;}
    break;

  case 80:
#line 300 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: complex_type\n";;}
    break;

  case 81:
#line 303 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_type:int\n";(yyval.r.type)=1;;}
    break;

  case 82:
#line 304 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_type:char\n";(yyval.r.type)=2;;}
    break;

  case 83:
#line 305 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_type:float\n";(yyval.r.type)=3;;}
    break;

  case 84:
#line 306 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_type:string\n";(yyval.r.type)=4;;}
    break;

  case 85:
#line 307 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_type:void\n";(yyval.r.type)=5;;}
    break;

  case 86:
#line 309 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {(yyval.r.type)=6;(yyval.r.str)=(yyvsp[-1].r.str);char* s11=(yyvsp[-1].r.str);if(s->check_var_type(s11)==0)	Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","type is undefined");cout<<"complex_type:	IDENTIFIER	MULTI\n";;}
    break;

  case 87:
#line 312 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";;}
    break;

  case 88:
#line 313 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration\n";;}
    break;

  case 89:
#line 316 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"interface_declaration: class_method_declaration\n";;}
    break;

  case 90:
#line 317 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"interface_declaration: instance_method_declaration\n";;}
    break;

  case 91:
#line 320 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Type t=static_cast<Type>((yyvsp[-2].r.type));if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
	cout<<"class_method_declaration: PLUS p_type		 method_selector	SEMI_COMA\n";;}
    break;

  case 92:
#line 322 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Type t=static_cast<Type>((yyvsp[-2].r.type));if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
																Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 93:
#line 324 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
	cout<<"class_method_declaration: PLUS			 method_selector	SEMI_COMA\n";;}
    break;

  case 94:
#line 326 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 95:
#line 329 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Type t=static_cast<Type>((yyvsp[-2].r.type));if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
	param_list.clear();cout<<"instance_method_declaration: MINUS p_type	method_selector		SEMI_COMA\n";;}
    break;

  case 96:
#line 331 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
	cout<<"instance_method_declaration: MINUS			 method_selector	SEMI_COMA\n";;}
    break;

  case 97:
#line 333 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 98:
#line 334 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 99:
#line 337 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[-1].r.type);cout<<"p_type : OPEN_P type CLOSE_P\n";;}
    break;

  case 100:
#line 338 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(tn tn");;}
    break;

  case 101:
#line 339 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 102:
#line 342 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 103:
#line 342 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=3;s->currScope=s->currScope->parent;(yyval.r.str)=(yyvsp[-3].r.str);cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";;}
    break;

  case 104:
#line 343 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);cout<<"method_selector:IDENTIFIER \n";;}
    break;

  case 105:
#line 345 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";;}
    break;

  case 106:
#line 346 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";;}
    break;

  case 107:
#line 347 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 108:
#line 348 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 109:
#line 349 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"parameter_list: parameter\n";;}
    break;

  case 110:
#line 351 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {add_param((yyvsp[-1].r.type));Type t=static_cast<Type>((yyvsp[-1].r.type));if(s->insertVariableInCurrentScope((yyvsp[0].r.str),t,1) == 0) cout<<"error redefine variable";cout<<"parameter:  p_type IDENTIFIER\n";;}
    break;

  case 111:
#line 354 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {s->insert_scope1((yyvsp[-1].r.str),s->currScope); s->currScope=s->currScope->parent;cout<<"class_implementation: class_implementation_header class_implementation_body\n";;}
    break;

  case 112:
#line 357 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Interface_name=(yyvsp[-2].r.str);i=2;(yyval.r.str)=(yyvsp[-2].r.str);if(s->check_Implementation_Interface((yyvsp[-2].r.str))==0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
	if(s->check_Implementation((yyvsp[-2].r.str))!=0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redfine Implementation"); else if(s->insertImplementationInCurrentScope((yyvsp[-2].r.str),(yyvsp[0].r.str))==0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation Inhertance not found"); Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";;}
    break;

  case 113:
#line 359 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {
																i=2;(yyval.r.str)=(yyvsp[-2].r.str);if(s->check_Implementation_Interface((yyvsp[-2].r.str))==0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");if(s->insertImplementationInCurrentScope((yyvsp[-2].r.str))==0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
																 Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 114:
#line 362 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {
																i=2;(yyval.r.str)=(yyvsp[-1].r.str);if(s->check_Implementation_Interface((yyvsp[-1].r.str))==0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");if(s->insertImplementationInCurrentScope((yyvsp[-1].r.str))==0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
																 Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 115:
#line 365 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {
																 i=2;(yyval.r.str)=(yyvsp[0].r.str);if(s->check_Implementation_Interface((yyvsp[0].r.str))==0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");if(s->insertImplementationInCurrentScope((yyvsp[0].r.str))==0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
																 Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
																 cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER \n";
																;}
    break;

  case 116:
#line 372 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";;}
    break;

  case 117:
#line 373 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_implementation_body: instance_variables									AT_END\n";;}
    break;

  case 118:
#line 374 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_implementation_body:						implementation_definition_list	AT_END\n";;}
    break;

  case 119:
#line 377 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=3;cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";;}
    break;

  case 120:
#line 378 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=3;cout<<"implementation_definition_list: implementation_definition\n";;}
    break;

  case 121:
#line 381 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"implementation_definition: class_implementation_definition	\n";;}
    break;

  case 122:
#line 382 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"implementation_definition: instance_implementation_definition \n";;}
    break;

  case 123:
#line 385 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=2;cout<<"class_implementation_definition: class_implementation_definition_header block_body";;}
    break;

  case 124:
#line 388 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_implementation_definition_header: PLUS p_type		 method_selector\n";;}
    break;

  case 125:
#line 389 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"class_implementation_definition_header:  PLUS			 method_selector\n";;}
    break;

  case 126:
#line 392 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {i=2;(yyval.r.str)=(yyvsp[-1].r.str);cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";;}
    break;

  case 127:
#line 395 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"instance_implementation_definition_header:MINUS p_type		method_selector\n";;}
    break;

  case 128:
#line 396 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"instance_implementation_definition_header:MINUS 			method_selector\n";;}
    break;

  case 129:
#line 399 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"statement_list: statement_list statement\n";;}
    break;

  case 130:
#line 400 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"statement_list: statement\n";;}
    break;

  case 131:
#line 403 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"statement: loop_statement\n";;}
    break;

  case 132:
#line 404 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"statement: conditional_statement\n";;}
    break;

  case 133:
#line 405 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"statement: expr\n";;}
    break;

  case 134:
#line 406 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"statement: variable_declaration\n";;}
    break;

  case 135:
#line 407 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Scope *new_scope = new Scope(); new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 136:
#line 407 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {s->currScope=s->currScope->parent;cout<<"statement: block_body\n";;}
    break;

  case 137:
#line 408 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"statement: return_statement\n";;}
    break;

  case 138:
#line 411 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"return_statement: RETURN expr\n";;}
    break;

  case 139:
#line 412 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 140:
#line 415 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"loop_statement: for_loop\n";;}
    break;

  case 141:
#line 416 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"loop_statement: while_loop\n";;}
    break;

  case 142:
#line 417 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"loop_statement: do_while_loop\n";;}
    break;

  case 143:
#line 420 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_loop: for_loop_header statement\n";;}
    break;

  case 144:
#line 424 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";;}
    break;

  case 145:
#line 426 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 146:
#line 428 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 147:
#line 430 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 148:
#line 433 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";;}
    break;

  case 149:
#line 435 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",")");;}
    break;

  case 150:
#line 438 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 151:
#line 440 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 152:
#line 443 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";;}
    break;

  case 153:
#line 445 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";;}
    break;

  case 154:
#line 448 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";;}
    break;

  case 155:
#line 450 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";;}
    break;

  case 156:
#line 452 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";;}
    break;

  case 157:
#line 455 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";;}
    break;

  case 158:
#line 458 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),intType,1) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error","Variable not found");cout<<"for_initializer: INT ID EQUAL expr\n";;}
    break;

  case 159:
#line 459 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 160:
#line 460 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 161:
#line 461 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_initializer: ID EQUAL expr\n";;}
    break;

  case 162:
#line 462 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 163:
#line 463 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 164:
#line 464 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"for_initializer: ID\n";;}
    break;

  case 165:
#line 467 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 166:
#line 468 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 167:
#line 469 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 168:
#line 470 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 169:
#line 471 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 170:
#line 472 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 171:
#line 473 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 172:
#line 474 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 173:
#line 475 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 174:
#line 478 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"expr:assign_expr\n";;}
    break;

  case 175:
#line 479 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"expr:simple_expr\n";;}
    break;

  case 176:
#line 482 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 177:
#line 483 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 178:
#line 484 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 179:
#line 485 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 180:
#line 486 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 181:
#line 487 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 182:
#line 488 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 183:
#line 489 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 184:
#line 490 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 185:
#line 491 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","LOGIC EXPR");;}
    break;

  case 186:
#line 492 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 187:
#line 493 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 188:
#line 498 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"expr:simple_expr\n";;}
    break;

  case 189:
#line 501 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"assign_expr:long_id EQUAL simple_expr\n";;}
    break;

  case 190:
#line 504 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {
		var.push((yyvsp[0].r.str));
		cout<<"long_id: long_id.IDENTIFIER\n";;}
    break;

  case 191:
#line 508 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"long_id: long_id.message_call\n";;}
    break;

  case 192:
#line 509 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {
	if(strcmp(lexer->YYText(),".")==0) 
		var.push((yyvsp[0].r.str));
	else if(s->getVariableFromCurrentScope((yyvsp[0].r.str))==0) {
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable Not found ");
	}
	cout<<"long_id:IDENTIFIER\n";;}
    break;

  case 193:
#line 519 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_expr:STRING_VAL\n";;}
    break;

  case 194:
#line 520 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_expr:INT_VAL\ns";;}
    break;

  case 195:
#line 521 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_expr:FLOAT_VAL\n";;}
    break;

  case 196:
#line 522 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_expr:CHAR_VAL\n";;}
    break;

  case 197:
#line 524 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
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

  case 198:
#line 556 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_expr:expr PLUS expr\n";;}
    break;

  case 199:
#line 557 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_expr:expr MINUS expr\n";;}
    break;

  case 200:
#line 558 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_expr:expr MULTI expr\n";;}
    break;

  case 201:
#line 559 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_expr:expr DIV expr\n";;}
    break;

  case 202:
#line 560 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"simple_expr:OPEN_P expr CLOSE_P\n";;}
    break;

  case 203:
#line 561 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"expr:p_type expr\n";;}
    break;

  case 204:
#line 564 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    { cout<<"block_body:OPEN_S statement_list	CLOSE_S\n";;}
    break;

  case 205:
#line 565 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    { cout<<"block_body:OPEN_S 					CLOSE_S\n";;}
    break;

  case 206:
#line 568 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"while_loop:while_loop_header statement\n";;}
    break;

  case 207:
#line 571 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 208:
#line 572 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 209:
#line 573 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 210:
#line 574 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 211:
#line 577 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"do_while_loop_header: DO statement while_loop_header SEMI_COMA\n";;}
    break;

  case 212:
#line 579 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 213:
#line 580 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 214:
#line 581 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"conditional_statement: switch\n";;}
    break;

  case 215:
#line 584 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"switch statment";;}
    break;

  case 216:
#line 585 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 217:
#line 586 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 218:
#line 587 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");;}
    break;

  case 219:
#line 588 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","{");;}
    break;

  case 220:
#line 593 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"case statment";;}
    break;

  case 221:
#line 594 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 222:
#line 595 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"default statment";;}
    break;

  case 223:
#line 596 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 224:
#line 601 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 225:
#line 602 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 226:
#line 606 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 227:
#line 607 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {;;}
    break;

  case 228:
#line 610 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 229:
#line 611 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 230:
#line 612 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 231:
#line 613 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 232:
#line 616 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";;}
    break;

  case 233:
#line 619 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"sender: message_call\n";;}
    break;

  case 234:
#line 620 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"sender: IDENTIFIER\n";;}
    break;

  case 235:
#line 623 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"message: IDENTIFIER\n";;}
    break;

  case 236:
#line 624 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";;}
    break;

  case 237:
#line 627 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"argument_list: argument_list argument\n";;}
    break;

  case 238:
#line 628 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"argument_list: argument\n";;}
    break;

  case 239:
#line 631 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"argument: SEMI_COLUMN simple_expr\n";;}
    break;

  case 240:
#line 632 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 241:
#line 633 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"argument: IDENTIFIER SEMI_COLUMN simple_expr\n";;}
    break;

  case 242:
#line 634 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 243:
#line 635 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 244:
#line 637 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {s->insert_scope1((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;cout<<"protocol: protocol_header protocol_body\n";;}
    break;

  case 245:
#line 640 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);
								if(s->check_Interface((yyvsp[0].r.str))!=0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","there is inteface in the same name");
								if( s->insertProtocolInCurrentScope((yyvsp[0].r.str))==0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Protocol");
								Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";;}
    break;

  case 246:
#line 646 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";;}
    break;

  case 247:
#line 648 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"protocol_body:	interface_declaration_list	AT_END\n";;}
    break;

  case 248:
#line 650 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"protocol_body:	protocol_reference_list 							AT_END	\n";;}
    break;

  case 249:
#line 652 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"
    {cout<<"protocol_body:	AT_END\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3208 "yacc.cpp"

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


#line 653 "C:\\Users\\hossam\\Documents\\Visual Studio 2012\\Projects\\comp\\yacc.y"

void yyerror(char *s) {
	;
}

int yylex(){
	return lexer->yylex();
}
void main(void){
	Parser* p = new Parser();
	std::ifstream is;
	std::filebuf * fb = is.rdbuf();
	fb->open ("D:\\t.txt",ios::in);
	istream in1(fb);
	yy_buffer_state *y=lexer->yy_create_buffer(&in1,100);
	lexer->yy_switch_to_buffer(y);
	yyparse();
	Er->printErrQueue();
	system("pause");
}

