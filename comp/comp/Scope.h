#pragma once
#include "hash_tabel.h"
class Scope
{
public:
	Scope();
	Scope *parent;
	hash_tabel * m;
};

