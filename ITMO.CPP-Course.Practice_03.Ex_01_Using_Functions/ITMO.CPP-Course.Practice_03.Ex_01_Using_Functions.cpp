// ITMO.CPP-Course.Practice_03.Ex_01_Using_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>


void privet(std::string);

int main()
{
	// ������������ �������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// ������������ ������� 3. ������������� �������
	// ���������� 1. ������������� ������� ��� ����������� ���������
	std::cout << "���������� 1. ������������� ������� ��� ����������� ���������\n";
	
	std::string name;
	std::cout << "��� ���� ���?" << std::endl;
	std::cin >> name;
	privet(name);
	return 0;
}

void privet(std::string name)
{
	std::cout << name << ", hello!" << std::endl;
}