#include "figure.h"


Figure::Figure()
{
		std::string accord;  //������������ ������������ ������
	std::string name = "������";
}
Figure::Figure( int _n, std::string _accord, std::string _name)
{
	int n = _n;
	std::string accord = _accord;
	std::string name = _name;
}

bool  Figure::check()  {
		if (n == 0)
		{
			accord = "����������";
		}
		else
		{
			accord = "������������";
		}
		return true;
	}

void Figure::print_info()  
	{
		std::cout << name << "\n " << accord << "\n ���������� ������ : " << n << "\n\n";
	}

	