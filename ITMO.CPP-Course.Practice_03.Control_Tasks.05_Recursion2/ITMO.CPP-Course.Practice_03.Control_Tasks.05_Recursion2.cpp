// ITMO.CPP-Course.Practice_03.Control_Tasks.05_Recursion2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // ������������ �������
#include <iostream>

using namespace std;
int converter(int a);

int main()
{
    
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int a;
    std::cout << "������� ����� ��� ����������� � ���������� ������� � ��������\n";
    std::cin >> a;
    converter(a);
    
}

// ���-�� ��� �� ���������, �.�. �������� ����� �� ��������� ������������. 
int converter(int a)
{
    int ostatok(0);
    if (a = 2) 
    {
        std::cout << a;
        return a;
    }
    else
    {
        converter(a / 2);
        std::cout << a % 2;
        return a;
    }
}



