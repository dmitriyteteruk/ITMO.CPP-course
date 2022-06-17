// ITMO.CPP-Course.Practice_01.Ex_01_InputOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h> // руссификация консоли

#include <iostream>
#include <string>


int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::string name;
    std::string name2;

    std::cout << "Please, enter your full name: ";
    std::getline (std::cin, name);
    std::cout << "Hello, " << name << "!\n";
     
    std::cout << "What is your name? (we will use 'cin')\n" << std::endl;
    std::cin >> name2;
    std::cout << "Hello, " << name2 << "!\n";
    
    std::cout << "Вопрос НА - почему если сначала запускаем cin, то getline не получает строку?\n";
}