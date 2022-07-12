/* student.h */
#include <iostream>
#include <string>
#include <Windows.h>
#pragma once
#include <fstream>

using namespace std;

class Student
{
public:

    // конструктор класса Student
    Student(string, string);

    // установка имение студента
    void set_name(string);

    // получение имени студента
    string get_name();

    // установка фамилии студента
    void set_last_name(string);

    // получение фамилии студента
    string get_last_name();

    // установка промежуточных оценок
    void set_scores(int[]);

    // установка среднего балла
    void set_average_score(double ball);

    // получение среднего балла
    double get_average_score();

    // запись данных о студенте в файл
    void save();
    // деструктор класса Student
    ~Student();

private:
    int scores[5];          // массив промежуточных оценок
    double average_score;   // средний бал
    string name;            // имя студента
    string last_name;       // фамилия студента


};

