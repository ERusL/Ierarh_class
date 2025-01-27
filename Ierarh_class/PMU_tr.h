#ifndef PMU_tr_H
#define PMU_tr_H
#include <iostream>
#include "Triangle.h"


class PMU_tr : Triangle
{
protected:
	int C;
	std::string name;
public:
 	PMU_tr (int _a, int _b, int _c, int _A, int _B);
	PMU_tr();
	bool check()override;
	void print_info() override;
	
};
#endif