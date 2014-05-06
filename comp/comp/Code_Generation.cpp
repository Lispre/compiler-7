#include "Code_Generation.h"
#include "AST.h"
#include <iostream>
#include <string>


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
void Code_Generation::store_value()
{
	myfile << "sw $t0 0($sp)" << std::endl;
}
void Code_Generation::load_value()
{
	myfile << "lw $t1 4($sp)" << std::endl;
}
void Code_Generation::increase_sp()
{
	myfile << "addiu $sp $sp 4" << std::endl;
}
void Code_Generation::decrease_sp()
{
	myfile << "addiu $sp $sp -4" << std::endl;
}
void Code_Generation::generate_expr_code(TreeNode *tn)
{
	switch(tn->nodeType)
	{
		case intNode:
			myfile <<"li $t0,"<<std::to_string((int)tn->item);
			break;
		case plus_node:
			generate_expr_code(tn->left);
			store_value();
			decrease_sp();
			generate_expr_code(tn->right);
			load_value();
			myfile << "add $t0, $t1, $t0" << std::endl;
			increase_sp();
			break;
		case minus_node:
			generate_expr_code(tn->left);
			store_value();
			decrease_sp();
			generate_expr_code(tn->right);
			load_value();
			myfile << "add $t0, $t1, $t0" << std::endl;
			increase_sp();
			break;
		case multi_node:
			generate_expr_code(tn->left);
			store_value();
			decrease_sp();
			generate_expr_code(tn->right);
			load_value();
			myfile << "add $t0, $t1, $t0" << std::endl;
			increase_sp();
			break;
		case div_node:
			break;

	}
}
