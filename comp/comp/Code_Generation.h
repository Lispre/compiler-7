#pragma once
#include <fstream>
#include "AST.h"
class Code_Generation	
{
public
	std::ofstream myfile;
	Code_Generation(void);
	void generate_code();
	void generate_expr_code(TreeNode *tn);
	void load_value();
	void store_value();
	void increase_sp();
	void decrease_sp();
};

