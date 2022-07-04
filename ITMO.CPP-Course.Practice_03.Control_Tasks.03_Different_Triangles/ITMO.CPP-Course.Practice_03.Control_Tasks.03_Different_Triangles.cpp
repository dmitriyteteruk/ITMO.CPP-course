// ITMO.CPP-Course.Practice_03.Control_Tasks.03_Different_Triangles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h> // ������������ �������
#include <iostream>
#include <cmath>


double fixedSidesTriangle(double);
double diffetentSidesTriangle(double, double, double);

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a(0), b(0), c(0);
    std::cout << "������� ����� ������ ������������ ����� ������: \n";
    std::cin >> a >> b >> c;
    if (a == b && b == c)
    {
        std::cout << "������� ��������������� ������������ ����� " << fixedSidesTriangle(a);
    }
    else if (a != 0 && b != 0 && c != 0)
    {
        std::cout << "������� ������������ ����� " << diffetentSidesTriangle(a, b, c);
    }
    else 
    {
        std::cout << "������ ��� ����� ������.";
    }
}

double fixedSidesTriangle(double a)
{
    double size = pow(3, 1.0 / 3) / 4 * a * a;    // ������� ������� ��������������� ������������
    return size;
}

double diffetentSidesTriangle(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    double size = sqrt(p * (p - a) * (p - b) * (p - c));   // ������� ������������ � ������ ������ ������
    return size;
}