// ITMO.CPP-Course.Practice02.Control_Tasks.02_Biggest_Number_out_of_three.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <windows.h>

int main()
{
	// ������������ �������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// ���� ��� �����.
	// ��������� ���������� ���������� �� ��� � ������� �� �����.
	
	std::cout << "������� 2. ���������� ���������� �� ���� ����� � ������� �� �����\n";
	int A, B, C;
	std::cout << "������� ����� �: "; std::cin >> A;
	std::cout << "������� ����� B: "; std::cin >> B;
	std::cout << "������� ����� C: "; std::cin >> C;

	if (A > B && A > C) {
		std::cout << A << " ����� ������� �����";
	}
	else if (B > A && B > C)
	{
		std::cout << B << " ����� ������� �����";
	}
	else if (C > A && C > B)
	{
		std::cout << C << " ����� ������� �����";
	}
	
	else std::cout << "����������� ����� �� ��������";
}
