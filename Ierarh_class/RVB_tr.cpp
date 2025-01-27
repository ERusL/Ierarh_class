#include "RVB_tr.h"
class RVB_tr : public Triangle

	{
		
	std::string name = "Равнобедренный треугольник";
	
      RVB_tr(int _a, int _b, int _A, int _B)
		{
			a = c;
			A = C;
		}

	  RVB_tr() :RVB_tr(30, 20, 50, 80)
	  {
		  a = c = 30;
		  b = 20;
		  A = C = 50;
		  B = 80;
	  }

	  bool    check() override 	  {
		  check();
		  if (a != b && a == c)
		  return true;
	  }
	  	
		void print_info() override {
			print_info();
		}
};