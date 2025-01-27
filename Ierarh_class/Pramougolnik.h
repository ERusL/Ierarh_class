#ifndef Pramougolnik_H
#define Pramougolnik_H
#include"Quadrangle.h"
#include"Parallm.h"
#include <iostream>

class  Pramougolnik : Parallm 
{
protected:
	std :: string name;
public:
	Pramougolnik(); 
	Pramougolnik(int _a, int _b, int _A);
	bool check();
	void print_info();
};

#endif