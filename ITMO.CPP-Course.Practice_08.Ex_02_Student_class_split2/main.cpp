﻿#include <iostream>
#include <string>
#include <windows.h>
#include "student.h"
#include "IdCard.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    string name;
    string last_name;
    int scores[5];

    IdCard idc(123, "Базовый");

    // Ввод имени с клавиатуры
    cout << "Имя: ";
    getline(cin, name);
    // Ввод фамилии
    cout << "Фамилия: ";
    getline(cin, last_name);

    //Student student01;
    Student* student02 = new Student(name, last_name, &idc);

    // Сумма всех оценок
    int sum = 0;
    // Ввод промежуточных оценок
    for (int i = 0; i < 5; ++i) {
        cout << "Оценка " << i + 1 << ": ";
        cin >> scores[i];
        // суммирование
        sum += scores[i];
    }
    try
    {
        // Сохраняем промежуточные оценки в объект класса Student
        student02->set_scores(scores);
        // Считаем средний балл
        double average_score = sum / 5.0;
        // Сохраняем средний балл в объект класса Student
        student02->set_average_score(average_score);
        // Выводим данные по студенту
        cout << "Средний бал для студента " << student02->get_name() << " "
            << student02->get_last_name() << " is "
            << student02->get_average_score() << endl;
        cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
        cout << "Category: " << student02->getIdCard().getCategory() << endl;

    }
    catch (Student::ExScore& ex)
    {
        cout << "\nОшибка инициализации " << ex.origin;
        cout << "\nВведенное значение оценки " << ex.iValue <<
            " является недопустимым\n";
    }
    delete student02;
    return 0;
}