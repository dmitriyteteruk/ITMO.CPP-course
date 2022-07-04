// ITMO.CPP-Course.Practice_03.Control_Tasks.02_Iteration_of_Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // ������������ �������
#include <iostream>

double cubeRoot(double);
double cubeRootIteration(double);

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::cout << "### ���������� ������� 2. ���������� �������� ���������� �������. \n ������� pow(a,1.0/3)\n";
    double a;
    std::cout << "������� �����, ��� ���������� ����������� ����� �� ����: \n";
    std::cin >> a;
    std::cout << cubeRoot(a);
    std::cout << "\n\n\n���������� ����� ��������:\n";
    std::cout << cubeRootIteration(a);

}

double cubeRoot(double n)
{
    double result;
    result = pow(n, 1.0 / 3);
    return result;
}

double cubeRootIteration(double a)
{
    double xi = a, // ��������� �������� y
        xi1 = 0; // �������� yi+1

    while (true)
    {
        xi1 = 0.5 * (xi + 3 * a / (2 * xi * xi + a / xi)); // ������������ ������� ���������� ����� �����������

        if (abs(xi1 - xi) < pow(10.0, -5.0)) // ������� ��������� ��������
            break; // ����� �� �����

        xi = xi1; // ��������� ������� �������� y
    }

    std::cout << xi << std::endl;

    system("pause");
    return 0;
}