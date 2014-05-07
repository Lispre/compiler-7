#include "stdafx.h"
#include "hash_tabel.h"
hash_tabel::hash_tabel(int x)
{
	for(int i=0;i<x;i++)
	{
		table[i]=0;
	}
	//size=256;
}
int hash_tabel::hash(char* s)
{
	unsigned int temp=0;
	unsigned i=0;
	while(s[i]!='\0')
	{
		temp=((temp<<4)+s[i])%size_hash;
		++i;
	}
	return temp;
}
void hash_tabel::insert(char* s,void* type)
{
	int index=hash(s)%size_hash;
	Symbol *t=new Symbol();
	table[index]=new Symbol(s,type,t);
	table[index]->next=0;
}
void hash_tabel::pop(char* s)
{
	int index = this->hash(s);
	this->table[index]=0;
	
}
hash_tabel::hash_tabel(void)
{
	for(int i=0;i<256;i++)
	{
		table[i]=0;
	}
}
void* hash_tabel::lookup(char* s)
{
	int index = this->hash(s);
	Symbol * temp = this->table[index];
	int i=0;
	while((temp != 0)&&(strcmp(temp->key, s) != 0)){
			i=i+1;
			temp = temp->next;
	}
	if(temp == 0)
		return 0;
	else
		return temp->symbol;
}
