#pragma once
#ifndef _AST_
#define _AST_
#include <iostream>
using namespace::std;
enum Node {
	intNode, floatNode, stringNode,CharNode,IdentNode,longidNode,CompNode,
	ImpNode,HedrImpNode,BdyImpNode,ImpdefNode,ClsImpDefNode,InsImpDefNode,ClsImpDefHdrNode,InsImpDefHdrNode,
	stmtListNode,ForNode,ForHdrNode,ForIniNode,LogExpNode,AsgExpNode,SmpExpNode,WhileNode,WleHdrNode,DoWhlNode
<<<<<<< HEAD
	,CondtiNode,SwitchNode,SwtBdyNode,IfHdrNode,argListNode,argNode,ProtclHdrNode,ProtclNode,ProtclBdyNode,MsgNode,MsgCalNode,SndrNode,BlockNode,ReturnNode};
<<<<<<< HEAD
enum ExpectedType {notype, inttype, floattype, stringtype };
=======
	,CondtiNode,SwitchNode,SwtBdyNode,IfHdrNode,argListNode,argNode,ProtclHdrNode,ProtclNode,ProtclBdyNode,MsgNode,MsgCalNode,SndrNode,BlockNode,ReturnNode,
	programNode,componentsListNode,componentNode,class_interface,
			class_interface_header_inheretance_Node,class_interface_header_Node,class_interface_body_Node
			,ids_list_Node,instance_variable_declaration_Node,instance_variable_declarations_Node,variable_declaration_list_Node
			,visibility_specification_private_Node,visibility_specification_protected_Node,visibility_specification_public_Node,
		variable_declaration_enum,variable_declaration_struct,variable_declaration_arrayone,variable_declaration_arrayN,variable_declaration_ID
		,EnumNode,structNode,arrayoneNode,arraybodyNode,ArrayNNode,ArrayNMultiNode,array_body2Node,typeNode,simple_type_INT
		,simple_type_CHAR,simple_typeFLOAT,simple_type_NSSTRING,simple_type_VOID,complex_type,interface_declaration_list_Node,
		class_method_declaration,instance_method_declaration,p_typeNode,method_selector_Node,parameter_Node,paramListNode};

enum ExpectedType {noType, inttype, floattype, stringType,boolType ,chartype,complextype};


>>>>>>> ec8ccbb12ba4a53303a790da0dc80d1d17c89645
=======
enum ExpectedType {noType };
>>>>>>> parent of 190b102... code generation
class TreeNode{
public:
	TreeNode * left;
	TreeNode * right;
	Node nodeType;
	ExpectedType expectedType;
	void * item;
	int lineNo;
	int colNo;
	void* currST;
};


class AST
{
public:
	AST(void);
	~AST(void);
	TreeNode * createNode(TreeNode * left, TreeNode* right, Node nt);
	TreeNode * addToLastRight(TreeNode * basic, TreeNode* newItem);
	
	

	void print(TreeNode * tn, int lvl);
};
#endif