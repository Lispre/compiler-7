#pragma once
#include "Declaration.h"
#include "TypeHelper.h"
#include <string>
using namespace std;
class Var_Declaration:Declaration
{
public:
	TypeHelper type;
	string value;
	Var_Declaration(void);
};

