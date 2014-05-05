%{
	#include "yacc.hpp"
	#include <stdlib.h>
	int row=1;
	int column=1;
%}
%option c++
%option noyywrap
%option yylineno
digit						[0-9]
Identifier              [a-zA-Z_][a-zA-Z0-9_]*
Integer					[1-9][0-9]*|0		
Float					([+-]?[0-9]+"."[0-9]+["f"]?)|[0-9]["f"]?		
Single_line_comment		(\/\/)+[^\n]*
Symbol                  [!@#$^&?~]|["/"]|["\"]|["|"]
%%






"try"							{cout<<"lex : try \n"; return TRY;}
"catch"							{cout<<"lex : catch \n"; return CATCH;}
"NSException"					{cout<<"lex : NSException \n"; return NSEXception;}
"NullPointerException"			{cout<<"lex : NullPointerException \n"; return NUllPointerException;}
"OutOfBoundryException"			{cout<<"lex : OutOfBoundryException \n"; return OUtOfBoundryException;}
"CastException"					{cout<<"lex : CastException \n"; return CAstException;}
"finally"						{cout<<"lex : finally \n"; return FINALLY;}








"break"				{			column+=5;	yylval.r.myColno=column;								return BREAK;}
"@interface"		{			column+=10;	yylval.r.myColno=column;								return AT_INTERFACE;}
"@protocol"			{			column+=9;	yylval.r.myColno=column;								return AT_PROTOCOL;}
":"					{	        column+=1;	yylval.r.myColno=column;								return SEMI_COLUMN;}
"NSString"			{			column+=8;	yylval.r.myColno=column;								return NSSTRING;}
"float"				{			column+=5;	yylval.r.myColno=column;								return FLOAT;}
"char"				{			column+=4;	yylval.r.myColno=column;								return CHAR;}
"int"				{			column+=3;	yylval.r.myColno=column;								return INT;}
";"					{			column+=1;	yylval.r.myColno=column;								return SEMI_COMA;}
"."					{			column+=1;	yylval.r.myColno=column;								return DOT;}
"id"				{			column+=2;	yylval.r.myColno=column;								return ID;}
"@public"			{			column+=7;	yylval.r.myColno=column;								return AT_PUBLIC;}
"@protected"		{			column+=10;	yylval.r.myColno=column;								return AT_PROTECTED;}
"@private"			{			column+=8;	yylval.r.myColno=column;								return AT_PRIVATE;}
"{"					{			column+=1;	yylval.r.myColno=column;									return OPEN_S;}
"}"					{			column+=1;	yylval.r.myColno=column;						return CLOSE_S;}
","					{			column+=1;	yylval.r.myColno=column;		return COMMA;}
"<"					{			column+=1;	yylval.r.myColno=column;	return LESS_THAN;}
">"					{			column+=1;	yylval.r.myColno=column;							return MORE_THAN;}
"@end"				{			column+=4;	yylval.r.myColno=column;									return AT_END;}
"const"				{			column+=5;	yylval.r.myColno=column;							return CONST;}
"void"				{			column+=4;	yylval.r.myColno=column;							return VOID;}
"+"					{			column+=1;	yylval.r.myColno=column;								return PLUS;}
"-"					{			column+=1;	yylval.r.myColno=column;								return MINUS;}
"("					{									column+=1;	yylval.r.myColno=column;		return OPEN_P;}
")"					{											 column+=1;	yylval.r.myColno=column;return CLOSE_P;}
"@implementation"	{							column+=15;	yylval.r.myColno=column;	return AT_IMPLEMENTATION;}
"&&"				{										column+=2;	yylval.r.myColno=column;	return AND_AND;}
"||"				{									column+=2;	yylval.r.myColno=column;		return OR_OR;}
"<="				{										column+=2;	yylval.r.myColno=column;	return LESS_OR_EQUAL;}
">="				{									column+=2;	yylval.r.myColno=column;		return MORE_OR_EQUAL;}
"*"					{			column+=1;	yylval.r.myColno=column;								return MULTI;}
"=="				{						column+=2;	yylval.r.myColno=column;					return EQUAL_EQUAL;}
"!="				{								column+=2;	yylval.r.myColno=column;			return NOT_EQUAL;}
"for"				{				column+=3;	yylval.r.myColno=column;			return FOR;}
"="					{			column+=1;	yylval.r.myColno=column;								return EQUAL;}
"%"					{			column+=1;	yylval.r.myColno=column;								return DIV;}
"while"				{			column+=5;	yylval.r.myColno=column;			return WHILE;}
"if"				{			column+=2;	yylval.r.myColno=column;			return  IF;}
"else"				{			column+=4;	yylval.r.myColno=column;	return ELSE;}
"["					{			column+=1;	yylval.r.myColno=column;			return OPEN_ARR;}
"]"					{			column+=1;	yylval.r.myColno=column;	 return CLOSE_ARR;}
"struct"            {           column+=6;	yylval.r.myColno=column;      return STRUCT;      }
"typedef"           {           column+=7;	yylval.r.myColno=column;      return TYPEDEF;        }
"switch"            {           column+=6;	yylval.r.myColno=column;      return SWITCH;      }
"case"              {			column+=4;	yylval.r.myColno=column;      return CASE;}
"default"			{			column+=7;	yylval.r.myColno=column;      return DEFAULT;}
"do"				{			column+=2;	yylval.r.myColno=column;      return DO;}
"enum"              {			column+=4;	yylval.r.myColno=column;      return ENUM;}
"\n"				{			row++;
								column=1;
								yylval.r.myLineNo=row;
								yylval.r.myColno=column;}
"true"				{			column+=4;	yylval.r.myColno=column;								return TRUE;}
"false"				{			column+=5;	yylval.r.myColno=column;						return FALSE;}
"return"			{			column+=6;	yylval.r.myColno=column;							return RETURN;}
\'[a-zA-z]\'		{			column+=1;	yylval.r.myColno=column;	return CHAR_VAL;}
\".*\"				{			column+=strlen(yytext);;	yylval.r.myColno=column;				return STRING_VAL;}



{Identifier}		{			column += strlen(yytext);
								yylval.r.str = new char[255];
								yylval.r.str[0] = '\0';
								strcpy(yylval.r.str, yytext);
								yylval.r.myLineNo = row;
								yylval.r.myColno = column;
								return IDENTIFIER;}
{Integer}			{
								column+=strlen(yytext);	yylval.r.myColno=column;
								int i = atoi(yytext);
								yylval.r.i = i;
								return INT_VAL;
					}
{Float}				{
								column+=strlen(yytext);	yylval.r.myColno=column;
								float f = atof(yytext);
								return FLOAT_VAL;
					}
{Single_line_comment}		{
								cout<<"\t"<<yytext<<':'<<" it is a Single Line Comment \n";
							}
{Symbol}			{column+=1;	yylval.r.myColno=column; ;return SYMBOL;}
" "					{column+=1;	yylval.r.myColno=column; }
"/*" {
		 register int c;
     
                     for ( ; ; )
                         {
                         while ( (c = yyinput()) != '*' &&
                                 c != EOF )
								 {
								  if (c == '\n') {row++;}
								  }
                             ;    /* eat up text of comment */
                           if (c == '\n') {row++;}
                         if ( c == '*' )
                             {
                             while ( (c = yyinput()) == '*' )
                                 ;
                             if ( c == '/' )
                                 break;    /* found the end */
                             }
     
                         if ( c == EOF )
                             {
                            
                             break;
                             }
                         }
						 cout << "multi comment line ";
						 yylval.r.myLineNo=row;
						 cout << row;
     }
%%
