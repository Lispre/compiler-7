#include "stdafx.h"
#include "Symbol.h"


Symbol::Symbol(char* k,void* t,Symbol* n)
{
		key=k;
		symbol=t;
		next=n;
}
Symbol::Symbol()
{
}
