#include "PMU_tr.h"
class PMU_tr : Triangle
{
	int C = 90;
	std::string name = "Прямоугольный треугольник";

	PMU_tr(int _a, int _b, int _c, int _A, int _B)
	{
		int a = _a;
		int b = _b;
		int c = _c;
		int A = _A;
		int B = _B;
		C = 90;
	}
	PMU_tr() :PMU_tr(30, 20, 10, 30, 60)
	{
		a = 30;
		b = 20;
		c = 10;
		A = 30;
		B = 60;
		C = 90;
	}

	bool check() override {
        
		if (a != b && a != c && b != c)
			if (C == 90)
			return true;
	}

	void print_info() override {
		
	}
};
