#pragma once
#include "Symbol.h"
class Hash_table
{
	int size;
public:
	Symbol *table;
	Hash_table(void);
	void insert(string s,int type);
	int lookup(string s);
	void pop(string s);
private:
	int Hash(string s);
};

