#include <Windows.h> // ������������ �������
#include <iostream>

int Myroot(double, double, double, double&, double&);

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a, b, c, x1, x2;
    std::cout << "������� ����� ������ ������������ ����������� ��������� a, b � c\n";
    std::cin >> a >> b >> c;

    
    if (Myroot(a, b, c, x1, x2) == 1)
    {
        std::cout << "\n� ��������� ��� �����. x1 = " << x1 << ", x2 = " << x2;

    }
    else if (Myroot(a, b, c, x1, x2) == 0)
    {
        std::cout << "\n� ��������� ����� ���� ������. X1 = X2 = " << x1;
    }
    else
    {
         std::cout << "\n� ��������� ��� ������.";
    }
}

int Myroot(double a, double b, double c, double& x1, double& x2)
{
    double D = b * b - 4 * a * c;
    if (D > 0)
    {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        return 1;
    }
    else if (D == 0)
    {
        x1 = (-b) / (2 * a);
        x2 = x1;
        return 0;
    }
    else {
        return -1;
    }
}
