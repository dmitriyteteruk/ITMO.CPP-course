#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

class Triangle
{
public:
    Triangle() : message("Не верно заданы стороны треугольника")
    {
    }

    void printMessage() const
    {
        std::cout << message << std::endl;
    }
private:
    std::string message;
};

double triangle_size(int a, int b, int c)
{
    double square_size, p;
    int perimeter;
    perimeter = a + b + c;
    p = perimeter / 2;
    if ((a >= b+c) || (b >= a+c) || (c >= a+b))
    {
        throw Triangle();
    }
    return square_size = sqrt(p * (p - a) * (p - b) * (p - c));
}


int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::cout << "Введите через пробел длины трех сторон треугольника для вычисления его площади:\n";

    int a, b, c;
    double result;
    std::cin >> a >> b >> c;

        try
        {
            result = triangle_size(a, b, c);
            std::cout << "Площадь треугольника равна " << result << std::endl;
        }

        catch (Triangle& error)
        {
            std::cout << "Ошибка: ";
            error.printMessage();
            return 1;
        }
    return 0;
}


