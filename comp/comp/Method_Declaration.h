pragma once
#include "Symbol.h"
#include "Declaration.h"
#include "TypeHelper.h"
class Method_Declaration:Declaration
{
public:
	TypeHelper type;

	Symbol *arguments;
	Method_Declaration(void);
};

