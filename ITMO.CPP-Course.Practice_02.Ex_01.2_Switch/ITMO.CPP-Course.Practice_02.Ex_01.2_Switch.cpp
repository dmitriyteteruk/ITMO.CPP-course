// ITMO.CPP-Course.Practice_02.Ex_01.2_Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

int main()
{
	// руссификация консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "Задание 2. Использование оператора switch при реализации выбора\n";
	
	char op;
	std::cout << "Сделай свой выбор, собери авто своей мечты: ";
	std::cin >> op;

	switch (op)
	{
	case 'S':
		std::cout << "Радио играть должно\n";
	case 'V':
		std::cout << "Кондиционер хочу\n";

	default:
		std::cout << "Колеса круглые\n";
		std::cout << "Мощный двигатель\n";
	}
}
