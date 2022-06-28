// ITMO.CPP-Course.Practice_03.Control_Tasks.01_Size_of_Figure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h> // руссификация консоли
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
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int abx(0), aby(1), aex(1), aey(0), edx(2), edy(2), dcx(1), dcy(5), cbx(0), cby(4);
    double a, b, c, d, e, f, g;
    double sizeABF, sizeFGC, sizeEGD, sizeTotal;

    //std::cout << "Введите координаты 5 вершин пятиугольника \n";
    //std::cout << "abX "; std::cin >> abx ; std::cout << "abY "; std::cin >> aby;
    //std::cout << "\naeX "; std::cin >> aex; std::cout << "aeY "; std::cin >> aey;    
    //std::cout << "\nedX "; std::cin >> edx; std::cout << "edY "; std::cin >> edy;
    //std::cout << "\ndcX "; std::cin >> dcx; std::cout << "dcY "; std::cin >> dcy;
    //std::cout << "\ncbX "; std::cin >> cbx; std::cout << "cbY "; std::cin >> cby;

    a = length(abx, aby, aex, aey); std::cout << "\nДлина стороны A " << a;
    b = length(abx, aby, cbx, cby); std::cout << "\nДлина стороны B " << b;
    c = length(dcx, dcy, cbx, cby); std::cout << "\nДлина стороны C " << c;
    d = length(dcx, dcy, edx, edy);  std::cout << "\nДлина стороны D " << d;
    e = length(aex, aey, edx, edy);  std::cout << "\nДлина стороны E " << e;
    f = length(aex, aey, cbx, cby);  std::cout << "\nДлина стороны F " << f;
    g = length(aex, aey, dcx, dcy);  std::cout << "\nДлина стороны G " << g;
    

    sizeABF = size(a, b, f); std::cout << "\nПлощадь треугольника ABF " << sizeABF;
    sizeEGD = size(e, g, d); std::cout << "\nПлощадь треугольника EGD " << sizeEGD;
    sizeFGC = size(f, g, c); std::cout << "\nПлощадь треугольника FGC " << sizeFGC;

    sizeTotal = sizeABF + sizeEGD + sizeFGC;
    std::cout << "\nПлощадь пятиугольника = " << sizeTotal;

}

