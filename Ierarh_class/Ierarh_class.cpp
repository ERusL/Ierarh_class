// Ierarh_class.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>

#include "figure.h"
#include "Triangle.h"
#include "PMU_tr.h"
#include "RVB_tr.h"
#include "RVS_tr.h"
#include "Quadrangle.h"
#include "Pramougolnik.h"
#include "Square.h"
#include "Parallm.h"
#include "Romb.h"


int main()
{
	setlocale(LC_ALL, "RUS");

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int n = 0;

	Figure figure;
	figure.print_info();


	Triangle* triangle[4]{ new Triangle, new RVB_tr, new PMU_tr, new RVS_tr };
	for (int i = 0; i < 4; i++) {
		triangle[i]->print_info();
	}

	Quadrangle* quadrangle[5]{ new Quadrangle, new Parallm, new Pramougolnik, new Romb, new Square };
	for (int i = 0; i < 5; i++) {
		quadrangle[i]->print_info();
	}
	
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
