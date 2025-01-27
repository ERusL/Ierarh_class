#ifndef Quadrangle_H
#define Quadrangle_H
#include "Figure.h"
#include <iostream>

class Quadrangle :  Figure
{
protected:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
	int n;
	std::string name;
public:
	Quadrangle();
	Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
	bool check() ;
	void print_info();
	};
#endif