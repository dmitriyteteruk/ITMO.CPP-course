// ITMO.CPP-Course.Practice_01.Ex_01_InputOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h> // руссификация консоли

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string name;
    cout << "What is your name?\n";
    cin >> name;
    cout << "Hello, " << name << "!\n";
}