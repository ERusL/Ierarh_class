#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>

class Figure
{
protected:
	int n=0;
	std::string accord;  //соответствие правильности фигуры
	std::string name;

public:
	Figure();
	Figure(int _n, std::string _accord, std::string _name);
	bool check();
	void print_info();
};

#endif