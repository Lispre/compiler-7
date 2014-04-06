#include "stdafx.h"
#include "Implementation.h"


Implementation::Implementation(){
	this->name = new char[255];
	this->name[0] = '\0';
	this->scope = new Scope();
}
Implementation::~Implementation(){}
void Implementation::setName(char* n){
	strcat(this->name,n);
}
char* Implementation::getName(){
	return this->name;
}
void Implementation::setInheritedType(Implementation* e){
	this->inheritedType = e;
}
Implementation* Implementation::getInheritedType(){
	return this->inheritedType;
}
void Implementation::setScope(Scope * m){
	this->scope=m;
}
Scope * Implementation::getScope(){
	return this->scope;
}
void Implementation::settype(int type){
	this->type=type;
}
int  Implementation::gettypee(){
	return this->type;
}
