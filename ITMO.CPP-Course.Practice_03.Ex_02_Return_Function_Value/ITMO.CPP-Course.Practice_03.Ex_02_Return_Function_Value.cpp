// ITMO.CPP-Course.Practice_03.Ex_02_Return_Function_Value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <windows.h>
#include <string>


std::string privet(std::string name)
{
	std::string str = name + ", " + "hello!\n";
	return str;
}

int main()
{
	// руссификация консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Практическое занятие 3. Использование функций
	// Упражнение 1. Использование функции при организации программы
	std::cout << "Задание 2. Реализация возвращения значения функции\n";

	std::string name;
	std::cout << "Как твое имя?" << std::endl;
	std::cin >> name;
	std::string nameOut = privet(name);
	return 0;
}