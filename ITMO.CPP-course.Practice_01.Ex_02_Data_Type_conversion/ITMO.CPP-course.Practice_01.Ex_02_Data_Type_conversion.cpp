// ITMO.CPP-course.Practice_01.Ex_02_Data_Type_conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // руссификация консоли

#include <iostream>

using namespace std;
int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "#####   Практика 01, задание 02   #####";
    cout.precision(5);   // 4 общее количетсов символов - целой части и дробной

    system("chcp 1251");
    double x;
    //int x;
    double a, b;

    cout << "\nВведите a и b:\n";
    cin >> a;
    cin >> b;

    x = a / b;

    cout << "\nx = " << x << endl;
    
    cout << sizeof(a / b) << ends << sizeof(x) << endl;     
    // a = 17, b = 5
    // int x = 3 sizeof 84, double x = 3,4 sizeof 88
    
    cout << "#####   Вася 25   #####\n";

    string name3;
    cout << "Введите свое имя";
    double z;
    double c, d;
    cout << "\nВведите c и d:\n";
    cin >> c;
    cin >> name3;
    cin >> d;
    z = c / d;
    cout << "\nz = " << z << endl;
    cout << "Привет, " << name3 << "!\n";
    return 0;

}

