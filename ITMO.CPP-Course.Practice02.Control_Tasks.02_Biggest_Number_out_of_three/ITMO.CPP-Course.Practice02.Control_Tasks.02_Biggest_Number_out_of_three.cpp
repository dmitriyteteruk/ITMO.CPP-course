// ITMO.CPP-Course.Practice02.Control_Tasks.02_Biggest_Number_out_of_three.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <windows.h>

int main()
{
	// руссификация консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Даны три числа.
	// Требуется определить наибольшее из них и вывести на экран.
	
	std::cout << "Задание 2. Определить наибольшее из трех чисел и вывести на экран\n";
	int A, B, C;
	std::cout << "Введите число А: "; std::cin >> A;
	std::cout << "Введите число B: "; std::cin >> B;
	std::cout << "Введите число C: "; std::cin >> C;

	if (A > B && A > C) {
		std::cout << A << " самое большое число";
	}
	else if (B > A && B > C)
	{
		std::cout << B << " самое большое число";
	}
	else if (C > A && C > B)
	{
		std::cout << C << " самое большое число";
	}
	
	else std::cout << "Наибольшего числа не выявлено";
}
