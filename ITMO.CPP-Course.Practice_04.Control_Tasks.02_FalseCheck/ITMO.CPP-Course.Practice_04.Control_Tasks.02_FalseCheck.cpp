#include <Windows.h> // ������������ �������
#include <iostream>

bool Input(int, int);

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    int a, b;
    std::cout << "������� ����� ������ ��� ���� :\n";
    std::cin >> a >> b;
    if (Input(a, b) == false)
    {
        std::cerr << "error";
        return 1;
    }
    int s = a + b;
    return 0;
}

bool Input(int a, int b)
{
    if (a == 0 && b == 0) return true;
    else return false;
}

