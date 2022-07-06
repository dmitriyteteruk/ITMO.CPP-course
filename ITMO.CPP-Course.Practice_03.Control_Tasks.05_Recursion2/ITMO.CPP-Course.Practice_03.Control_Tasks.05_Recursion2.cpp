// ITMO.CPP-Course.Practice_03.Control_Tasks.05_Recursion2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // руссификация консоли
#include <iostream>

using namespace std;
int converter(int a);

int main()
{
    
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int a;
    std::cout << "Введите число для конвертации и десятичной системы в двоичную\n";
    std::cin >> a;
    converter(a);
    
}

// что-то тут не правильно, т.к. двоичное число не корректно отображается. 
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



