#pragma once
#ifndef _AST_
#define _AST_
#include <iostream>
using namespace::std;
enum Node {
	intNode, floatNode, stringNode,CharNode,IdentNode,longidNode,CompNode,
	ImpNode,HedrImpNode,BdyImpNode,ImpdefNode,ClsImpDefNode,InsImpDefNode,ClsImpDefHdrNode,InsImpDefHdrNode,
	stmtListNode,ForNode,ForHdrNode,ForIniNode,LogExpNode,AsgExpNode,SmpExpNode,WhileNode,WleHdrNode,DoWhlNode
	,CondtiNode,SwitchNode,SwtBdyNode,IfHdrNode,argListNode,argNode,ProtclHdrNode,ProtclNode,ProtclBdyNode,MsgNode,MsgCalNode,SndrNode,BlockNode,ReturnNode};
enum ExpectedType {noType };
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