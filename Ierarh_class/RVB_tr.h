#ifndef RVB_tr_H
#define RVB_tr_H
#include <iostream>
#include "Triangle.h"

class  RVB_tr : Triangle
{
protected:
	std::string name;
public:
	RVB_tr(int _a, int _b, int _A, int _B);
	RVB_tr();
	bool check() ;
	void print_info() ;
};
#endif