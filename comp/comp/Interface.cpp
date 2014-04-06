#include "stdafx.h"
#include "Interface.h"


Interface::Interface(){
	this->name = new char[255];
	this->name[0] = '\0';
	this->scope = new Scope();
}
Interface::~Interface(){}
void Interface::setName(char* n){
	strcat(this->name,n);
}
char* Interface::getName(){
	return this->name;
}
void Interface::setInheritedType(Interface* e){
	this->inheritedType = e;
}
Interface* Interface::getInheritedType(){
	return this->inheritedType;
}
void Interface::setScope(Scope * m){
	this->scope=m;
}
Scope * Interface::getScope(){
	return this->scope;
}
void Interface::settype(int type){
	this->type=type;
}
int Interface::gettypee()
{
	return this->type;
}
