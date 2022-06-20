// ITMO.CPP-Course.Practice_02.Ex_03_Cycle_For.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <ctime>

int main()
{
	// руссификация консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Упражнение 3. Применение цикла с параметром (for) для итерации
	std::cout << "Упражнение 3. Применение цикла с параметром (for) для итерации\n";

	srand(time(NULL));
	int a, b, c;
	int k = 0, n = 10;

	for (int i = 1; i <= n; i++) {
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		std::cout << a << " * " << b << " = ";
		std::cin >> c;

		if (a* b != c) {
			k++;
			std::cout << "Error! ";
			std::cout << a << " * " << b << " = " << a * b << std::endl;
		}
	}

	std::cout << "Count error: " << k << std::endl;
	return 0;
}