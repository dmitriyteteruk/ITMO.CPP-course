// ITMO.CPP-Course.Practice_03.Ex_04.Recursion_01_Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // ������������ �������
#include <iostream>

// ����� ������� 1 - ����� �����
int addNumders(int n)
{
    if (n == 1) return 1; // ����� �� ��������
    else return (n + addNumders(n - 1));
}

int addNumbers(int a, int b)
{
    int sumFirstLast = a + b;
    return sumFirstLast;
}

// ����� ������� 2 - �������� �������
int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int interval;
    int start;
    int n;
    int x;
    int m;
    std::cout << "###   ������� 1 - ����� �����\n\n";
    std::cout << "������� ����� � ��� �������� � �������\n";
    std::cin >> x;
    n = addNumders(x);
    std::cout << "����� ����� �� 1 �� " << x << " ����� " << n << "\n";
    std::cout << "����� " << x << " � " << n << " ����� " << addNumbers(x, n) << "\n";

    std::cout << "������� ������� "; std::cin >> interval;
    std::cout << "������� ����� ������ "; std::cin >> start;

    std::cout << "����� ����� �� " << start << " �� " << start + interval  << " ����� " << addNumbers(start, (start + interval)) << "\n";

    std::cout << "###   ������� 2 -  �������� �������\n\n";
    std::cout << "������� ����� N ��� �������� � ������� ��������� ������� ���\n";
    std::cin >> m;
    std::cout << "������� ����� M ��� �������� � ������� ��������� ������� ���\n";
    std::cin >> n;
    std::cout << "��� " << m << " � " << n << " ����� " << gcd(m, n);


}


