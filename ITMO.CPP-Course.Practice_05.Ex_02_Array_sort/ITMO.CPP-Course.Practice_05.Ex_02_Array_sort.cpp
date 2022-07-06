#include <Windows.h> // руссификация консоли
#include <iostream>

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    const int N = 10;

    int array[N] = { 1, 25, 6, 32, 5, 96, 23, 4, 55 };
    int min = 0;
    int max = 0;
    int buf = 0;

    for (int i = 0; i < N; i++)
    {
        min = i;

        for (int j = i + 1; j < N; j++)
        {
            min = (array[j] < array[min] ? j : min);
            if (i != min)
            {
                buf = array[i];
                array[i] = array[min];
                array[min] = buf;
            }
        }

        
        
    }
    for (int i : array) std::cout << i << '\t';
}

