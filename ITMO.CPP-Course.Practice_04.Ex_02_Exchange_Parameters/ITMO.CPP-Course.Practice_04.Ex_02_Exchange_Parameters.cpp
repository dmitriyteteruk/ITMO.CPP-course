// ITMO.CPP-Course.Practice_04.Ex_02_Exchange_Parameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(int*, int*);
void swap(int&, int&);

int main()
{
    int x = 5, y = 10;
    swap(&x, &y);
    std::cout << "\nx = " << x << " &x = " << &x;
    std::cout << "\ny = " << y << " &y = " << &y;
    
    swap(x, y);
    std::cout << "\nx = " << x << " &x = " << &x;
    std::cout << "\ny = " << y << " &y = " << &y;
}

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

