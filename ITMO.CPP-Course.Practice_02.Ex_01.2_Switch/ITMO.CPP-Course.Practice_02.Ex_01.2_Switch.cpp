// ITMO.CPP-Course.Practice_02.Ex_01.2_Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

int main()
{
	// ������������ �������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "������� 2. ������������� ��������� switch ��� ���������� ������\n";
	
	char op;
	std::cout << "������ ���� �����, ������ ���� ����� �����: ";
	std::cin >> op;

	switch (op)
	{
	case 'S':
		std::cout << "����� ������ ������\n";
	case 'V':
		std::cout << "����������� ����\n";

	default:
		std::cout << "������ �������\n";
		std::cout << "������ ���������\n";
	}
}
