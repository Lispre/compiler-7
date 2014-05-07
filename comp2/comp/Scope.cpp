#include "stdafx.h"
#include "Scope.h"


Scope::Scope(){
	this->m = new hash_tabel();
	this->parent = 0;
}
