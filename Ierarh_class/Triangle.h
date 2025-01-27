#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Figure.h"
#include <iostream>


class Triangle : Figure
	{
protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
	int n;
	std::string name; 
public:
	Triangle(int _a, int _b, int _c, int _A, int _B, int _C, std::string name);
	virtual bool  check ();
	virtual void  print_info();
	};
#endif
