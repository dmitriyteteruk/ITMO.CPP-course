#include <cmath>
#include <iostream>
#include <string>
#include "dot.h"
#include <Windows.h> // ������������ �������

// ������� � �����������.
class Triangle
{
public:
    Triangle(Dot a, Dot b, Dot c) : a { a }, b{ b }, c{ c }
    {
    }

    // ��������� ����� ������ ������������
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

    // ��������� �������� �� ������������ �������������
    boolean IsNotTriangle(double ab, double bc, double ac)
    {
        if (ac >= ab + ac || ab >= bc + ac || bc >= ab + ac)
        {
            return true;
        }
        return false;
    }

    // ��������� �������� ������������
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
    // ����� ��������� ������ ����������� ��� ��� ��������
    Dot a;
    Dot b;
    Dot c;
};

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int ax, ay, bx, by, cx, cy;
    double ab, bc, ac;
    std::cout << "������� ����� ������ ��������� ����� �\n";
    std::cin >> ax >> ay;
    std::cout << "������� ����� ������ ��������� ����� B\n";
    std::cin >> bx >> by;
    std::cout << "������� ����� ������ ��������� ����� C\n";
    std::cin >> cx >> cy;
    Dot a(ax, ay);
    Dot b(bx, by);
    Dot c(cx, cy);
    Triangle abc(a, b, c);
    if (abc.IsNotTriangle(abc.get_ab(), abc.get_bc(), abc.get_ac()))
    {
        std::cout << "������ �� �������� �������������";
    }
    else 
    {
        std::cout << "����� ������ ������������ ABC ����� \n"
            << "AB : " << abc.get_ab()
            << "\nBC : " << abc.get_bc()
            << "\nAC : " << abc.get_ac() << std::endl;
        std::cout << "\n�������� ������������ ����� " << abc.Perimiter() << std::endl;
        std::cout << "\n������� ������������ ����� " << abc.SquareSize() << std::endl;
    }
        
}

