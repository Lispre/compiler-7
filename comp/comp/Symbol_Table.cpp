#include "stdafx.h"
#include "Symbol_Table.h"
#include "Interface.h"
#include "Defs.h"
#include "Variable.h"
#include "AST.h"
#include <string>

Symbol_Table::Symbol_Table(void){
	this->rootScope = new Scope();
	this->currScope = this->rootScope;
	this->insertInterfaceInCurrentScope("NSObject");
}

Symbol_Table::~Symbol_Table(void){

}

Variable * Symbol_Table::insertVariableInCurrentScope(char* name, Type t,int visability){
	Variable * v = this->getVariableFromCurrentScope(name);
	if(v){
		return 0;//item is exist previously
	}
	else{

		v = new Variable();
		v->setName(name);
		v->setType(t);
		v->setsSpecifier(visability);
		this->currScope->m->insert(name, v);
		return v;
	}
}
Variable * Symbol_Table::insertVariableInCurrentScope(char* name, Type t,int visability,int offset,TreeNode *tn){
	Variable * v = this->getVariableFromCurrentScope(name);
	if(v){
		return 0;//item is exist previously
	}
	else{

		v = new Variable();
		v->setName(name);
		v->setType(t);
		v->setsSpecifier(visability);
		v->setoffset(offset);
		if(t==intType)
			v->setValue(0);
		else if(t==charType)
			v->setValue('\0');
		else if(t==floatType)
			v->setValue(0);
		else if(t==NSstringType)
			v->setValue(NULL);
		else
			v->setValue(false);
		//tn->item=v;
		this->currScope->m->insert(name, v);
		tn->item=(Variable*)this->currScope->m->lookup(name);
		return v;
	}
}
Variable * Symbol_Table::insertVariableInCurrentScope(char* name,void* type1,int visability){
	Variable * v = this->getVariableFromCurrentScope(name);
	if(v){
		return 0;//item is exist previously
	}
	else{

		v = new Variable();
		v->setName(name);
		v->settype1(type1);
		v->setsSpecifier(visability);
		this->currScope->m->insert(name, v);
		return v;
	}
}
Variable * Symbol_Table::insertVariableInCurrentScope(char* name,void* type1,int visability,int offset,TreeNode *tn){
	Variable * v = this->getVariableFromCurrentScope(name);
	if(v){
		return 0;//item is exist previously
	}
	else{

		v = new Variable();
		v->setName(name);
		v->settype1(type1);
		v->setsSpecifier(visability);
		v->setoffset(offset);
		v->setValue(NULL);
		tn->item=v;
		this->currScope->m->insert(name, v);

		return v;
	}
}
Variable * Symbol_Table::getVariableFromCurrentScope(char* name){
	Variable * v = (Variable*)this->currScope->m->lookup(name);
	if(!v){
		Scope * temp = this->currScope->parent;
		while(temp && !v){
			v = (Variable*)temp->m->lookup(name);
			temp = temp->parent;
		}
	}
	return v;
}
Variable* Symbol_Table::getVariableFromInterface(char* Interface_name,char* Data_name)
{
	Interface * v = (Interface*)this->currScope->m->lookup(Interface_name);
	if(!v){
		Scope * temp = this->currScope->parent;
		while(temp->parent){
			temp = temp->parent;
		}
		v = (Interface*)temp->m->lookup(Interface_name);
		Variable* var=(Variable*)v->getScope()->m->lookup(Data_name);
		return var;
	}
}
int Symbol_Table::getVariableSpecFromInterface(char* Interface_name,char* Data_name)
{
	Interface * v = (Interface*)this->currScope->m->lookup(Interface_name);
	if(!v){
		Scope * temp = this->currScope->parent;
		while(temp->parent){
			temp = temp->parent;
		}
		v = (Interface*)temp->m->lookup(Interface_name);
		if(!v)
			return -2;
		Variable* var=(Variable*)v->getScope()->m->lookup(Data_name);
		if(!var){

			return -1;
		}
		else{
			
			if(var->getSpecifier()==1)
				return 1;
			else if(var->getSpecifier()==2)
				return 2;
			else 
				return 3;
		}
	}
}
char* Symbol_Table::getVariableNameFromInterface(char* Interface_name,char* Data_name)
{
	Interface * v = (Interface*)this->currScope->m->lookup(Interface_name);
	if(!v){
		Scope * temp = this->currScope->parent;
		while(temp->parent){
			temp = temp->parent;
		}
		v = (Interface*)temp->m->lookup(Interface_name);
		if(v){
			Variable* var=(Variable*)v->getScope()->m->lookup(Data_name);
			if(var)
				return (char*)var->getType1();
			else
				return "##";
		}
		else
			return "#$";
	}
}
Interface * Symbol_Table::getInterface(char* Interface_name){
	Interface * v = (Interface*)this->currScope->m->lookup(Interface_name);
	if(!v){
		Scope * temp = this->currScope->parent;
		while(temp->parent){
			temp = temp->parent;
		}
		v = (Interface*)temp->m->lookup(Interface_name);
	}
	return v;
}
Method * Symbol_Table::insertFunctionInCurrentScope(char* name, Type t,vector<string> param_list){
	Method * f = (Method*)this->currScope->m->lookup(name);
	if(f)
	{
		if((f->check_param_list(param_list)))
			return 0;
	}
	f = new Method();
	f->setName(name);
	f->setReturnType(t);
	f->setPrameter(param_list);
	this->currScope->m->insert(name, f);
	return f;
}
Interface * Symbol_Table::insertInterfaceInCurrentScope(char* name,char* Inhert_name){
	Interface * t = (Interface*)this->currScope->m->lookup(name);
	Interface * t1 = (Interface*)this->currScope->m->lookup(Inhert_name);
	if(t1)
	{
		t = new Interface();
		t->setName(name);
		t->setInheritedType(t1);
		t->settype(1);
		this->currScope->m->insert(name, t);
		return t;
	}
	return 0;
}
void Symbol_Table::insert_scope(char *name,Scope *scope){
	Interface * t = (Interface*)this->rootScope->m->lookup(name);
	if(t)
	{
		t = new Interface();
		t->setName(t->getName());
		t->setInheritedType(t->getInheritedType());
		t->setScope(scope);
		this->rootScope->m->pop(name);
		this->rootScope->m->insert(name, t);
	}
}
Implementation * Symbol_Table::insertImplementationInCurrentScope(char* name){
	strcat(name,"#");
	Implementation * t = (Implementation*)this->currScope->m->lookup(name);
	if(t)
	{
		return 0;
	}
	t = new Implementation();
	t->setName(name);
	t->setInheritedType(0);
	t->settype(2);
	this->currScope->m->insert(name, t);
	return t;
}

Implementation * Symbol_Table::insertImplementationInCurrentScope(char* name,char* Inhert_name){
	strcat(name,"#");
	Implementation * t = (Implementation*)this->currScope->m->lookup(name);
	Implementation * t1 = (Implementation*)this->currScope->m->lookup(Inhert_name);
	if(t1)
	{
		t = new Implementation();
		t->setName(name);
		t->setInheritedType(t1);
		this->currScope->m->insert(name, t);
		return t;
	}
	return 0;
}
void Symbol_Table::insert_scope1(char *name,Scope *scope){
	Implementation * t = (Implementation*)this->currScope->m->lookup(name);
	if(t)
	{
		t = new Implementation();
		t->setName(t->getName());
		t->setInheritedType(t->getInheritedType());
		t->setScope(scope);
		this->rootScope->m->pop(name);
		this->rootScope->m->insert(name, t);
	}
}
void Symbol_Table::insert_scope2(char *name,Scope *scope){
	Method * t = (Method*)this->currScope->m->lookup(name);
	if(t)
	{
		t = new Method();
		t->setName(t->getName());
		t->setScope(scope);
		this->rootScope->m->pop(name);
		this->rootScope->m->insert(name, t);
	}
}
Interface * Symbol_Table::insertInterfaceInCurrentScope(char* name){
	Interface * t = (Interface*)this->currScope->m->lookup(name);
	if(t)
	{
		return 0;
	}
	t = new Interface();
	t->setName(name);
	t->setInheritedType(0); 
	this->currScope->m->insert(name, t);
	return t;
}
Interface * Symbol_Table::check_Interface(char* name){
	Interface * t = (Interface*)this->currScope->m->lookup(name);
	if(t)
	{
		return t;
	}
	return 0;
}
Protocol * Symbol_Table::insertProtocolInCurrentScope(char* name){
	//strcat(name,"&");
	Protocol * t = (Protocol*)this->currScope->m->lookup(name);
	if(t)
	{
		return 0;
	}
	t = new (Protocol);
	t->setName(name);
	this->currScope->m->insert(name, t);
	return t;
}
Protocol * Symbol_Table::check_Protocol(char* name){
	//strcat(name,"&");
	Protocol * t = (Protocol*)this->currScope->m->lookup(name);
	if(t)
	{
		return t;
	}
	return 0;
}
Interface * Symbol_Table::check_Protocol_Interface(char* name){
	
	Interface * t = (Interface*)this->currScope->m->lookup(name);
	if(t)
	{
		return t;
	}
	return 0;
}
Implementation *Symbol_Table::check_var_type(char *name)
{
	//char *temp;
	strcat(name,"#");
	Implementation* t = (Implementation*)this->rootScope->m->lookup(name);
	name[strlen(name)-1]='\0';
	if(t)
	{
		return t;
	}
	return 0;
}
Implementation * Symbol_Table::check_Protocol_Implementation(char* name){
	strcat(name,"#");
	Implementation* t = (Implementation*)this->currScope->m->lookup(name);
	if(t)
	{
		return t;
	}
	return 0;
}
Implementation * Symbol_Table::check_Implementation(char* name){
	strcat(name,"#");
	Implementation * t = (Implementation*)this->currScope->m->lookup(name);
	if(t)
	{
		return t;
	}
	return 0;
}
Interface * Symbol_Table::check_Implementation_Interface(char* name){

	Interface * t = (Interface*)this->currScope->m->lookup(name);
	if(t)
	{
		return t;
	}
	return 0;
}