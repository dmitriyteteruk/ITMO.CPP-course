#include <Windows.h> // руссификация консоли
#include <iostream>

void sortArrayFun(int Array[], const int N);

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    const int N = 10;
    int array[N] = { 1, 25, 6, 32, 5, 96, 23, 4, 55 };

    std::cout << "Исходный массив\n";
    for (int i = 0; i < N; i++)
    {
        std::cout << array[i] << " ";
    }

    sortArrayFun(array, N);


}

void sortArrayFun(int Array[], const int N)
{
    int min = 0;
    int max = 0;
    int buf = 0;

    for (int i = 0; i < N; i++)
    {
        min = i;

        for (int j = i + 1; j < N; j++)
        {
            min = (Array[j] < Array[min] ? j : min);
            if (i != min)
            {
                buf = Array[i];
                Array[i] = Array[min];
                Array[min] = buf;
            }
        }

    }

    std::cout << "\nМассив отсортированнй черех функцию:\n";
    for (int i = 0; i < N; i++)
    {
        std::cout << Array[i] << " ";
    }
    
}

