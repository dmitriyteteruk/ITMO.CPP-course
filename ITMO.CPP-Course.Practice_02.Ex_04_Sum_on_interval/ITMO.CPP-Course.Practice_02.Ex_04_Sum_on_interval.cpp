// ITMO.CPP-Course.Practice_02.Ex_04_Sum_on_interval.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	std::cout << "Упражнение 4. Расчет суммы чисел на заданном интервале\n";
	int k{}, m{}, s{};
	std::cout << "Введите значение k: "; std::cin >> k;
	std::cout << "Введите значение m: "; std::cin >> m;
	for (int i = 1; i <= 100; i++) {
		if ((i > k) && (i < m))
			continue;
		s += 1;
	}

	std::cout << "s = " << s << std::endl;
	return 0;
}
