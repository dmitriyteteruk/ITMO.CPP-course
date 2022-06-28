// ITMO.CPP-Course.Practice_03.Control_Tasks.01_Size_of_Figure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // ������������ �������
#include <iostream>
#include <cmath>;

double length(int xb, int xc, int yb, int yc)
{
    double l = sqrt(((xb - xc)*(xb - xc))+((yb - yc)*(yb - yc)));
    return l;
}

double size(double a, double b, double c)
{
    double p = (a + b + c)/2;
    double size = sqrt(p * (p - a) * (p - b) * (p - c));
    return size;
}

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int abx(0), aby(1), aex(1), aey(0), edx(2), edy(2), dcx(1), dcy(5), cbx(0), cby(4);
    double a, b, c, d, e, f, g;
    double sizeABF, sizeFGC, sizeEGD, sizeTotal;

    //std::cout << "������� ���������� 5 ������ ������������� \n";
    //std::cout << "abX "; std::cin >> abx ; std::cout << "abY "; std::cin >> aby;
    //std::cout << "\naeX "; std::cin >> aex; std::cout << "aeY "; std::cin >> aey;    
    //std::cout << "\nedX "; std::cin >> edx; std::cout << "edY "; std::cin >> edy;
    //std::cout << "\ndcX "; std::cin >> dcx; std::cout << "dcY "; std::cin >> dcy;
    //std::cout << "\ncbX "; std::cin >> cbx; std::cout << "cbY "; std::cin >> cby;

    a = length(abx, aby, aex, aey); std::cout << "\n����� ������� A " << a;
    b = length(abx, aby, cbx, cby); std::cout << "\n����� ������� B " << b;
    c = length(dcx, dcy, cbx, cby); std::cout << "\n����� ������� C " << c;
    d = length(dcx, dcy, edx, edy);  std::cout << "\n����� ������� D " << d;
    e = length(aex, aey, edx, edy);  std::cout << "\n����� ������� E " << e;
    f = length(aex, aey, cbx, cby);  std::cout << "\n����� ������� F " << f;
    g = length(aex, aey, dcx, dcy);  std::cout << "\n����� ������� G " << g;
    

    sizeABF = size(a, b, f); std::cout << "\n������� ������������ ABF " << sizeABF;
    sizeEGD = size(e, g, d); std::cout << "\n������� ������������ EGD " << sizeEGD;
    sizeFGC = size(f, g, c); std::cout << "\n������� ������������ FGC " << sizeFGC;

    sizeTotal = sizeABF + sizeEGD + sizeFGC;
    std::cout << "\n������� ������������� = " << sizeTotal;

}

