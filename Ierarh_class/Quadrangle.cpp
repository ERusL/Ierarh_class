#include"Quadrangle.h"

int a;
int b;
int c;
int d;
int A;
int B;
int C;
int D;
int n;

Quadrangle::Quadrangle()
{
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
	int n = 4;
	std::string name = "Четырёхугольник";
}
	
	Quadrangle:: Quadrangle (int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D)
	{
		this ->a = _a;
		this->b = _b;
		this->c = _c;
		this->d = _d;
		this->A = _A;
		this->B = _B;
		this->C = _C;
		this->D = _D;
	}
	Quadrangle :: Quadrangle(int, int, int, int, int, int, int, int)
	{
		a = 50;
		b = 20;
		c = 30;
		d = 40;
		A = 80;
		B = 90;
		C = 120;
		D = 70;
	}
	
	bool Quadrangle::Figure::check()  {
		if (n == 4)
			if (A + B + C + D == 360)
				if (a != b && a != c && a != d && b != c && b != d && c != d)
				{
					accord = "Правильная";
					return true;
				}
				else
				{
					accord = "Неправильная";
				}
		return true;
	}

	 void Quadrangle::Figure:: print_info()
	{
		print_info();
		std::cout << "стороны: a = " << a << "  b = " << b << "  c = " << c << "  d = " << d << std::endl;
		std::cout << "углы: A=" << A << "  B=" << B << "  C= " << C << "  D = " << D << std::endl;
	}

