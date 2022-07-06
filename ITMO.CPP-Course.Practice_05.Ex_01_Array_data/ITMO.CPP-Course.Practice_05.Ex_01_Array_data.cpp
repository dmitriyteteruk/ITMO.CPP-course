#include <Windows.h> // руссификация консоли
#include <iostream>

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int n = 4;
    double mas[n];

    for (int i = 0; i < n; i++)
    {
        std::cout << "mas[" << i << "]=";
        std::cin >> mas[i];
    }

    double s = 0;
    for (int i = 0; i < n; i++) 
    {
        s += mas[i];
    }

    std::cout << "\nСумма всех чисел массива равна " << s;

    double average(0);
    average = s / n;
    std::cout << "\nСреднее арифметическое чисел массива равно " << average;

    // сумма всех положительных элементов
    double temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
        {
            temp += mas[i];
        }       
    }
    std::cout << "\nСумма всех положительных чисел массива равна " << temp;

    // сумма всех отрицательных элементов
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
        {
            temp += mas[i];
        }
    }
    std::cout << "\nСумма всех отрицательных чисел массива равна " << temp;

    // сумма всех элементов с нечетными индексами
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0 )
        {
            temp += mas[i];
        }
    }
    std::cout << "\nСумма всех элементов массива с нечетными индексами " << temp;

    // сумма всех элементов с четными индексами
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            temp += mas[i];
        }
    }
    std::cout << "\nСумма всех элементов массива с четными индексами " << temp;

    // найти минимальный элемент массива и вывести их индексы
    double min = mas[0];
    int index = 0;
    int indexMin = 0;
    int indexMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < min)
        {
            min = mas[i];
            index = i;
            indexMin = index;
        }
        
    }
    std::cout << "\nМинимальное значение в массиве " << min << ", а индекс знаечния " << index;

    // найти максимальный элемент массива и вывести их индексы
    double max = mas[0];
    index = 0;
    

    for (int i = 0; i < n; i++)
    {
        if (mas[i] > max)
        {
            max = mas[i];
            index = i;
            indexMax = index;
        }
    }
    std::cout << "\nМаксимальное значение в массиве " << max << ", а индекс знаечния " << index;
    
    // найти произведение элементов массива между максимальными и минимальным элементами
    double multi = 1;
    for (int i = indexMin+1; i < indexMax; i++)
    {
        multi = multi * mas[i];
    }
    std::cout << "\nПроизведение элементов массива между минимальным и максимальным элементами равно " << multi;
}
