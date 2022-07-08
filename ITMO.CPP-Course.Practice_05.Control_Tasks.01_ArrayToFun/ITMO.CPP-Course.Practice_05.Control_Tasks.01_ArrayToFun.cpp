#include <Windows.h> // ������������ �������
#include <iostream>

int* max_vect(int, int*, int*);

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

        int a[] = { 1,2,3,4,5,6,7,2 };
        int b[] = { 7,6,5,4,3,2,1,3 };
        int kc = sizeof(a) / sizeof(a[0]); //���������� ��������� �������
        int* c; //��������� �� �������������� ������
        
        std::cout << "������ A\n";
        for (int i = 0; i < sizeof(a)/sizeof(&a); i++) std::cout << a[i] << " ";
        std::cout << "\n������ B\n";
        for (int i = 0; i < sizeof(b)/sizeof(&b); i++) std::cout << b[i] << " ";

        std::cout << "\n�������������� ������\n";
        c = max_vect(kc, a, b); //����� ������� ��� �������� �������
        for (int i = 0; i < kc; i++) //����� ����������.
            std::cout << c[i] << " ";
        delete[]c; //������� ������.


}

int* max_vect(int length, int* array1, int* array2) 
{
    int* MaxNumbers = new int[length];
    for (int i = 0; i < length; i++)
    {
        MaxNumbers[i] = (array1[i] > array2[i]) ? array1[i] : array2[i];
    }
    return MaxNumbers;
}