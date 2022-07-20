#include <cmath>
#include <iostream>
#include <string>
#include "dot.h"
#include <Windows.h> // руссификация консоли

// вариант с композицией.
class Triangle
{
public:
    Triangle(Dot a, Dot b, Dot c) : a { a }, b{ b }, c{ c }
    {
    }

    // вычисляем длины сторон треугольника
    double get_ab()
    {
        return a.distanceTo(b);
    }
    double get_bc()
    {
        return b.distanceTo(c);
    }
    double get_ac()
    {
        return a.distanceTo(c);
    }

    // проверяем является ли треугольника треугольником
    boolean IsNotTriangle(double ab, double bc, double ac)
    {
        if (ac >= ab + ac || ab >= bc + ac || bc >= ab + ac)
        {
            return true;
        }
        return false;
    }

    // вычисляем периметр треугольника
    double Perimiter()
    {
        double ab, bc, ac;
        ab = get_ab();
        bc = get_bc();
        ac = get_ac();
        return ab + bc + ac;
    }

    double SquareSize()
    {
        double ab, bc, ac, p;
        ab = get_ab();
        bc = get_bc();
        ac = get_ac();
        p = Perimiter() / 2;
        return sqrt(p * (p - ab) * (p - bc) * (p - ac));
    }

private:
    // точки создаются внутри трегульника как его элементы
    Dot a;
    Dot b;
    Dot c;
};

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int ax, ay, bx, by, cx, cy;
    double ab, bc, ac;
    std::cout << "Введите через пробел координты точки А\n";
    std::cin >> ax >> ay;
    std::cout << "Введите через пробел координты точки B\n";
    std::cin >> bx >> by;
    std::cout << "Введите через пробел координты точки C\n";
    std::cin >> cx >> cy;
    Dot a(ax, ay);
    Dot b(bx, by);
    Dot c(cx, cy);
    Triangle abc(a, b, c);
    if (abc.IsNotTriangle(abc.get_ab(), abc.get_bc(), abc.get_ac()))
    {
        std::cout << "Объект не является треугольником";
    }
    else 
    {
        std::cout << "Длины сторон треугольника ABC равны \n"
            << "AB : " << abc.get_ab()
            << "\nBC : " << abc.get_bc()
            << "\nAC : " << abc.get_ac() << std::endl;
        std::cout << "\nПериметр треугольника равен " << abc.Perimiter() << std::endl;
        std::cout << "\nПлощадь треугольника равна " << abc.SquareSize() << std::endl;
    }
        
}

