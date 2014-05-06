#pragma once
#include <fstream>
#include "AST.h"
class code_generation1
{
public:
	std::ofstream myfile;
	code_generation1(void);
	void generate_code();
	void generate_expr_code(TreeNode *tn);
	void load_value();
	void store_value();
	void increase_sp();
	void decrease_sp();
};


