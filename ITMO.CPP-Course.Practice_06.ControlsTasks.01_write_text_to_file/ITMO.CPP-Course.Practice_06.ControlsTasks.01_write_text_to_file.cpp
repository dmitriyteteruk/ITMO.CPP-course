
#include <Windows.h> // руссификация консоли
#include <iostream>
#include <fstream>

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int const n = 1000;
    char text[n];

    std::cout << "Введите текст стихотворения, для окончания введите символ *\n";

    std::cin.get(text, n, '*');
    std::ofstream text2("text2.txt");
    if (!text2)
        {
            std::cout << "Файл открыть невозможно\n";
            return 1;
        }
    text2 << text;
    std::cout << "Стихотворение сохранено в файл text2.txt";
}