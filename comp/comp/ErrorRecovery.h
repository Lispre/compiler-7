#pragma once
#ifndef __Error_Recovery__
#define __Error_Recovery__
#include<string.h>
#include <iostream>
using namespace std;
class ErrRecItem{
public:
	int lineNo;
	int colNo;
	char* txt;
	char* var;
	ErrRecItem * next;
};
class ErrRecQueue{
public:
	ErrRecItem * front;
	ErrRecItem * tail;
	void enqueue(int lineNo, int colNo, char* txt, char* varName);
	ErrRecItem * dequeue();
	int isEmpty();
};
class ErrorRecovery
{
public:
	ErrRecQueue * errQ;
	ErrRecQueue * warnQ;
	ErrorRecovery(void);
	~ErrorRecovery(void);
	void printErrQueue();
};
#endif