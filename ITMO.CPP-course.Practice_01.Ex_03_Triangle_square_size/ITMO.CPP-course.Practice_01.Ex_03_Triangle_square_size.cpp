// ITMO.CPP-course.Practice_01.Ex_03_Triangle_square_size.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // руссификация консоли
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    // установка точности
    cout.precision(2);

    double a, b, c, p;
    double perimeter;
    double square_size;

    cout << "##### Упражнение 3. Расчет площади треугольника #####\n";
    cout << "Введите значение сторон треугольника: \n";
    cout << "a = ";
    cin >> a;
    cout << "\nb = ";
    cin >> b;
    cout << "\nc = ";
    cin >> c;
    perimeter = a + b + c;
    p = perimeter / 2;
    cout << "Периметр треугольника равен a + b + c = " << perimeter << endl;
    square_size = sqrt(p * (p - a) * (p - b) * (p - c));
    
    cout << "Площадь треугольника равна " << square_size;

}
