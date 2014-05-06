#pragma once
#include <fstream>
<<<<<<< HEAD
=======
#include "AST.h"
>>>>>>> bead49324b9b5c44c15458b2f98b2211af5bb58a
class Code_Generation
{
public:
	std::ofstream myfile;
	Code_Generation(void);
	void generate_code();
<<<<<<< HEAD
	void generate_expr_code();
=======
	void generate_expr_code(TreeNode *tn);
>>>>>>> bead49324b9b5c44c15458b2f98b2211af5bb58a
};

