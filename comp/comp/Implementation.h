#pragma once
#include "Scope.h"
#include <vector>
class Implementation
{
private:
	char* name;
	Implementation* inheritedType;
	vector<string> implementation_list;
	Scope * scope;
	int type;
public:
	Implementation();
	~Implementation();
	void setName(char* n);
	char* getName();
	void setInheritedType(Implementation* e);
	Implementation* getInheritedType();
	void setScope(Scope * m);
	Scope * getScope();
	void settype(int Type);
	int  gettypee();
};

