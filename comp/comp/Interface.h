#pragma once
#include "Scope.h"
#include <vector>
class Interface
{
private:
	char* name;
	Interface* inheritedType;
	vector<string> implementation_list;
	Scope * scope;
	int type;
public:
	Interface();
	~Interface();
	void setName(char* n);
	char* getName();
	void setInheritedType(Interface* e);
	Interface* getInheritedType();
	void setScope(Scope * m);
	Scope * getScope();
	void settype(int  Type);
	int  gettypee();
};

