#include <Windows.h> // ������������ �������
#include <iostream>

int main()
{
    // ������������ �������
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

    std::cout << "\n����� ���� ����� ������� ����� " << s;

    double average(0);
    average = s / n;
    std::cout << "\n������� �������������� ����� ������� ����� " << average;

    // ����� ���� ������������� ���������
    double temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
        {
            temp += mas[i];
        }       
    }
    std::cout << "\n����� ���� ������������� ����� ������� ����� " << temp;

    // ����� ���� ������������� ���������
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
        {
            temp += mas[i];
        }
    }
    std::cout << "\n����� ���� ������������� ����� ������� ����� " << temp;

    // ����� ���� ��������� � ��������� ���������
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0 )
        {
            temp += mas[i];
        }
    }
    std::cout << "\n����� ���� ��������� ������� � ��������� ��������� " << temp;

    // ����� ���� ��������� � ������� ���������
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            temp += mas[i];
        }
    }
    std::cout << "\n����� ���� ��������� ������� � ������� ��������� " << temp;

    // ����� ����������� ������� ������� � ������� �� �������
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
    std::cout << "\n����������� �������� � ������� " << min << ", � ������ �������� " << index;

    // ����� ������������ ������� ������� � ������� �� �������
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
    std::cout << "\n������������ �������� � ������� " << max << ", � ������ �������� " << index;
    
    // ����� ������������ ��������� ������� ����� ������������� � ����������� ����������
    double multi = 1;
    for (int i = indexMin+1; i < indexMax; i++)
    {
        multi = multi * mas[i];
    }
    std::cout << "\n������������ ��������� ������� ����� ����������� � ������������ ���������� ����� " << multi;
}
