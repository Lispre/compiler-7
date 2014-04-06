#pragma once
#include "Declaration.h"
#include "Symbol.h"
#include "Implementation.h"
#include "Protocol.h"

class Class_Declaration:public Declaration
{

public:
	Symbol *methods;
	Symbol *fields;
	Symbol *Implementation;
	Symbol *Protocol;
	string name;
	Class_Declaration();

};

