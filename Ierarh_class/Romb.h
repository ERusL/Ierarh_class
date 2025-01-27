#ifndef Romb_H
#define Romb_H
#include"Quadrangle.h"
#include "Parallm.h"
#include "Pramougolnik.h"
#include <iostream>

class  Romb :  Pramougolnik
{
protected:
	std::string name;
public:
	Romb();
	Romb(int _a, int _A, int _B);
	bool check();
	void print_info() ;
};
#endif