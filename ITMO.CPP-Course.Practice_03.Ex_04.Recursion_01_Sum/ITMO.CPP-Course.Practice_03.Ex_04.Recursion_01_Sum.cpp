// ITMO.CPP-Course.Practice_03.Ex_04.Recursion_01_Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // руссификация консоли
#include <iostream>

// часть задания 1 - сумма чисел
int addNumders(int n)
{
    if (n == 1) return 1; // выход из рекурсии
    else return (n + addNumders(n - 1));
}

int addNumbers(int a, int b)
{
    int sumFirstLast = a + b;
    return sumFirstLast;
}

// часть задания 2 - алгоритм Евклида
int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int interval;
    int start;
    int n;
    int x;
    int m;
    std::cout << "###   Задание 1 - сумма чисел\n\n";
    std::cout << "Введите число Х для передачи в функцию\n";
    std::cin >> x;
    n = addNumders(x);
    std::cout << "Сумма чисел от 1 до " << x << " равна " << n << "\n";
    std::cout << "Сумма " << x << " и " << n << " равна " << addNumbers(x, n) << "\n";

    std::cout << "Введите интерал "; std::cin >> interval;
    std::cout << "Введите число начала "; std::cin >> start;

    std::cout << "Сумма чисел от " << start << " до " << start + interval  << " равна " << addNumbers(start, (start + interval)) << "\n";

    std::cout << "###   Задание 2 -  алгоритм Евклида\n\n";
    std::cout << "Введите число N для передачи в функцию алгоритма Евклида НОД\n";
    std::cin >> m;
    std::cout << "Введите число M для передачи в функцию алгоритма Евклида НОД\n";
    std::cin >> n;
    std::cout << "НОД " << m << " и " << n << " равен " << gcd(m, n);


}


