#include <Windows.h> // руссификация консоли
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct StudentGrade
{
    string name;
    char grade;
};

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
}

