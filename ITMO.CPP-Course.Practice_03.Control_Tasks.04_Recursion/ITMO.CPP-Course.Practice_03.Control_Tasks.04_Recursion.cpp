// ITMO.CPP-Course.Practice_03.Control_Tasks.04_Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // ������������ �������
#include <iostream>

int sumFives(int a);

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    int a;
    std::cout << "������� ����� ��� ���� �� ���� ����� 5\n";
    std::cin >> a;
    std::cout << sumFives(a);



}

int sumFives(int a)
{
    if (a == 1) return 5;
    else return(a * 5 + sumFives(a - 1));
}
