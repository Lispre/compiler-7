#pragma once
#include <string>
using namespace std;
class Symbol
{
public:
	char* key;
	void* symbol;
	Symbol* next;
	Symbol(char* key,void* type,Symbol* n);
	Symbol();
};

