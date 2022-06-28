// ITMO.CPP-Course.Practice_03.Ex_03.Function_For_Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <iostream>
#include <string>
#include <cmath>

long double forBinSearch(double, int);

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a;
    int n;

    std::cout << "���������� 3. ���������� ������� ���������� � ������� �������\n";
    std::cout << "������� ����� a - �� 1 �� 1000 � ����� n - �� 1 �� 10\n";
    std::cin >> a;
    std::cin >> n;
    if ((a < 0 && a > 1001) && (n < 0 && n > 11))
    { 
        std::cout << "������";
    }
    else
    std::cout << a << " ";
    std::cout << n << std::endl;
        
    double answer = forBinSearch(a, n);
    std::cout.precision(7);
    std::cout << "�����: " << answer;
}

long double forBinSearch(double a, int n)
{
    double L = 0;
    double R = a;
    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a)
        {
            L = M;
        }
        else
        {
            R = M;
        }
    }
    return R;
}

