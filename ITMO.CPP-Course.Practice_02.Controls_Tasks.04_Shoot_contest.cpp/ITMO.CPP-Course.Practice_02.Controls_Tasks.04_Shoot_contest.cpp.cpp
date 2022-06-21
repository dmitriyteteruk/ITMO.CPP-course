// ITMO.CPP-Course.Practice_02.Controls_Tasks.04_Shoot_contest.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <windows.h>

int main()
{
	// руссификация консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "Задание 4. Стрельба по мишени";
	// Мишень вариант 2 - 10, 5, 1 и 0 очков
	// всего 5 выстрелов
	
	int x, y, round(1), points(0);

// вариант 1 - с циклом for для 5 попыток 
//	for (int i = 0; i < 5; i++)

// вариант 2 - с циклом do while
	do 
	{
		std::cout << "\nПопытка номер: " << round;
		std::cout << "\nВведите координату Х: ";
		//x = rand() % 0 + 3;
		std::cin >> x;

		std::cout << "Введите координату Y: ";
		// y = rand() % 0 + 3;
		std::cin >> y;

		if (x * x + y * y <= 1) points += 10;
		else if (x * x + y * y > 1 && x * x + y * y <= 4) points += 5;
		else if (x * x + y * y > 4 && x * x + y * y <= 9) points += 1;
		else points += 0;

		round += 1;
	} while (points <= 50);

	if (points > 40) std::cout << "\nВы набрали " << points << " очков и ваш уровень Снайпер.";
	else if (points <= 40 && points > 25) std::cout << "\nВы набрали " << points << " очков и ваш уровень Просто стелок.";
	else std::cout << "\nВы набрали " << points << " очков и ваш уровень Новичок.";
}
