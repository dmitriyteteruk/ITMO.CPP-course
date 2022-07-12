#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

class Triangle
{
public:
    Triangle() : message("�� ����� ������ ������� ������������")
    {
    }

    void printMessage() const
    {
        std::cout << message << std::endl;
    }
private:
    std::string message;
};

double triangle_size(int a, int b, int c)
{
    double square_size, p;
    int perimeter;
    perimeter = a + b + c;
    p = perimeter / 2;
    if ((a >= b+c) || (b >= a+c) || (c >= a+b))
    {
        throw Triangle();
    }
    return square_size = sqrt(p * (p - a) * (p - b) * (p - c));
}


int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::cout << "������� ����� ������ ����� ���� ������ ������������ ��� ���������� ��� �������:\n";

    int a, b, c;
    double result;
    std::cin >> a >> b >> c;

        try
        {
            result = triangle_size(a, b, c);
            std::cout << "������� ������������ ����� " << result << std::endl;
        }

        catch (Triangle& error)
        {
            std::cout << "������: ";
            error.printMessage();
            return 1;
        }
    return 0;
}


