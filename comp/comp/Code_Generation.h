#pragma once
#include <fstream>
<<<<<<< HEAD
=======
#include "AST.h"
<<<<<<< HEAD
class Code_Generation	
=======
>>>>>>> bead49324b9b5c44c15458b2f98b2211af5bb58a
class Code_Generation
>>>>>>> a292f6c4505caa66851d89f60b3a49851a36e491
{
public
	std::ofstream myfile;
	Code_Generation(void);
	void generate_code();
<<<<<<< HEAD
	void generate_expr_code();
=======
	void generate_expr_code(TreeNode *tn);
<<<<<<< HEAD
	void load_value();
	void store_value();
	void increase_sp();
	void decrease_sp();
=======
>>>>>>> bead49324b9b5c44c15458b2f98b2211af5bb58a
>>>>>>> a292f6c4505caa66851d89f60b3a49851a36e491
};

