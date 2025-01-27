#ifndef Parallm_H
#define Parallm_H
#include "Quadrangle.h"
#include <iostream>

class Parallm : Quadrangle
{
protected:
	std::string name;
public:
	Parallm();
	Parallm(int _a, int _b, int _A, int _B);
	bool check() ;
	void print_info()  {
		print_info();
	}
};
#endif