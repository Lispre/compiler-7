#pragma once
#include "Scope.h"
#include <vector>
class Protocol
{
private:
	char* name;
	vector<string> implementation_list;
	Scope * scope;
public:
	Protocol(void);
	void setName(char* n);
	char* getName();
	void setScope(Scope * m);
	Scope * getScope();
};

