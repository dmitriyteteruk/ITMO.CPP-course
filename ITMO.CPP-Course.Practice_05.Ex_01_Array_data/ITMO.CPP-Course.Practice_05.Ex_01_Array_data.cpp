#include <Windows.h> // ������������ �������
#include <iostream>

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++)
    {
        std::cout << "mas[" << i << "]=";
        std::cin >> mas[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++) 
    {
        s += mas[i];
    }

    std::cout << "\n����� ���� ����� ������� ����� " << s;
}
