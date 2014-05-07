#pragma once
#include <fstream>

#include "AST.h"

class Code_Generation
{
public:
	std::ofstream myfile;
	Code_Generation(void);
	void generate_code();

	void generate_expr_code();

	void generate_expr_code(TreeNode *tn);

};

