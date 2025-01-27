#include "Triangle.h"


Triangle :: Triangle (int _a, int _b, int _c, int _A, int _B, int _C, std::string name) 
	{
		int a = _a;
		int b = _b;
		int c = _c;
		int A = _A;
		int B = _B;
		int C = _C;
		std::string name = name;
	}
Triangle::Triangle(int, int, int, int, int, int, std::string)
{
	int a = 10;
	int b = 20;
	int c = 30;
	int A = 70;
	int B = 50;
	int C = 60;
	int n = 3;
	std::string name = "Треугольник";
}
	
  bool  Triangle::check()  {
			if (n == 3)
			if (A + B + C == 180)
				if (a != b && a != c && b != c)
				{
					accord = "Правильная";
				}
				else
				{
					accord = "Неправильная";
				}
		return true;
	}
	void Triangle::print_info()
	{
		print_info();
		std::cout << "стороны: a = " << a << "  b = " << b << "  c = " << c << std::endl;
		std::cout << "углы: A=" << A << "  B=" << B << "  C=" << C << std::endl << std::endl;
	}
