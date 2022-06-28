// ITMO.CPP-Course.Practice_03.Ex_03.Function_For_Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <iostream>
#include <string>
#include <cmath>

long double forBinSearch(double, int);

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a;
    int n;

    std::cout << "Упражнение 3. Реализация сложных алгоритмов с помощью функций\n";
    std::cout << "Введите число a - от 1 до 1000 и число n - от 1 до 10\n";
    std::cin >> a;
    std::cin >> n;
    if ((a < 0 && a > 1001) && (n < 0 && n > 11))
    { 
        std::cout << "Ошибка";
    }
    else
    std::cout << a << " ";
    std::cout << n << std::endl;
        
    double answer = forBinSearch(a, n);
    std::cout.precision(7);
    std::cout << "Ответ: " << answer;
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

