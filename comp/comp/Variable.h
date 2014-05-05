#pragma once
#include "Defs.h"
enum AccessSpecifier{privateAceess, protectedAccess, publicAccess};
class DataModifier{
public:
	AccessSpecifier accessSpecifier;//Default is publicAccess
	bool isStatic;
	bool isOverride;
	bool isConst;
};
class Variable
{
private:
	char* name;
	DataModifier * dataModifier;
	AccessSpecifier accessSpecifier;
	Type type;
	int offset;
	void* type1;
	void* value;
	int kind;
public:
	void *item;
	Variable();
	~Variable();
	void setName(char* n);
	char* getName();
	void setType(Type t);
	void settype1(void* t);
	Type getType();	
	void* getType1();
	void* getValue();
	void setValue(void* value);
	void setKind(int kind);
	int getkind();
	void setsSpecifier(int s);
	int getSpecifier();
	void setoffset(int s);
	int getoffset();
	void setDataModifier(DataModifier * dm);
	DataModifier * getDataModifier();
};

