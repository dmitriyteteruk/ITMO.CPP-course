// ITMO.CPP-Course.Practice_02.Ex_02.2_Cycle_pre_term.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <math.h>

int main()
{
	// руссификация консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Упражнение 2. Использование циклов при реализации алгоритмов
	std::cout << "Задание 2. Использование цикла с предусловием\n";

	int a, b, temp;

	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;

	while (a != b)
	{
		if (a > b)
			a = a - b; // аналогоично a = a - b
		else
			b = b - a;
	}

	std::cout << "НОД = " << a << std::endl;
	
}