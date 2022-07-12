/* main.cpp*/
#include <iostream>
#include <string>
#include <Windows.h>
#include "student.h"

using namespace std;

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string name;
    string last_name;
    // Ввод имени с клавиатуры
    cout << "Введите имя: ";
    std::cin >> name;
    // Ввод фамилии
    cout << "Введите фамилию: ";
    std::cin >> last_name;
    // Передача параметров конструктору
    Student* student02 = new Student(name, last_name);

    
    // Оценки
    int scores[5];
    
    // Сумма всех оценок
    int sum = 0;
    
    // Ввод промежуточных оценок
    for (int i = 0; i < 5; ++i) {
        cout << "Оценка " << i + 1 << ": ";
        cin >> scores[i];
        // суммирование
        sum += scores[i];
    }
    
    // Сохраняем промежуточные оценки в объект класса Student
    student02->set_scores(scores);
    
    // Считаем средний балл
    double average_score = sum / 5.0;
    
    // Сохраняем средний балл в объект класса Student
    student02->set_average_score(average_score);
    
    // Выводим данные по студенту
    cout 
        << "Средний балл для студента " 
        << student02->get_name() 
        << " "
        << student02->get_last_name() 
        << " равен "
        << student02->get_average_score() 
        << "\n";
    
    // Удаление объекта student из памяти
    delete student02;
    return 0;

}