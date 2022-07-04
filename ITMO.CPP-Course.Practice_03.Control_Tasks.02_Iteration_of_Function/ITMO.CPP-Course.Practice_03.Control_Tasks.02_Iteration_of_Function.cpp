// ITMO.CPP-Course.Practice_03.Control_Tasks.02_Iteration_of_Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // руссификация консоли
#include <iostream>

double cubeRoot(double);
double cubeRootIteration(double);

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::cout << "### Контольное Задание 2. Применение итерации реализации функции. \n функция pow(a,1.0/3)\n";
    double a;
    std::cout << "Введите число, для вычисления кубического корня из него: \n";
    std::cin >> a;
    std::cout << cubeRoot(a);
    std::cout << "\n\n\nВычисление через итерацию:\n";
    std::cout << cubeRootIteration(a);

}

double cubeRoot(double n)
{
    double result;
    result = pow(n, 1.0 / 3);
    return result;
}

double cubeRootIteration(double n)
{
        double x1 = 0;
        double x2 = n;
        while (abs(x1 - x2) > 0.000001) {
            x1 = x2;
            x2 = (n / (x1 * x1) + 2 * x1) / 3;
        }
        return x2;
}