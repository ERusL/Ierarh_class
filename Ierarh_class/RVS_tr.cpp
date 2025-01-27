#include "RVS_tr.h"

class RVS_tr : public Triangle
{
	std::string name = "Равносторонний треугольник";

	RVS_tr(int _a, int _A)
	{
		a = b = c;
		A = B = C;
	}
	RVS_tr() : RVS_tr(10, 60)
	{
		a = b = c = 10;
		A = B = C = 60;
	}
	bool check() override {
		if (A == B == C)
			if (a == b == c)
				check();
		return true;
	}

	void print_info() override {
		print_info();
	}
};