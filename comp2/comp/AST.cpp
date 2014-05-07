#include "AST.h"

char* arr [] =	{"intNode", "floatNode", "stringNode","CharNode","IdentNode","longidNode","CompNode",
	"ImpNode","HedrImpNode","BdyImpNode","ImpdefNode","ClsImpDefNode","InsImpDefNode","ClsImpDefHdrNode","InsImpDefHdrNode",
	"stmtListNode","ForNode","ForHdrNode","ForIniNode","LogExpNode","AsgExpNode","SmpExpNode","WhileNode","WleHdrNode","DoWhlNode"
		,"CondtiNode","SwitchNode","SwtBdyNode","IfHdrNode","argListNode","argNode","ProtclHdrNode","ProtclNode","ProtclBdyNode","MsgNode","MsgCalNode","SndrNode","BlockNode","ReturnNode",
			"programNode","componentsListNode","componentNode","class_interface",
			"class_interface_header_inheretance_Node","class_interface_header_Node","class_interface_body_Node"
			,"ids_list_Node","instance_variable_declaration_Node","instance_variable_declarations_Node","variable_declaration_list_Node"
			,"visibility_specification_private_Node","visibility_specification_protected_Node","visibility_specification_public_Node",
		"variable_declaration_enum","variable_declaration_struct","variable_declaration_arrayone","variable_declaration_arrayN","variable_declaration_ID"
		,"EnumNode","structNode","arrayoneNode","arraybodyNode","ArrayNNode","ArrayNMultiNode","array_body2Node","typeNode","simple_type_INT"
		,"simple_type_CHAR","simple_typeFLOAT","simple_type_NSSTRING","simple_type_VOID","complex_type","interface_declaration_list_Node",
		"class_method_declaration","instance_method_declaration","p_typeNode","method_selector_Node","parameter_Node","paramListNode",
		"SmpExpPlusNode","SmpExpMinusNode","SmpExpMultiNode","SmpExpDivNode"};

AST::AST(void)
{
}

AST::~AST(void)
{
}

TreeNode * AST::createNode(TreeNode * l, TreeNode* r, Node nt){
	TreeNode * tn = new TreeNode();
	tn->nodeType = nt;
	tn->left = l;
	tn->right = r;
	
	return tn;
}

TreeNode * AST::addToLastRight(TreeNode * basic, TreeNode* newItem){
	if(basic){
		TreeNode * temp = basic;
		while(temp->right)
			temp = temp->right;
		temp->right = newItem;
	}
	return basic;
}




void AST::print(TreeNode * tn, int lvl){
	if(tn){
		for(int i=0; i<lvl; i++)
			cout<<"  ";
		cout<<arr[tn->nodeType]<<"\n";		
		print(tn->left, lvl +1);		
		print(tn->right, lvl +1);
	}
}