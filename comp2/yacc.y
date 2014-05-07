%output ="yacc.cpp"
%{
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
%}

%token TRY
%token CATCH
%token NSEXception
%token NUllPointerException
%token OUtOfBoundryException
%token CAstException
%token FINALLY



%token AT_INTERFACE //@interface
%token IDENTIFIER 	//any identifier
%token SEMI_COLUMN //:
%token NSSTRING		//String keyword
%token FLOAT		//float keyword
%token CHAR		//char keyword
%token INT			//int keyword
%token SEMI_COMA	//;
%token ID			//id keyword
%token AT_PUBLIC	//@public
%token AT_PROTECTED	//@protected
%token AT_PRIVATE		//@private
%token OPEN_S			//{
%token CLOSE_S			//}
%token COMMA			//,
%token LESS_THAN 		//<
%token MORE_THAN		//>
%token AT_END			//@end
%token CONST			//const key word
%token VOID				//void keyword
%token PLUS				//+
%token MINUS			//-
%token OPEN_P			//(
%token CLOSE_P			//)
%token AT_IMPLEMENTATION	//@implementation
%token AND_AND			//&&
%token OR_OR			//||
%token STRING_VAL		//any string value starts with " or @" and ends with "
%token FLOAT_VAL		//any float value 
%token LESS_OR_EQUAL	//<=
%token CHAR_VAL			//'any_char_value'
%token INT_VAL			//any integer value
%token MORE_OR_EQUAL	//>=
%token MULTI			//*
%token EQUAL_EQUAL		//==
%token	NOT_EQUAL		//!=
%token	FOR				//for keyword
%token	EQUAL			//=
%token  DIV				//%
%token  WHILE			//while
%token  IF				//if
%token  OPEN_ARR		//[
%token  CLOSE_ARR		//]
%token  TRUE			//true
%token  FALSE			//false
%token  RETURN			//return
%token AT_PROTOCOL		//@protocol
%token DO				//do
%token DOT				//DOT
%token SYMBOL
%token SWITCH
%token BREAK
%token DEFAULT
%token CASE
%token STRUCT
%token TYPEDEF
%token ENUM
%nonassoc if_h
%nonassoc ELSE
%nonassoc AND_AND OR_OR
%nonassoc expr_1
%nonassoc STRING_VAL INT_VAL FLOAT_VAL CLOSE_ARR CHAR_VAL
%nonassoc p_type_expr_prec
%nonassoc long_id_prec;
%left PLUS MINUS
%left MULTI DIV
%nonassoc DOT
%union{
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
}
%type <r.str> IDENTIFIER
%%





program: components					{Code_Generation b;   ast->print($<tn>1,0);cout<<"program: components\n";}

;


components: components component		{cout<<"components: components component\n"; $<tn>$ = ast->addToLastRight($<tn>1, ast->createNode($<tn>2,0, componentsListNode));}
			|component					{cout<<"components: component\n";			 $<tn>$ = ast->createNode($<tn>1, 0, componentNode);}
;

component:	class_interface				{cout<<"component:	class_interface\n";			$<tn>$ = $<tn>1;}
			|class_implementation		{cout<<"component:	class_implementation\n";	$<tn>$ = $<tn>1;}
			|protocol					{cout<<"component:	protocol\n";				$<tn>$ = $<tn>1;}
;



class_interface: 
	class_interface_header class_interface_body	{
		s->insert_scope($<r.str>1,s->currScope);s->currScope=s->currScope->parent;
		cout<<"class_interface: class_interface_header class_interface_body\n";
		$<tn>$ =ast->createNode($<tn>1,$<tn>2, class_interface);}
;



 
class_interface_header: 
	AT_INTERFACE IDENTIFIER	SEMI_COLUMN IDENTIFIER	{
		i=1;

		
		datamember_offset=0;


		datamember_offset=0;

		$<r.str>$=$<r.str>2;
		if(s->check_Interface($<r.str>2)!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 
		else if(s->insertInterfaceInCurrentScope($<r.str>2,$<r.str>4)==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Not found inhertance Interface"); 
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
		cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
		$<tn>$ =ast->createNode(0,0, class_interface_header_inheretance_Node);}

	|AT_INTERFACE IDENTIFIER error IDENTIFIER 	{
		i=1;
		$<r.str>$=$<r.str>2;
		if(s->check_Interface($<r.str>2)!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;																																		
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error",":");
		$<tn>$ =ast->createNode(0,0, class_interface_header_inheretance_Node);}

	|AT_INTERFACE IDENTIFIER SEMI_COLUMN 		{
		i=1;
		$<r.str>$=$<r.str>2;
		if(s->check_Interface($<r.str>2)!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","IDENTIFIER");
		$<tn>$ =ast->createNode(0,0, class_interface_header_inheretance_Node);}

	|AT_INTERFACE IDENTIFIER IDENTIFIER	          {
		i=1;$<r.str>$=$<r.str>2;
		if(s->check_Interface($<r.str>2)!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 																				Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
		$<tn>$ =ast->createNode(0,0, class_interface_header_inheretance_Node);}	
	
	|AT_INTERFACE IDENTIFIER			{
		datamember_offset=0;
		i=1;
		datamember_offset=0;

		$<r.str>$=$<r.str>2;
		if(s->check_Interface($<r.str>2)!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		s->insertInterfaceInCurrentScope($<r.str>2,"NSObject"); 	
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
		$<tn>$ =ast->createNode(0,0, class_interface_header_Node);}
;

class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END	
														{cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														$<tn>$ = ast->createNode( ast->createNode($<tn>1,$<tn>2,class_interface_body_Node), $<tn>3, class_interface_body_Node);
														}

						|protocol_reference_list instance_variables								AT_END	
														{cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														$<tn>$ = ast->createNode( ast->createNode($<tn>1,$<tn>2,class_interface_body_Node), 0, class_interface_body_Node);
														}
						|protocol_reference_list 					interface_declaration_list	AT_END	
														{cout<<"class_interface_body:	protocol_reference_list 					interface_declaration_list	AT_END\n";
														$<tn>$ = ast->createNode( ast->createNode($<tn>1,0,class_interface_body_Node), $<tn>2, class_interface_body_Node);
														}

						|						instance_variables	interface_declaration_list	AT_END	
														{cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														$<tn>$ = ast->createNode( ast->createNode(0,$<tn>1,class_interface_body_Node), $<tn>2, class_interface_body_Node);}
						
						|protocol_reference_list 												AT_END	
														{cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														$<tn>$ = ast->createNode( ast->createNode($<tn>1,0,class_interface_body_Node), 0, class_interface_body_Node);
														}
						|						instance_variables								AT_END	
														{cout<<"class_interface_body:instance_variables		 AT_END\n";
														$<tn>$ = ast->createNode( ast->createNode(0,$<tn>1,class_interface_body_Node), 0, class_interface_body_Node);
														}
						|											interface_declaration_list	AT_END	
														{cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														$<tn>$ = ast->createNode( ast->createNode(0,0,class_interface_body_Node), $<tn>1, class_interface_body_Node);
														}
						|																		AT_END	
														{cout<<"class_interface_body:AT_END\n";
														$<tn>$ = ast->createNode( ast->createNode(0,0,class_interface_body_Node), 0, class_interface_body_Node);
														}
;

protocol_reference_list:
	LESS_THAN ids_list MORE_THAN		{cout<<"protocol_reference_list: LESS_THAN ids_list MORE_THAN\n";
										$<tn>$ = $<tn>2;
										}

;



ids_list:
	IDENTIFIER							{cout<<"ids_list:IDENTIFIER\n";									    $<tn>$ = ast->createNode(0, 0, ids_list_Node);}
	|ids_list error IDENTIFIER			{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",","); $<tn>$ = ast->addToLastRight($<tn>1,ast->createNode(0, 0, ids_list_Node));}
	|ids_list COMMA IDENTIFIER			{cout<<"ids_list:ids_list COMMA IDENTIFIER\n";						$<tn>$ = ast->addToLastRight($<tn>1,ast->createNode(0, 0, ids_list_Node));}	
;



instance_variables:
	OPEN_S	instance_variable_declarations	CLOSE_S	{cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";
														$<tn>$ =$<tn>2 }
	|OPEN_S	instance_variable_declarations	error	{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");
														$<tn>$ =$<tn>2 }
	|OPEN_S	instance_variable_declarations			{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","}");
														$<tn>$ =$<tn>2 }
;



instance_variable_declarations:
	instance_variable_declarations instance_variable_declaration		{cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";
																		$<tn>$ = ast->addToLastRight($<tn>1,ast->createNode($<tn>2, 0, instance_variable_declarations_Node));}
	|instance_variable_declaration										{cout<<"instance_variable_declarations:instance_variable_declaration\n";
																		$<tn>$ = ast->createNode($<tn>1, 0, instance_variable_declarations_Node);}
	|variable_declaration_list											{cout<<"instance_variable_declarations:variable_declaration_list\n";
																		$<tn>$ = ast->createNode($<tn>1, 0, instance_variable_declarations_Node);}
;



instance_variable_declaration:
	visibility_specification variable_declaration_list				{cout<<"instance_variable_declaration:variable_declaration_list\n";
																	$<tn>$ = ast->createNode($<tn>1, $<tn>2, instance_variable_declaration_Node);
																	}
;




variable_declaration_list: variable_declaration_list variable_declaration		
										{cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										$<tn>$ = ast->addToLastRight($<tn>1,ast->createNode($<tn>2, 0, variable_declaration_list_Node));
										}
						|variable_declaration									
										{cout<<"variable_declaration_list: variable_declaration\n";
										$<tn>$ = ast->createNode($<tn>1, 0, variable_declaration_list_Node);
										}
;


								
visibility_specification:
	AT_PRIVATE		{cout<<"visibility_specification:AT_PRIVATE\n";
					$<tn>$ = ast->createNode(0,0, visibility_specification_private_Node);}
	|AT_PROTECTED	{cout<<"visibility_specification:AT_PROTECTED\n";
						$<tn>$ = ast->createNode(0,0, visibility_specification_protected_Node);}

	|AT_PUBLIC		{cout<<"visibility_specification:AT_PUBLIC\n";
						$<tn>$ = ast->createNode(0,0, visibility_specification_public_Node);}

;



variable_declaration:
	type IDENTIFIER	SEMI_COMA									
			{



			int offset;


 				if(i==1)
 					offset=datamember_offset++;
 				else
 					offset=function_offset++;
				cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n"; 
				Type t=static_cast<Type>($<r.type>1);
				$<tn>$ = ast->createNode(0,0, variable_declaration_ID);	
				if($<r.type>1==6){
					if(s->insertVariableInCurrentScope($<r.str>2,$<r.str>1,visability,offset,$<tn>$) == 0)	
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				}
				else{
					if(s->insertVariableInCurrentScope($<r.str>2,t,visability,offset,$<tn>$) == 0) 
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				}
				Variable *v=(Variable*)$<tn>$->item;
				cout<<v->getoffset();
				$<tn>$->expectedType=$<tn>1->expectedType;}








	|type IDENTIFIER error					{yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); $<tn>$ = ast->createNode(0,0, variable_declaration_ID);
											$<tn>$->expectedType=$<tn>1->expectedType;}


	|type IDENTIFIER EQUAL simple_expr SEMI_COMA 		{
		int offset;
		if(i==1)
			offset=datamember_offset++;
 		else
 			offset=function_offset++;
		$<tn>$ = ast->createNode($<tn>4,0, variable_declaration_ID);
		Type t=static_cast<Type>($<r.type>1);
		if($<r.type>1==6){
			if(s->insertVariableInCurrentScope($<r.str>2,$<r.str>1,visability,offset,$<tn>$) == 0)	
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		}
		else{
			if(s->insertVariableInCurrentScope($<r.str>2,t,visability,offset,$<tn>$) == 0) 
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");

				$<tn>$->expectedType=$<tn>1->expectedType;
		}

		cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	
		  /*check expr type less or equal */}


	|type IDENTIFIER EQUAL simple_expr error		{yyclearin; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); $<tn>$ = ast->createNode(0,0, variable_declaration_ID);
													$<tn>$->expectedType=$<tn>1->expectedType;}

	

	|CONST type IDENTIFIER	SEMI_COMA			{

		int offset;
 		if(i==1)
 			offset=datamember_offset++;
 		else
 			offset=function_offset++;
		$<tn>$ = ast->createNode(0,0, variable_declaration_ID);
		Type t=static_cast<Type>($<r.type>2);
		if(s->insertVariableInCurrentScope($<r.str>2,t,visability,offset,$<tn>$) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");

		cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
		$<tn>$->expectedType=$<tn>2->expectedType;	}
		
		


	|CONST type IDENTIFIER	error				{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	$<tn>$ = ast->createNode(0,0, variable_declaration_ID);
												$<tn>$->expectedType=$<tn>2->expectedType;}


	|CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA	{
		Type t=static_cast<Type>($<r.type>2);if(s->insertVariableInCurrentScope($<r.str>2,t,visability) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	$<tn>$ = ast->createNode(0,0, variable_declaration_ID);
		$<tn>$->expectedType=$<tn>2->expectedType;}


	|CONST type IDENTIFIER	EQUAL simple_expr error		{yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	$<tn>$ = ast->createNode(0,0, variable_declaration_ID);
														$<tn>$->expectedType=$<tn>2->expectedType;}


	|Enum														 {cout << "Enum \n "; 				$<tn>$ = ast->createNode(0,0, variable_declaration_enum);}
	|structrule													{cout << "Struct \n "; 				$<tn>$ = ast->createNode(0,0, variable_declaration_struct);}			
	|ArrayOne                                                   {cout << "Array \n" ; 				$<tn>$ = ast->createNode(0,0, variable_declaration_arrayone);	$<tn>$->expectedType=$<tn>1->expectedType;}
	|ArrayN                                                     {cout <<"Array N \n ";				$<tn>$ = ast->createNode(0,0, variable_declaration_arrayN);		$<tn>$->expectedType=$<tn>1->expectedType;}
;



Enum: ENUM OPEN_S ids_list CLOSE_S IDENTIFIER SEMI_COMA         {$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode($<tn>3,0, EnumNode));}
	  |TYPEDEF ENUM	OPEN_S ids_list CLOSE_S IDENTIFIER SEMI_COMA {$<tn>$ = ast->addToLastRight($<tn>2, ast->createNode($<tn>4,0, EnumNode));}
;


structrule: STRUCT IDENTIFIER OPEN_S variable_declarations CLOSE_S SEMI_COMA {$<tn>$ = ast->createNode($<tn>4,0, structNode);}
          |STRUCT IDENTIFIER OPEN_S variable_declarations CLOSE_S  ids_list SEMI_COMA {$<tn>$ = ast->createNode($<tn>4,$<tn>6, structNode);}
;


variable_declarations:
	 type IDENTIFIER	SEMI_COMA									{;}
	|variable_declarations  	type IDENTIFIER	SEMI_COMA									{;}
	|type IDENTIFIER SEMI_COLUMN simple_expr SEMI_COMA				{cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";}
	|variable_declarations type IDENTIFIER	SEMI_COLUMN simple_expr SEMI_COMA				{cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";}
	|variable_declarations CONST type IDENTIFIER	SEMI_COMA							{cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";}
	|CONST type IDENTIFIER	SEMI_COMA							{cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";}
	|variable_declarations CONST type IDENTIFIER	SEMI_COLUMN simple_expr SEMI_COMA			{cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";}
	|CONST type IDENTIFIER	SEMI_COLUMN simple_expr SEMI_COMA			{cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";}
;






ArrayOne:type IDENTIFIER OPEN_ARR INT_VAL CLOSE_ARR EQUAL OPEN_S CLOSE_S SEMI_COMA  {$<tn>$ = ast->createNode(0,0, arrayoneNode);	$<tn>$->expectedType=$<tn>1->expectedType;}
	   |type IDENTIFIER OPEN_ARR INT_VAL CLOSE_ARR SEMI_COMA  {$<tn>$ = ast->createNode(0,0, arrayoneNode);	$<tn>$->expectedType=$<tn>1->expectedType;}
	   |type IDENTIFIER OPEN_ARR INT_VAL CLOSE_ARR EQUAL OPEN_S array_body CLOSE_S  SEMI_COMA {$<tn>$ = ast->createNode($<tn>8,0, arrayoneNode);	$<tn>$->expectedType=$<tn>1->expectedType;}
	   |type IDENTIFIER OPEN_ARR  CLOSE_ARR EQUAL OPEN_S array_body CLOSE_S  SEMI_COMA   {$<tn>$ = ast->createNode($<tn>7,0, arrayoneNode);	$<tn>$->expectedType=$<tn>1->expectedType;}



;


array_body:array_body COMMA expr   {$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode($<tn>3,0, arraybodyNode));}			 
		  |expr   {$<tn>$ =ast->createNode($<tn>1,0, arraybodyNode);}		  
		  |array_body COMMA OPEN_ARR INT_VAL CLOSE_ARR EQUAL expr      {$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode($<tn>7,0, arraybodyNode));}		 
		  |OPEN_ARR INT_VAL CLOSE_ARR EQUAL expr      {$<tn>$ = ast->createNode($<tn>5,0, arraybodyNode);}
;






ArrayN: type IDENTIFIER Multi EQUAL OPEN_S CLOSE_S SEMI_COMA   {$<tn>$ = ast->createNode($<tn>3,0, ArrayNNode);	$<tn>$->expectedType=$<tn>1->expectedType;}
	   |type IDENTIFIER Multi SEMI_COMA  {$<tn>$ = ast->createNode($<tn>3,0, ArrayNNode);	$<tn>$->expectedType=$<tn>1->expectedType;}
	   |type IDENTIFIER Multi EQUAL OPEN_S array_body2 CLOSE_S SEMI_COMA {$<tn>$ = ast->createNode($<tn>3,$<tn>6, ArrayNNode);	$<tn>$->expectedType=$<tn>1->expectedType;}


;


Multi: OPEN_ARR INT_VAL CLOSE_ARR  OPEN_ARR INT_VAL CLOSE_ARR {$<tn>$ = ast->createNode(0,0, ArrayNMultiNode);}
     |  Multi OPEN_ARR INT_VAL CLOSE_ARR                       {$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode(0,0, ArrayNMultiNode));}

;




array_body2: OPEN_S  array_body CLOSE_S  {$<tn>$ =  ast->createNode($<tn>2,0, array_body2Node);
															}
			|expr  {$<tn>$ =  ast->createNode($<tn>1,0, array_body2Node);
															}
		   | array_body2 COMMA OPEN_S  array_body CLOSE_S {$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode($<tn>4,0, array_body2Node));
															}
		   | array_body2 COMMA expr {$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode(0,0, array_body2Node));
															}
;


type: simple_type									{$<r.type>$=$<r.type>1;cout<<"type: simple_type\n";
													$<tn>$=ast->createNode($<tn>1,0, typeNode);	$<tn>$->expectedType=$<tn>1->expectedType}
	  |complex_type									{$<r.type>$=$<r.type>1;cout<<"type: complex_type\n";
													$<tn>$=ast->createNode($<tn>1,0, typeNode);	$<tn>$->expectedType=$<tn>1->expectedType;}
;


simple_type:
	INT												{cout<<"simple_type:int\n";$<r.type>$=1;
													$<tn>$=ast->createNode(0,0, simple_type_INT);  $<tn>$->expectedType=inttype;}
	|CHAR											{cout<<"simple_type:char\n";$<r.type>$=2;
													$<tn>$=ast->createNode(0,0, simple_type_CHAR);	$<tn>$->expectedType=chartype;}
	|FLOAT											{cout<<"simple_type:float\n";$<r.type>$=3;
													$<tn>$=ast->createNode(0,0, simple_typeFLOAT);	$<tn>$->expectedType=floattype;}
	|NSSTRING										{cout<<"simple_type:string\n";$<r.type>$=4;
													$<tn>$=ast->createNode(0,0, simple_type_NSSTRING);	$<tn>$->expectedType=stringtype;}
	|VOID											{cout<<"simple_type:void\n";$<r.type>$=5;
													$<tn>$=ast->createNode(0,0, simple_type_VOID);	$<tn>$->expectedType=voidtype;}
	
;



complex_type: IDENTIFIER MULTI		{
		$<r.type>$=6;$<r.str>$=$<r.str>1;
		if(s->check_var_type($<r.str>1)==0)	
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","type is undefined");
		cout<<"complex_type:	IDENTIFIER	MULTI\n";
		$<tn>$=ast->createNode(0,0, complex_type);
			$<tn>$->expectedType=complextype;}
;


interface_declaration_list:
	interface_declaration_list interface_declaration	{i=1;cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
														$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode($<tn>2,0, interface_declaration_list_Node));}
	|interface_declaration					{i=1;cout<<"interface_declaration_list:interface_declaration\n";	$<tn>$ = ast->createNode($<tn>1,0, interface_declaration_list_Node);}
;



interface_declaration:
	class_method_declaration									{cout<<"interface_declaration: class_method_declaration\n";
																	$<tn>$ = $<tn>1;}
	|instance_method_declaration								{cout<<"interface_declaration: instance_method_declaration\n";
																	$<tn>$ = $<tn>1;}
;


class_method_declaration:
	PLUS p_type method_selector SEMI_COMA	 {
	Type t=static_cast<Type>($<r.type>2);
	if(s->insertFunctionInCurrentScope($<r.str>3,t,param_list) == 0) 
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
	param_list.clear();
	cout<<"class_method_declaration: PLUS p_type method_selector SEMI_COMA\n";
	$<tn>$ = ast->createNode($<tn>2,$<tn>3, class_method_declaration);
	$<tn>$->expectedType=$<tn>2->expectedType;}

	|PLUS p_type method_selector error		 {
		yyclearin;Type t=static_cast<Type>($<r.type>2);
		if(s->insertFunctionInCurrentScope($<r.str>3,t,param_list) == 0)
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");		$<tn>$ = ast->createNode($<tn>2,$<tn>3, class_method_declaration);
		$<tn>$->expectedType=$<tn>2->expectedType;}



	|PLUS method_selector SEMI_COMA			{
		if(s->insertFunctionInCurrentScope($<r.str>2,voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		cout<<"class_method_declaration: PLUS method_selector SEMI_COMA\n";	$<tn>$ = ast->createNode(0,$<tn>2, class_method_declaration);
		}


	|PLUS method_selector error				{
		yyclearin;
		if(s->insertFunctionInCurrentScope($<r.str>2,voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");		$<tn>$ = ast->createNode(0,$<tn>2, class_method_declaration);}
;



instance_method_declaration:
	MINUS p_type method_selector SEMI_COMA		{
		Type t=static_cast<Type>($<r.type>2);
		if(s->insertFunctionInCurrentScope($<r.str>3,t,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS p_type method_selector	SEMI_COMA\n";	$<tn>$ = ast->createNode($<tn>2,$<tn>3, instance_method_declaration);
		$<tn>$->expectedType=$<tn>2->expectedType;}

	|MINUS	method_selector	SEMI_COMA			{
		if(s->insertFunctionInCurrentScope($<r.str>2,voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS method_selector SEMI_COMA\n";	$<tn>$ = ast->createNode(0,$<tn>2, instance_method_declaration);}
	|MINUS p_type method_selector	error 		{yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
												$<tn>$ = ast->createNode($<tn>2,$<tn>3, instance_method_declaration);}
	|MINUS method_selector error 				{yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
													$<tn>$ = ast->createNode(0,$<tn>2, instance_method_declaration);}
	

p_type:
	OPEN_P type CLOSE_P											{$<r.type>$=$<r.type>2;cout<<"p_type : OPEN_P type CLOSE_P\n";
																$<tn>$ = ast->createNode(0,0, p_typeNode);	$<tn>$->expectedType=$<tn>2->expectedType;}
	|error type CLOSE_P											{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");
																$<tn>$ = ast->createNode(0,0, p_typeNode);	$<tn>$->expectedType=$<tn>2->expectedType;}
	|OPEN_P type error											{yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");
																$<tn>$ = ast->createNode(0,0, p_typeNode);	$<tn>$->expectedType=$<tn>2->expectedType;}
;



method_selector:

	IDENTIFIER SEMI_COLUMN		{Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;} parameter_list	{i=3;s->currScope=s->currScope->parent;$<r.str>$=$<r.str>1;cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
								$<tn>$ = ast->createNode(0,0, method_selector_Node);			}
	|IDENTIFIER									{$<r.str>$=$<r.str>1;cout<<"method_selector:IDENTIFIER \n";
												$<tn>$ = ast->createNode(0,0, method_selector_Node);		}

	IDENTIFIER SEMI_COLUMN		{$<r.str>$=$<r.str>1;Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;} parameter_list	{i=3;s->currScope=s->currScope->parent;$<r.str>$=$<r.str>1;cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
								$<tn>$ = ast->createNode(0,0, method_selector_Node);}
	|IDENTIFIER									{
												$<r.str>$=$<r.str>1;
												$<r.str>$=$<r.str>1;cout<<"method_selector:IDENTIFIER \n";
												$<tn>$ = ast->createNode(0,0, method_selector_Node);}

;



parameter_list:	parameter_list	SEMI_COLUMN	parameter						{cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																			$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode($<tn>3,0, paramListNode));}
				|parameter_list	IDENTIFIER SEMI_COLUMN	parameter			{cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																			$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode($<tn>4,0, paramListNode));}
				|parameter_list	IDENTIFIER error	parameter				{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");
																			$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode($<tn>4,0, paramListNode));}
				|parameter_list	IDENTIFIER 	parameter						{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
																			$<tn>$ = ast->addToLastRight($<tn>1, ast->createNode($<tn>3,0, paramListNode));}
				|parameter													{cout<<"parameter_list: parameter\n";
																			$<tn>$ =ast->createNode($<tn>1,0, paramListNode);}
;


parameter:  p_type IDENTIFIER								 {
	add_param($<r.type>1);
	Type t=static_cast<Type>($<r.type>1);
	if(s->insertVariableInCurrentScope($<r.str>2,t,1) == 0) 
		cout<<"error redefine variable";

	cout<<"parameter: p_type IDENTIFIER\n";	$<tn>$ = ast->createNode($<tn>1,0, parameter_Node);	$<tn>$->expectedType=$<tn>1->expectedType;

	param_list1.push_back($<r.str>2);
	}

;



try_catch:
	TRY block_body catch_statment                {cout<<"statment: try_catch_statment\n";}


catch_statment :
	CATCH OPEN_P NSEXception Exception_type CLOSE_P block_body	   catch_statment		{cout<<"statment: catch_statment\n";}
	|FINALLY block_body																{cout<<"statment: finally_TRY_CATCH\n";}

Exception_type :
	NUllPointerException				{cout<<"Exception NullPointerException";}
	|OUtOfBoundryException				{cout<<"Exception OutOfBoundryException";}
	|CAstException						{cout<<"Exception CastException";}






class_implementation:
	class_implementation_header class_implementation_body          {
		$<tn>$=ast->createNode($<tn>1,$<tn>2,ImpNode);
		$<tn>$->currST=s->currScope;
		s->insert_scope1($<r.str>1,s->currScope); s->currScope=s->currScope->parent;
		cout<<"class_implementation: class_implementation_header class_implementation_body\n";}
;


class_implementation_header: 
	AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER		{
		$<tn>$=ast->createNode(0,0,HedrImpNode);
		Interface_name=$<r.str>2;
		i=2;
		$<r.str>$=$<r.str>2;
		if(s->check_Implementation_Interface($<r.str>2)==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->check_Implementation($<r.str>2)!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redfine Implementation"); 
		else if(s->insertImplementationInCurrentScope($<r.str>2,$<r.str>4)==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation Inhertance not found"); 
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";}
	|AT_IMPLEMENTATION IDENTIFIER error IDENTIFIER			{
		i=2;$<r.str>$=$<r.str>2;
		if(s->check_Implementation_Interface($<r.str>2)==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope($<r.str>2)==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");}


	|AT_IMPLEMENTATION IDENTIFIER  IDENTIFIER			{
		i=2;$<r.str>$=$<r.str>2;
		if(s->check_Implementation_Interface($<r.str>2)==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope($<r.str>2)==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");}
	|AT_IMPLEMENTATION IDENTIFIER 					{
		$<tn>$=ast->createNode(0,0,HedrImpNode);
		//Interface_name=new char[30];
		//	cout<<$<r.str>2;
		//strcat(Interface_name,$<r.str>2);
		//cout<<Interface_name;
		i=2;$<r.str>$=$<r.str>2;
		if(s->check_Implementation_Interface($<r.str>2)==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope($<r.str>2)==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER \n";
																}
;


class_implementation_body:
	instance_variables	implementation_definition_list	AT_END	{$<tn>$=ast->createNode($<tn>1,$<tn>2,BdyImpNode);cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";}

	|instance_variables					AT_END					{$<tn>$=ast->createNode($<tn>1,0,BdyImpNode);cout<<"class_implementation_body: instance_variables AT_END\n";}
	|implementation_definition_list				AT_END			{$<tn>$=ast->createNode(0,$<tn>1,BdyImpNode);cout<<"class_implementation_body:	implementation_definition_list	AT_END\n";}


;




implementation_definition_list:
	implementation_definition_list implementation_definition	{$<tn>$=ast->addToLastRight($<tn>1,ast->createNode($<tn>2,0,ImpdefNode));i=3;cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
	|implementation_definition	{								$<tn>$=ast->createNode($<tn>1,0,ImpdefNode);i=3;cout<<"implementation_definition_list: implementation_definition\n";}
;

implementation_definition:
	class_implementation_definition			{$<tn>$=$<tn>1;cout<<"implementation_definition: class_implementation_definition	\n";}
	|instance_implementation_definition		{$<tn>$=$<tn>1;cout<<"implementation_definition: instance_implementation_definition \n";}


;


class_implementation_definition:
	class_implementation_definition_header block_body {
	$<tn>$=ast->createNode($<tn>1,$<tn>2,ClsImpDefNode);i=2;

	cout<<"class_implementation_definition: class_implementation_definition_header block_body";
	
		 

	s->insert_scope($<r.str>1,s->currScope);s->currScope=s->currScope->parent;
	}

;


class_implementation_definition_header:
	PLUS p_type method_selector			{$<tn>$=ast->createNode($<tn>2,$<tn>3,ClsImpDefHdrNode);cout<<"class_implementation_definition_header: PLUS p_type method_selector\n";
										$<tn>$->expectedType=$<tn>2->expectedType;		  }
	|PLUS method_selector				{$<tn>$=ast->createNode(0,$<tn>2,ClsImpDefHdrNode);cout<<"class_implementation_definition_header:  PLUS	method_selector\n";
										 }
	PLUS p_type method_selector			{$<r.str>$=$<r.str>3;Type t=static_cast<Type>($<r.type>2);
										if(s->insertFunctionInCurrentScope($<r.str>3,t,param_list) == 0) 
												Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
										Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
										insert_param();
										param_list1.clear();param_list.clear();
										$<tn>$=ast->createNode($<tn>2,$<tn>3,ClsImpDefHdrNode);cout<<"class_implementation_definition_header: PLUS p_type method_selector\n";}
	|PLUS method_selector				{$<tn>$=ast->createNode($<tn>2,0,ClsImpDefHdrNode);cout<<"class_implementation_definition_header:  PLUS	method_selector\n";}
;




instance_implementation_definition:
	instance_implementation_definition_header block_body	{s->insert_scope($<r.str>1,s->currScope);s->currScope=s->currScope->parent;$<tn>$ = ast->createNode($<tn>1,$<tn>2,InsImpDefNode);i=2;$<r.str>$=$<r.str>1;cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";}	
;

instance_implementation_definition_header:
	MINUS p_type method_selector			{$<tn>$ = ast->createNode($<tn>2,$<tn>3,InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS p_type	method_selector\n";
											$<tn>$->expectedType=$<tn>2->expectedType;}
	|MINUS	method_selector					{$<tn>$ = ast->createNode(0,$<tn>2,InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS method_selector\n";}
	MINUS p_type method_selector			{ $<r.str>$=$<r.str>3;Type t=static_cast<Type>($<r.type>2);
											  if(s->insertFunctionInCurrentScope($<r.str>3,t,param_list) == 0) 
												Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");\
											  Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
											  insert_param();
											  param_list1.clear();param_list.clear();
											 ast->createNode($<tn>2,$<tn>3,InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS p_type	method_selector\n";}
	|MINUS	method_selector					{$<tn>$ = ast->createNode($<tn>2,0,InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS method_selector\n";}
;




statement_list:
		statement_list statement		{$<tn>$ = ast->addToLastRight($<tn>1,ast->createNode($<tn>2,0,stmtListNode));cout<<"statement_list: statement_list statement\n";}
		|statement						{$<tn>$ = ast->createNode($<tn>1,0,stmtListNode);cout<<"statement_list: statement\n";}
;



statement:
	loop_statement					{$<tn>$=$<tn>1;cout<<"statement: loop_statement\n";}
	|conditional_statement			{$<tn>$=$<tn>1;cout<<"statement: conditional_statement\n";}
	|expr SEMI_COMA					{$<tn>$=$<tn>1;cout<<"statement: expr\n";}
	|variable_declaration			{$<tn>$=$<tn>1;cout<<"statement: variable_declaration\n";}//can not be used unless it is inside block
	|{Scope *new_scope = new Scope(); new_scope->parent=s->currScope;s->currScope=new_scope;}		block_body			{$<tn>$=$<tn>1;s->currScope=s->currScope->parent;cout<<"statement: block_body\n";}
	|return_statement				{$<tn>$=$<tn>1;cout<<"statement: return_statement\n";}
	|try_catch 
;




return_statement:
	RETURN expr SEMI_COMA			{$<tn>$=ast->createNode($<tn>2,0,ReturnNode);cout<<"return_statement: RETURN expr\n";}
	|RETURN expr error				{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");}
;
loop_statement:
	for_loop					{$<tn>$=$<tn>1;cout<<"loop_statement: for_loop\n";}
	|while_loop					{$<tn>$=$<tn>1;cout<<"loop_statement: while_loop\n";}
	|do_while_loop				{$<tn>$=$<tn>1;cout<<"loop_statement: do_while_loop\n";}
;
for_loop:
	for_loop_header statement			{$<tn>$=ast->createNode($<tn>1,$<tn>2,ForNode);cout<<"for_loop: for_loop_header statement\n";}
;



for_loop_header:
	FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P {	
		$<tn>$=ast->createNode($<tn>3,ast->createNode($<tn>5,$<tn>7,ForHdrNode),ForHdrNode);
		
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";}


	|FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA expr	error	
		{yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");}
	|FOR  for_initializer SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P	
		{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");}
	|FOR  error for_initializer SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P
		{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");}

	|FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA expr	CLOSE_P {
		$<tn>$=ast->createNode(0,ast->createNode($<tn>4,$<tn>6,ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";}



	|FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA expr error	
		{yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",")");}
	|FOR SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P	
		{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");}
	|FOR error SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P	
		{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");}



	|FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA expr CLOSE_P	
		{$<tn>$=ast->createNode($<tn>3,ast->createNode(0,$<tn>6,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA expr CLOSE_P\n";}


	|FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA CLOSE_P	
		{$<tn>$=ast->createNode($<tn>3,ast->createNode($<tn>5,0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA CLOSE_P \n";}
	|FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA CLOSE_P	
		{$<tn>$=ast->createNode($<tn>3,ast->createNode(0,0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA CLOSE_P	\n";}
	|FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA CLOSE_P	
		{$<tn>$=ast->createNode(0,ast->createNode($<tn>4,0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA CLOSE_P\n";}
	|FOR OPEN_P SEMI_COMA SEMI_COMA expr CLOSE_P	
		{$<tn>$=ast->createNode(0,ast->createNode(0,$<tn>5,ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA SEMI_COMA expr CLOSE_P";}
	
	|FOR OPEN_P SEMI_COMA SEMI_COMA CLOSE_P	
		{$<tn>$=ast->createNode(0,0,ForHdrNode);	
		cout<<"for_loop_hearder: FOR OPEN_P SEMI_COMA SEMI_COMA CLOSE_P	\n";}
;



for_initializer:
	INT IDENTIFIER EQUAL expr			{$<tn>$=ast->createNode($<tn>4,0,ForIniNode);if(s->insertVariableInCurrentScope($<r.str>2,intType,1) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error","Variable not found");cout<<"for_initializer: INT ID EQUAL expr\n";}
	|INT IDENTIFIER  expr				{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");}
	|INT IDENTIFIER error expr			{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");}
	|IDENTIFIER EQUAL expr				{$<tn>$=ast->createNode($<tn>3,0,ForIniNode);cout<<"for_initializer: ID EQUAL expr\n";}
	|IDENTIFIER  expr					{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");}
	|IDENTIFIER error expr				{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");}
	|IDENTIFIER							{$<tn>$=ast->createNode(0,0,ForIniNode);cout<<"for_initializer: ID\n";}
;


logic_expr:
	 expr LESS_THAN expr				{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";}
	|expr MORE_THAN expr				{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";}
	|expr LESS_OR_EQUAL expr			{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";}
	|expr MORE_OR_EQUAL expr			{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";}
	|expr EQUAL_EQUAL expr				{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";}
	|NOT_EQUAL expr						{$<tn>$=ast->createNode($<tn>2,0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";}
	|OPEN_P logic_expr CLOSE_P			{$<tn>$=ast->createNode($<tn>2,0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";}
	|logic_expr AND_AND logic_expr		{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";}
	|logic_expr OR_OR logic_expr		{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";}
;
expr:
	assign_expr							{$<tn>$=$<tn>1;cout<<"expr:assign_expr\n";	}
	|simple_expr						{$<tn>$=$<tn>1;cout<<"expr:simple_expr\n";	$<tn>$->expectedType=$<tn>1->expectedType;}
;
logic_expr2:
	 expr2 LESS_THAN expr2					{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";}
	|expr2 MORE_THAN expr2					{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";}
	|expr2 LESS_OR_EQUAL expr2				{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";}
	|expr2 MORE_OR_EQUAL expr2				{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";}
	|expr2 EQUAL_EQUAL expr2				{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";}
	|NOT_EQUAL expr2						{$<tn>$=ast->createNode($<tn>2,0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";}
	|OPEN_P logic_expr2 CLOSE_P				{$<tn>$=ast->createNode($<tn>2,0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";}
	|logic_expr2 AND_AND logic_expr2		{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";}
	|logic_expr2 OR_OR logic_expr2			{$<tn>$=ast->createNode($<tn>1,$<tn>3,LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";}
	|error expr2							{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","LOGIC EXPR");}
	|OPEN_P logic_expr2 error				{yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");}
	|error logic_expr2 CLOSE_P				{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");}
;


expr2:
	simple_expr							{$<tn>$=$<tn>1;cout<<"expr:simple_expr\n";	$<tn>$->expectedType=$<tn>1->expectedType;}
;

assign_expr: 
	long_id EQUAL simple_expr			{$<tn>$=ast->createNode($<tn>1,$<tn>3,AsgExpNode);cout<<"assign_expr:long_id EQUAL simple_expr\n";
										}
;


long_id:
	long_id DOT IDENTIFIER				{
		var.push($<r.str>3);				
		$<tn>$ = ast->addToLastRight($<tn>1,ast->createNode(0,0,longidNode));
		cout<<"long_id: long_id.IDENTIFIER\n";}
	//|long_id DOT message_call			{cout<<"long_id: long_i d.IDENTIFIER\n";}
	|message_call						{$<tn>$=$<tn>1;cout<<"long_id: long_id.message_call\n";}
	|IDENTIFIER		 %prec long_id_prec{$<tn>$=ast->createNode(0,0,IdentNode);
		if(strcmp(lexer->YYText(),".")==0) 
			var.push($<r.str>1);
		if(s->getVariableFromCurrentScope($<r.str>1)==0) {
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable Not found ");
		}
		cout<<"long_id:IDENTIFIER\n";}
;





simple_expr:
	//message_call				{cout<<"simple_expr:message_call\n";}
	STRING_VAL					{$<tn>$=ast->createNode(0,0,stringNode);    $<tn>$->expectedType=stringtype;
									cout<<"simple_expr:STRING_VAL\n";
									$<tn>$->item=(void *)yylval.r.str;}
	
	

	
	|INT_VAL					{$<tn>$=ast->createNode(0,0,intNode);	 $<tn>$->expectedType=inttype;   $<tn>$->item=(void *)yylval.r.i;
								 cout<<" \n\n\n\n\n\n\n\n\n"<<(int)$<tn>$->item<<" \n\n\n\n\n\n\n\n\n";
									}





	|FLOAT_VAL					{$<tn>$=ast->createNode(0,0,floatNode);cout<<"simple_expr:FLOAT_VAL\n";	$<tn>$->expectedType=floattype;
								// $<tn>$->item=(void *)yylval.r.f;
								}
	STRING_VAL					{$<tn>$=ast->createNode(0,0,stringNode);  
								cout<<"simple_expr:STRING_VAL\n";}



	|CHAR_VAL					{$<tn>$=ast->createNode(0,0,CharNode);cout<<"simple_expr:CHAR_VAL\n";	$<tn>$->expectedType=chartype;
								 $<tn>$->item=(void *)yylval.r.c;}
	//|IDENTIFIER			%prec expr_1	{cout<<"simple_expr:IDENTIFIER\n";}
	|long_id					{
		
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
	cout<<"simple_expr:long_id\n";}

	|simple_expr PLUS simple_expr			{$<tn>$=ast->createNode($<tn>1,$<tn>3,SmpExpPlusNode);cout<<"simple_expr:expr PLUS expr\n";
											}
	|simple_expr MINUS simple_expr			{$<tn>$=ast->createNode($<tn>1,$<tn>3,SmpExpMinusNode);cout<<"simple_expr:expr MINUS expr\n";}
	|simple_expr MULTI simple_expr			{$<tn>$=ast->createNode($<tn>1,$<tn>3,SmpExpMultiNode);cout<<"simple_expr:expr MULTI expr\n";}
	|simple_expr DIV simple_expr			{$<tn>$=ast->createNode($<tn>1,$<tn>3,SmpExpDivNode);cout<<"simple_expr:expr DIV expr\n";}

	|OPEN_P simple_expr CLOSE_P				{$<tn>$=ast->createNode($<tn>2,0,SmpExpNode);cout<<"simple_expr:OPEN_P expr CLOSE_P\n";}
	|p_type simple_expr    	 %prec p_type_expr_prec {$<tn>$=ast->createNode(0,0,SmpExpNode);cout<<"expr:p_type expr\n";}//casting
;


block_body:
	OPEN_S statement_list CLOSE_S			{$<tn>$=ast->createNode($<tn>2,0,BlockNode); cout<<"block_body:OPEN_S statement_list	CLOSE_S\n";}
	|OPEN_S CLOSE_S							{$<tn>$=ast->createNode(0,0,BlockNode);cout<<"block_body:OPEN_S CLOSE_S\n";}
;


while_loop:
	while_loop_header statement			{$<tn>$=ast->createNode($<tn>1,$<tn>2,WhileNode);cout<<"while_loop:while_loop_header statement\n";}
;
while_loop_header:
	WHILE OPEN_P logic_expr CLOSE_P			{$<tn>$=ast->createNode($<tn>3,0,WleHdrNode);cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";}
	|WHILE OPEN_P logic_expr error			{yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");}
	|WHILE  logic_expr CLOSE_P				{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");}
	|WHILE error logic_expr CLOSE_P			{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");}
;
do_while_loop:
	DO statement while_loop_header SEMI_COMA	{$<tn>$=ast->createNode($<tn>2,$<tn>3,DoWhlNode);cout<<"do_while_loop_header: DO statement while_loop_header SEMI_COMA\n";}
conditional_statement:
	if_header statement		%prec if_h	{$<tn>$=ast->createNode($<tn>1,$<tn>2,CondtiNode);cout<<"conditional_statement: if_header statement\n";}
	|if_header statement ELSE statement		{
		$<tn>$=ast->createNode($<tn>1,$<tn>2,CondtiNode);
		cout<<"conditional_statement: if_header statement\n";}
	|switch 					{$<tn>$=ast->createNode($<tn>1,0,CondtiNode);cout<<"conditional_statement: switch\n";}
;
switch:
	SWITCH OPEN_P switch_statement CLOSE_P OPEN_S switch_body CLOSE_S {$<tn>$=ast->createNode($<tn>3,$<tn>6,SwitchNode);cout<<"switch statment";}
	|SWITCH error switch_statement CLOSE_P OPEN_S switch_body CLOSE_S  {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");}
	|SWITCH OPEN_P switch_statement error OPEN_S switch_body CLOSE_S  {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");}
	|SWITCH OPEN_P switch_statement CLOSE_P OPEN_S switch_body error  {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");}
	|SWITCH OPEN_P switch_statement CLOSE_P error switch_body CLOSE_S  {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","{");}



	



switch_body:
CASE OPEN_P case_statement CLOSE_P SEMI_COLUMN statement BREAK SEMI_COMA switch_body {
									$<tn>$=ast->createNode($<tn>3,ast->createNode($<tn>6,$<tn>9,SwtBdyNode),SwtBdyNode);
										
												cout<<"case statment";}
|CASE OPEN_P case_statement CLOSE_P SEMI_COLUMN statement error SEMI_COMA switch_body {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");}
|DEFAULT SEMI_COLUMN statement BREAK SEMI_COMA {$<tn>$=ast->createNode(0,$<tn>3,SwtBdyNode);cout<<"default statment";}
|DEFAULT SEMI_COLUMN statement error SEMI_COMA {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");}
;


switch_statement:
	logic_expr  					{$<tn>$=$<tn>1;}
	|expr       					{$<tn>$=$<tn>1;}
;

case_statement:
logic_expr2  						{$<tn>$=$<tn>1;}
|expr2       						{$<tn>$=$<tn>1;}
;
if_header:
	IF OPEN_P logic_expr CLOSE_P		{$<tn>$=ast->createNode($<tn>3,0,IfHdrNode);cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";}
	|IF OPEN_P logic_expr error			{yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");}
	|IF  logic_expr CLOSE_P				{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");}
	|IF error logic_expr CLOSE_P		{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");}
;
message_call:
	OPEN_ARR sender message CLOSE_ARR		{$<tn>$=ast->createNode($<tn>2,$<tn>3,MsgCalNode);cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";}
;
sender:
	message_call				{$<tn>$ = ast->createNode($<tn>1,0,SndrNode);cout<<"sender: message_call\n";}
	|IDENTIFIER					{cout<<"sender: IDENTIFIER\n";}
;
message:
	IDENTIFIER								{cout<<"message: IDENTIFIER\n";}
	|IDENTIFIER SEMI_COLUMN argument_list	{$<tn>$ = ast->createNode($<tn>3,0,MsgNode);cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";}
;
argument_list:
	argument_list argument					{$<tn>$ = ast->addToLastRight($<tn>1,ast->createNode($<tn>2,0,argListNode));cout<<"argument_list: argument_list argument\n";}
	|argument								{$<tn>$ = ast->createNode($<tn>1,0,argListNode);cout<<"argument_list: argument\n";}
;
argument:
	SEMI_COLUMN simple_expr					{$<tn>$ = ast->createNode($<tn>2,0,argNode);cout<<"argument: SEMI_COLUMN simple_expr\n";}
	|error simple_expr						{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");} 
	|IDENTIFIER SEMI_COLUMN simple_expr		{$<tn>$ = ast->createNode($<tn>3,0,argNode);cout<<"argument: IDENTIFIER SEMI_COLUMN simple_expr\n";}
	|IDENTIFIER  simple_expr				{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");}
	|IDENTIFIER error simple_expr			{Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");}
;
protocol: protocol_header protocol_body		{
	$<tn>$ = ast->createNode($<tn>1,$<tn>2,ProtclNode);
	s->insert_scope1($<r.str>1,s->currScope);s->currScope=s->currScope->parent;
	cout<<"protocol: protocol_header protocol_body\n";}
;
protocol_header:
		AT_PROTOCOL IDENTIFIER	{
		$<tn>$ = ast->createNode(0,0,ProtclHdrNode);
		$<r.str>$=$<r.str>2;
		if(s->check_Interface($<r.str>2)!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","there is inteface in the same name");
		if( s->insertProtocolInCurrentScope($<r.str>2)==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Protocol");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
		cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";}
;
protocol_body:	
	protocol_reference_list interface_declaration_list	AT_END	
		{$<tn>$ = ast->createNode($<tn>1,$<tn>2,ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list interface_declaration_list AT_END\n";}
	|interface_declaration_list AT_END {
		$<tn>$ = ast->createNode($<tn>1,0,ProtclBdyNode);
		cout<<"protocol_body: interface_declaration_list AT_END\n";}
	|protocol_reference_list AT_END {
		$<tn>$ = ast->createNode($<tn>1,0,ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list AT_END \n";}
	|AT_END	{
		$<tn>$ = ast->createNode(0,0,ProtclBdyNode);
		cout<<"protocol_body:	AT_END\n";}
%%
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
