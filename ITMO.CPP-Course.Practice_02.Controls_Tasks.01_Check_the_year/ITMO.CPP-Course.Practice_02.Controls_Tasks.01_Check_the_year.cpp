// ITMO.CPP-Course.Practice_02.Controls_Tasks.01_Check_the_year.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <windows.h>
#include <ctime>

int main()
{
	// ������������ �������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// ������� 1. ����������� ����������� ����
	// ��� �������� ����������, ���� ��� ����� ������ 4, �� �� ������ 100, �
	// �����, ���� �� ������ 400

	// ��������� ����������, �������� �� ��� � ������ ������� ����������. ���� ���
	// �������� ����������, �� �������� YES, ����� �������� NO.
	
	std::cout << "������� 1. ����������� ����������� ����\n";
	int a;
	std::cout << "������� ���: "; std::cin >> a;

	if ((a % 4 == 0) && (a % 100 != 0)) {
		std::cout << a << " ����������� ���";
	}
	else if ((a % 400 == 0) && (a % 100 != 0))
	{
		std::cout << a << " ����������� ���";
	}
	else std::cout << a << " �� ����������� ���";
}