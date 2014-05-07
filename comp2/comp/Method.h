#pragma once
#include "Defs.h"
#include "Scope.h"
#include <vector>
class Method
{
private:
	char* name;
	Type returnType;
	Scope * scope;
	vector<string> parameter_list; 
	void *item;
public:

	Method();
	~Method();
	void setName(char* n);
	char* getName();
	void setReturnType(Type t);
	Type getReturnType();	
	void setScope(Scope* m);
	Scope* getScope();
	void setPrameter(vector<string> params);
	bool check_param_list(vector<string> params);
	void* get_item();
	void set_item(void* item);
};

