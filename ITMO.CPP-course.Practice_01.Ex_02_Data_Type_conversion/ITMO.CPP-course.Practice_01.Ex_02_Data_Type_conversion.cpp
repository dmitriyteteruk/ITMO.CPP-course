// ITMO.CPP-course.Practice_01.Ex_02_Data_Type_conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // ������������ �������

#include <iostream>

using namespace std;
int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "#####   �������� 01, ������� 02   #####";
    cout.precision(5);   // 4 ����� ���������� �������� - ����� ����� � �������

    system("chcp 1251");
    double x;
    //int x;
    double a, b;

    cout << "\n������� a � b:\n";
    cin >> a;
    cin >> b;

    x = a / b;

    cout << "\nx = " << x << endl;
    
    cout << sizeof(a / b) << ends << sizeof(x) << endl;     
    // a = 17, b = 5
    // int x = 3 sizeof 84, double x = 3,4 sizeof 88
    
    cout << "#####   ���� 25   #####\n";

    string name3;
    cout << "������� ���� ���";
    double z;
    double c, d;
    cout << "\n������� c � d:\n";
    cin >> c;
    cin >> name3;
    cin >> d;
    z = c / d;
    cout << "\nz = " << z << endl;
    cout << "������, " << name3 << "!\n";
    return 0;

}

