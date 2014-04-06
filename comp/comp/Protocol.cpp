#include "stdafx.h"
#include "Protocol.h"


Protocol::Protocol(void)
{
	this->name = new char[255];
	this->name[0] = '\0';
	this->scope = new Scope();
}
void Protocol::setName(char* n){
	strcat(this->name,n);
}
char* Protocol::getName(){
	return this->name;
}
void Protocol::setScope(Scope * m){
	this->scope=m;
}
Scope * Protocol::getScope(){
	return this->scope;
}