#include "stdafx.h"
#include "Hash_table.h"
using namespace std;

Hash_table::Hash_table(void)
{
	size=256;
	table=new Symbol[size];
}
int Hash_table:: Hash(string s)
{
	int hash = 0;
	int offset = 'a' - 1;
	for(string::const_iterator it=s.begin(); it!=s.end(); ++it) 
	hash = hash << 1 | (*it - offset);
    return hash;
}
 void Hash_table::insert(string s,int type)
{

}
 void Hash_table::pop(string s)
{	
	int index=Hash(s)%size;
	//table[index]=table[index].next;
}
