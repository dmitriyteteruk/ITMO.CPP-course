// ITMO.CPP-Course.Practice_03.Ex_02.Function_Overload.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>

void privet(std::string);
void privet(std::string, int);

int main()
{
	// ������������ �������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// ������������ ������� 3. ������������� �������
	// ���������� 2. ���������� �������
	std::cout << "���������� 2. ���������� �������\n";

	std::string name;
	std::cout << "��� ���� ���?" << std::endl;
	std::cin >> name;
	
	int k;
	std::cout << "input a number: " << std::endl;
	std::cin >> k;
		
	privet(name);
	privet(name, k);

	return 0;
}

void privet(std::string name)
{
	std::cout << name << ", hello!" << std::endl;
}

void privet(std::string name, int k)
{
	std::cout << name << ", hello! You input " << k << std::endl;
}