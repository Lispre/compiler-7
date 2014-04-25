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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 129 "C:\\Users\\hossam\\Documents\\GitHub\\compiler\\comp\\yacc.y"
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
/* Line 1447 of yacc.c.  */
#line 179 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



