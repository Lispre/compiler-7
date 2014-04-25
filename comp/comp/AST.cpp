#include "AST.h"

char* arr [] =	{"intNode", "floatNode", "stringNode","CharNode","IdentNode","longidNode","CompNode",
	"ImpNode","HedrImpNode","BdyImpNode","ImpdefNode","ClsImpDefNode","InsImpDefNode","ClsImpDefHdrNode","InsImpDefHdrNode",
	"stmtListNode","ForNode","ForHdrNode","ForIniNode","LogExpNode","AsgExpNode","SmpExpNode","WhileNode","WleHdrNode","DoWhlNode"
		,"CondtiNode","SwitchNode","SwtBdyNode","IfHdrNode","argListNode","argNode","ProtclHdrNode","ProtclNode","ProtclBdyNode","MsgNode","MsgCalNode","SndrNode","BlockNode","ReturnNode"};

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