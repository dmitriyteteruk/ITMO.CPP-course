// ITMO.CPP-Course.Practice_02.Controls_Tasks.04_Shoot_contest.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <windows.h>

int main()
{
	// ������������ �������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "������� 4. �������� �� ������";
	// ������ ������� 2 - 10, 5, 1 � 0 �����
	// ����� 5 ���������
	
	int x, y, round(1), points(0);

// ������� 1 - � ������ for ��� 5 ������� 
//	for (int i = 0; i < 5; i++)

// ������� 2 - � ������ do while
	do 
	{
		std::cout << "\n������� �����: " << round;
		std::cout << "\n������� ���������� �: ";
		//x = rand() % 0 + 3;
		std::cin >> x;

		std::cout << "������� ���������� Y: ";
		// y = rand() % 0 + 3;
		std::cin >> y;

		if (x * x + y * y <= 1) points += 10;
		else if (x * x + y * y > 1 && x * x + y * y <= 4) points += 5;
		else if (x * x + y * y > 4 && x * x + y * y <= 9) points += 1;
		else points += 0;

		round += 1;
	} while (points <= 50);

	if (points > 40) std::cout << "\n�� ������� " << points << " ����� � ��� ������� �������.";
	else if (points <= 40 && points > 25) std::cout << "\n�� ������� " << points << " ����� � ��� ������� ������ ������.";
	else std::cout << "\n�� ������� " << points << " ����� � ��� ������� �������.";
}
