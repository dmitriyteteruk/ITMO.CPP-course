// ITMO.CPP-Course.Practice_02.Ex_04_Sum_on_interval.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <windows.h>
#include <ctime>

int main()
{
	// ������������ �������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// ���������� 3. ���������� ����� � ���������� (for) ��� ��������
	std::cout << "���������� 4. ������ ����� ����� �� �������� ���������\n";
	int k{}, m{}, s{};
	std::cout << "������� �������� k: "; std::cin >> k;
	std::cout << "������� �������� m: "; std::cin >> m;
	for (int i = 1; i <= 100; i++) {
		if ((i > k) && (i < m))
			continue;
		s += 1;
	}

	std::cout << "s = " << s << std::endl;
	return 0;
}
