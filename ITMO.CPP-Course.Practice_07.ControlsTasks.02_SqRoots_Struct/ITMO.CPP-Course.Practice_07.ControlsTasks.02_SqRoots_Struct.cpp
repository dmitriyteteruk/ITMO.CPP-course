#include <iostream>
#include <Windows.h>

struct SqRoots 
{
    double x1, x2;
};

SqRoots root(double a, double b, double c)
{
    SqRoots root{};
    double D = b * b - 4 * a * c;
    if (D > 0)
    {
        root.x1 = ((-b) + sqrt(D) / (2 * a));
        root.x2 = ((-b) - sqrt(D) / (2 * a));
    }
    if (D == 0)
    {
        root.x1 = (-b) / (2 * a);
        root.x2 = root.x1;
    }
    return root;
}

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a, b, c;
    std::cout << "Введите через пробел коэффициенты квадратного уравнения a, b и c\n";
    std::cin >> a >> b >> c;
    SqRoots r1 = root(a, b, c);
    std::cout << "Корни квадратного уравнения равны " << r1.x1 << " и " << r1.x2 << "\n";
}
