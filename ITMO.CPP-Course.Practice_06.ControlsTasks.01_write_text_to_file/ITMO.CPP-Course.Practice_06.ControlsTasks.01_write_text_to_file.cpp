
#include <Windows.h> // ������������ �������
#include <iostream>
#include <fstream>

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int const n = 1000;
    char text[n];

    std::cout << "������� ����� �������������, ��� ��������� ������� ������ *\n";

    std::cin.get(text, n, '*');
    std::ofstream text2("text2.txt");
    if (!text2)
        {
            std::cout << "���� ������� ����������\n";
            return 1;
        }
    text2 << text;
    std::cout << "������������� ��������� � ���� text2.txt";
}