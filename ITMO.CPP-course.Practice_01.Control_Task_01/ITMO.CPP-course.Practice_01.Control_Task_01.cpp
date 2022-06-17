// ITMO.CPP-course.Practice_01.Control_Task_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Контрольные задания.
// Задание 1. Расчет площади многоугольника

#include <iostream>
#include <windows.h>
#include <cmath>

int main()
{
	// руссификация консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	double square_size;
	double x1 = 0, y1 = 0, x2 = 0, y2 = 5, x3 = 3, y3 = 7, x4 = 5, y4 = 3, x5 = 4, y5 = 0;
	
	std::cout << "Расчет площади многоугольника с использованием формулы Гаусса\n";
	
	std::cout << "Координаты точек \tX, Y";
	std::cout << "\n\tA \t\t" << x1 << ", " << y1;
	std::cout << "\n\tB \t\t" << x2 << ", " << y2;
	std::cout << "\n\tC \t\t" << x3 << ", " << y3;
	std::cout << "\n\tD \t\t" << x4 << ", " << y4;
	std::cout << "\n\tE \t\t" << x5 << ", " << y5;

	square_size = (x1*y2 + x2*y3 + x3*y4 + x4*y5 + x5*y1 - x2*y1 - x3*y2 - x4*y3 - x5*y4 - x1*y5)/2;
	std::cout << "\nПлощадь треугольника равна: " << abs(square_size);

}

