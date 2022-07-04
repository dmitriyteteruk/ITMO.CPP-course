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

double cubeRootIteration(double a)
{
    double xi = a, // начальное значение y
        xi1 = 0; // значение yi+1

    while (true)
    {
        xi1 = 0.5 * (xi + 3 * a / (2 * xi * xi + a / xi)); // итерационная формула вычисления корня кубического

        if (abs(xi1 - xi) < pow(10.0, -5.0)) // условие окончание итерации
            break; // выход из цикла

        xi = xi1; // сохраняем текущее значение y
    }

    std::cout << xi << std::endl;

    system("pause");
    return 0;
}