#ifndef RVS_tr_H
#define RVS_tr_H
#include <iostream>
#include "Triangle.h"

class RVS_tr : Triangle
{
protected:
	std::string name;
public:
	RVS_tr(int _a, int _A);
	RVS_tr();
	bool check() override;
	void print_info() override;
};
#endif