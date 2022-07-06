// ITMO.CPP-Course.Practice_04.Ex_01_Pass_Parameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void fum_value(double k, double x, double y)
{
    x = x + k;
    y = y + k;
}

void fum_ptr(double k, double* x, double* y) 
{
    *x = *x + k;
    *y = *y + k;
}

void fum_ref(double k, double& x, double& y)
{
    x = x + k;
    y = y + k;
}

void print(double x, double y)
{
    std::cout << "x = " << x << "; y = " << y << std::endl;
}

int main()
{
    double k = 2.5;
    double xv = 10;
    double yv = 10;

    print(xv, yv);

    fum_value(k, xv, yv);
    print(xv, yv);

    fum_ptr(k, &xv, &yv);
    print(xv, yv);

    fum_ref(k, xv, yv);
    print(xv, yv);

}

