// ITMO.CPP-course.Practice_02.Ex_01_Find_the_Dot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

int main()
{
	// руссификация консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "Задание 1. Определение принадлежности точки заданной фигуре";
	int x, y;
	std::cout << "Введите координату Х: ";
	std::cin >> x;

	std::cout << "Введите координату Y: ";
	std::cin >> y;

	if (x * x + y * y < 9 && y > 0) std::cout << "Точка внутри фигуры\n";
	else if (x * x + y * y > 9 || y < 0) std::cout << "Точка снаружи фигуры\n";
	else std::cout << "Точка на границе\n\n\n";

}
