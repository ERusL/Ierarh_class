#include "Parallm.h"

 Parallm :: Parallm ()
 {
	 std::string name = "ֿאנאככוכמדנאלל";
 }
 Parallm ::Parallm(int _a, int _b, int _A, int _B)
	{
		a = c;
		b = d;
		A = C;
		B = D;
	}
	Parallm::Parallm(int, int, int, int)
	{
		a = c = 10;
		b = d = 20;
		A = C = 110;
		B = D = 70;
	}
	bool Parallm ::check()  {
		if (a == c && b == d && A == C && B == D)
			check();
		return true;
	}
	void  Parallm::print_info()  {
		print_info();
	}
