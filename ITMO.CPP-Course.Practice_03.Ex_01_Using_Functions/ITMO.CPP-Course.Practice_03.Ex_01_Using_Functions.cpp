// ITMO.CPP-Course.Practice_03.Ex_01_Using_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>


void privet(std::string);

int main()
{
	// руссификация консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Практическое занятие 3. Использование функций
	// Упражнение 1. Использование функции при организации программы
	std::cout << "Упражнение 1. Использование функции при организации программы\n";
	
	std::string name;
	std::cout << "Как твое имя?" << std::endl;
	std::cin >> name;
	privet(name);
	return 0;
}

void privet(std::string name)
{
	std::cout << name << ", hello!" << std::endl;
}