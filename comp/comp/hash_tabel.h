#pragma once
#include "Symbol.h"
class hash_tabel
{
public:
	hash_tabel::hash_tabel(void);
    #define size_hash 256
	Symbol* table[256];
	hash_tabel(int x);
	int hash(char* s);
	void pop(char* s);
	void insert(char*  s,void* type);
	void* lookup(char*  s);
};

