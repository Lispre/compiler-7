
//#include "stdafx.h"
#include "Code_Generation.h"
#include <fstream>
#include <iostream>

#include "stdafx.h"
#include "Code_Generation.h"
#include <fstream>
#include "AST.h"
#include <iostream>
#include <string>

using namespace std;
Code_Generation::Code_Generation(void)
{
	myfile.open ("test.s");
	myfile <<"\t.data\n\t.text\n main:";
	myfile.close();
}
void Code_Generation::generate_code()
{
	myfile <<"\t.data\n\t.text\n main:";
}



void Code_Generation::generate_expr_code(TreeNode *tn)
{
	if(tn->item!=NULL)
	{
		int x=(int)tn->item;
		myfile <<"li $t1,"<<std::to_string(x);
	}
	

}
