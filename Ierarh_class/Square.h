#ifndef Square_H
#define Square_H
#include"Quadrangle.h"
#include "Parallm.h"
#include "Pramougolnik.h"
#include"Romb.h"
#include <iostream>

class Square :  Romb
{
protected:
	std::string name = " вадрат";
public:
	Square();
	Square(int _a, int _A);
	bool check();
	void print_info() ;
};
#endif