//контрольное задание 14
//  Напишите шаблон функции, возвращающей среднее арифметическое всех элементов массива.
#include <iostream>

template<class T>
void sorting(T arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        int x = arr[i];
        for (j = i - 1; j >= 0 && x < arr[j]; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = x;
    }
}

template<class T>
double Mean(T arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum / (double)size;
}

template<class T>
void PrintArray(T arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << "; ";
    std::cout << std::endl;
}

int main()
{
    int arr[] = { 38, 16, 11, 7, 31, 20, 7, 8, 40 };
    double arrd[] = { 1.1, 2.2,3.1,7.2,1.3,2.1,3.9,12.4,100.2, 500.1 };
    char arrc[] = "test";
    long arrl[] = { 38, 16, 11, 7, 31, 20, 7, 8, 40 };
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrd) / sizeof(arrd[0]);
    int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
    int k4 = sizeof(arrl) / sizeof(arrl[0]);
    sorting(arr, k1);
    PrintArray(arr, k1);
    std::cout << Mean(arr, k1) << std::endl;
    sorting(arrd, k2);
    PrintArray(arrd, k2);
    std::cout << Mean(arrd, k2) << std::endl;
    sorting(arrc, k3);
    PrintArray(arrc, k3);
    std::cout << Mean(arrc, k3) << std::endl;
    sorting(arrl, k4);
    PrintArray(arrl, k4);
    std::cout << Mean(arrl, k4) << std::endl;
}