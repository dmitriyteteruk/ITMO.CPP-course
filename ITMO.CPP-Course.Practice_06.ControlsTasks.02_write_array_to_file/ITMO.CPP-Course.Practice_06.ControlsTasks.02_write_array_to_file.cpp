#include <iostream>
#include <fstream>
#include <Windows.h>

void sortAndSaveArrayToFile(int[], int);

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const int N = 10;
    int array[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
        
    sortAndSaveArrayToFile(array, N);
}

void sortAndSaveArrayToFile(int* Array, int N) {
    int min = 0;
    int buf = 0;

    std::cout << "Исходный массив\n";
    for (int i = 0; i < N; i++)
    {
        std::cout << Array[i] << " ";
    }

    std::ofstream saveOriginalArray("Arrays.txt");
    if (!saveOriginalArray) {
        std::cout << "Файл открыть невозможно\n";
        return;
    }
    saveOriginalArray << "Исходный массив:\n";
    for (int i = 0; i < N; i++) {
        saveOriginalArray << Array[i] << " ";
    }
    saveOriginalArray.close();
    
    std::cout << "\nИсходный массив записан в файл Arrays.txt.\n" << std::endl;
    
    //Сортировка массива
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (Array[j] < Array[min]) ? j : min;
        if (i != min)
        {
            buf = Array[i];
            Array[i] = Array[min];
            Array[min] = buf;
        }
    }
    std::cout << "Отсортированный массив\n";
    for (int i = 0; i < N; i++)
    {
        std::cout << Array[i] << " ";
    }

    std::ofstream saveSortedArray("Arrays.txt", std::ios::app);
    if (!saveSortedArray) {
        std::cout << "Файл открыть невозможно\n";
        return;
    }
    saveSortedArray << "\nОтсортированный массив:\n";
    for (int i = 0; i < N; i++) {
        saveSortedArray << Array[i] << " ";
    }
    saveSortedArray.close();
    std::cout << "\nОтсортированный массив записан в файл Arrays.txt." << std::endl;
}