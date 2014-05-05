#pragma once
#include <stack>
#include <string>
#include "hash_tabel.h"
#include "Scope.h"
#include "Variable.h"
#include "Defs.h"
#include "AST.h"
#include "Method.h"
#include "Interface.h"
#include "Implementation.h"
#include "Protocol.h"
#include <vector>
using namespace std;
class Symbol_Table
{
public:
	
	Scope * currScope;
	Scope * rootScope;
	Variable * insertVariableInCurrentScope(char* name,Type  t,int visability);
	Variable * insertVariableInCurrentScope(char* name,Type  t,int visability,int offset,TreeNode* tn);
	Variable *insertVariableInCurrentScope(char* name,void* type1,int visability);
	Variable *insertVariableInCurrentScope(char* name,void* type1,int visability,int offset,TreeNode *tn);
	Variable * getVariableFromCurrentScope(char* name);
	Interface* getInterface(char* name);
	Variable* getVariableFromInterface(char* Interface_name,char* Data_name);
	int getVariableSpecFromInterface(char* Interface_name,char* Data_name);
	char* getVariableNameFromInterface(char* Interface_name,char* Data_name);
	Method * insertFunctionInCurrentScope(char* name, Type t,vector<string> param_list);
	Interface * insertInterfaceInCurrentScope(char* name);
	Interface *check_Interface(char* name);
	Protocol *check_Protocol(char* name);
	Interface *check_Protocol_Interface(char* name);
	Implementation *check_Protocol_Implementation(char* name);
	Protocol *insertProtocolInCurrentScope(char* name);
	Interface * insertInterfaceInCurrentScope(char* name,char* Inhert_name);
	void insert_scope(char *name,Scope *scope);
	Implementation * insertImplementationInCurrentScope(char* name);
	Implementation * check_var_type(char* name);
	Implementation *check_Implementation(char* name);
	Interface *check_Implementation_Interface(char* name);
	Implementation * insertImplementationInCurrentScope(char* name,char* Inhert_name);
	void insert_scope1(char *name,Scope *scope);
	void insert_scope2(char *name,Scope *scope);
	Symbol_Table(void);
	~Symbol_Table(void);
};

