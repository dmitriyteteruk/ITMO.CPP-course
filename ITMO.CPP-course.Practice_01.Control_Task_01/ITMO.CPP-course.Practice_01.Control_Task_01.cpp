// ITMO.CPP-course.Practice_01.Control_Task_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  ����������� �������.
// ������� 1. ������ ������� ��������������
// 
/*	
	����������� ����������:
	� = 0;0
	B = 0;5
	C = 3;7
	D = 5;3
	E = 4;0
 */
#include <iostream>
#include <windows.h>
#include <cmath>

int main()
{
	// ������������ �������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	double square_size;
	// ����������� �������
	// double x1 = 0, y1 = 0, x2 = 0, y2 = 5, x3 = 3, y3 = 7, x4 = 5, y4 = 3, x5 = 4, y5 = 0;

	// ������� � ������� �� ������������
	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
	
	std::cout << "������ ������� �������������� � �������������� ������� ������\n";
	std::cout << "������� ���������� ��� ����� �:\n";
	std::cout << "X: ";
	std::cin >> x1;
	std::cout << "Y: ";
	std::cin >> y1;
	
	std::cout << "������� ���������� ��� ����� B:\n";
	std::cout << "X: ";
	std::cin >> x2;
	std::cout << "Y: ";
	std::cin >> y2;

	std::cout << "������� ���������� ��� ����� C:\n";
	std::cout << "X: ";
	std::cin >> x3;
	std::cout << "Y: ";
	std::cin >> y3;

	std::cout << "������� ���������� ��� ����� D:\n";
	std::cout << "X: ";
	std::cin >> x4;
	std::cout << "Y: ";
	std::cin >> y4;

	std::cout << "������� ���������� ��� ����� E:\n";
	std::cout << "X: ";
	std::cin >> x5;
	std::cout << "Y: ";
	std::cin >> y5;
	
	std::cout << "���������� ����� \tX, Y";
	std::cout << "\n\tA \t\t" << x1 << ", " << y1;
	std::cout << "\n\tB \t\t" << x2 << ", " << y2;
	std::cout << "\n\tC \t\t" << x3 << ", " << y3;
	std::cout << "\n\tD \t\t" << x4 << ", " << y4;
	std::cout << "\n\tE \t\t" << x5 << ", " << y5;

	square_size = (x1*y2 + x2*y3 + x3*y4 + x4*y5 + x5*y1 - x2*y1 - x3*y2 - x4*y3 - x5*y4 - x1*y5)/2;
	std::cout << "\n������� �������������� �����: " << abs(square_size);

}

