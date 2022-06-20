// ITMO.CPP-Course.Practice_02.Controls_Tasks.01_Check_the_year.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <windows.h>
#include <ctime>

int main()
{
	// руссификация консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Задание 1. Определение високосного года
	// Год является високосным, если его номер кратен 4, но не кратен 100, а
	// также, если он кратен 400

	// Требуется определить, является ли год с данным номером високосным. Если год
	// является високосным, то выведите YES, иначе выведите NO.
	
	std::cout << "Задание 1. Определение високосного года\n";
	int a;
	std::cout << "Введите год: "; std::cin >> a;

	if ((a % 4 == 0) && (a % 100 != 0)) {
		std::cout << a << " вискокосный год";
	}
	else if ((a % 400 == 0) && (a % 100 != 0))
	{
		std::cout << a << " вискокосный год";
	}
	else std::cout << a << " НЕ вискокосный год";
}