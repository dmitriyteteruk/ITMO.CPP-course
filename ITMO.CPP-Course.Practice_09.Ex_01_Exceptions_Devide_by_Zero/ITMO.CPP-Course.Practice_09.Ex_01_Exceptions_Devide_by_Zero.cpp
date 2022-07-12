#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

class DevideByZeroError
{
public:
    DevideByZeroError (): message ("Деление на нуль")
    {
    }
    
    void printMessage() const
    {
        std::cout << message << std::endl;
    }
private:
    std::string message;
};

float quotient(int num1, int num2)
{
    if (num2 == 0)
    {
        throw DevideByZeroError();
    }
    return (float) num1 / num2;
}


int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    //std::cout << "Введите через пробел два целых числа для расчет их частного:\n";
    std::cout << "Введите числитель:\n";
    
    //int n1, n2;
    int n1;
    
    //std::cin >> n1 >> n2;
    std::cin >> n1;
    
    for (int i = -10; i < 10; i++)
    {
        try
        {
            float result = quotient(n1, i);
            std::cout << "Частное равно " << result << std::endl;
        }

        catch (DevideByZeroError& error)
        {
            std::cout << "Ошибка: ";
            error.printMessage();
            return 1;
        }
    }

    return 0;
}


