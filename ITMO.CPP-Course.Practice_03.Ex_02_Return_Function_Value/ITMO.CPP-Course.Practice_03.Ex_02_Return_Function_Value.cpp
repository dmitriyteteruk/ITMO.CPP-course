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
	// ������������ �������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// ������������ ������� 3. ������������� �������
	// ���������� 1. ������������� ������� ��� ����������� ���������
	std::cout << "������� 2. ���������� ����������� �������� �������\n";

	std::string name;
	std::cout << "��� ���� ���?" << std::endl;
	std::cin >> name;
	std::string nameOut = privet(name);
	return 0;
}