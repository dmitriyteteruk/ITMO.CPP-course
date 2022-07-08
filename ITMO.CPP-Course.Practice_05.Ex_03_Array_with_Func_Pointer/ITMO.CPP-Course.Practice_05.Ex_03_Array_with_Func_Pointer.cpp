#include <Windows.h> // руссификация консоли
#include <iostream>

void show_array(const int Arr[], const int N);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int Arr[], const int N, bool(*compare)(int a, int b));

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    bool (*from_f[2])(int, int) = { from_min, from_max };

    const int N = 10;
    int my_choose = 0;
    int Array[N] = { 9,8,7,6,1,2,3,5,4,9 };
    std::cout << "\n1. Сортировать по возрастанию";
    std::cout << "\n2. Сортировать по убыванию\n";

    std::cin >> my_choose;
    std::cout << "\nИсходные данные: \t";
    
    // пример передачи массива в функцию 
    show_array(Array, N);

    bubble_sort(Array, N, (*from_f[my_choose - 1]));

    switch (my_choose)
    {
    case 1: bubble_sort(Array, N, from_min); break;
    case 2: bubble_sort(Array, N, from_max); break;
    default: std::cout << "\nНеизвестная операция ";
    }

    std::cout << "Отсортированный массив: ";  show_array(Array, N);
    
    return 0;
}

void show_array(const int Arr[], const int N)
{
    for (int i = 0; i < N; i++)
        std::cout << Arr[i] << " ";
        std::cout << "\n";
}

bool from_min(const int a, const int b)
{
    return a > b;
}

bool from_max(const int a, const int b)
{
    return a < b;
}

void bubble_sort(int Arr[], const int N, bool(*compare)(int a, int b))
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++) {
            if ((*compare)(Arr[j], Arr[j + 1])) std::swap(Arr[j], Arr[j + 1]);
        }
    }
}

