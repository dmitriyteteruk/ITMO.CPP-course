/* student.cpp */
#include <iostream>
#include <string>
#include <Windows.h>
#include "student.h"
#include <fstream>

    // конструктор Student
    Student::Student(std::string name, std::string last_name)
    {
        Student::set_name(name);
        Student::set_last_name(last_name);
    }

    // дестуктор Student
    Student::~Student()
    {
        Student::save();
    }

    // Запись данных в файл
    void Student::save()
    {
        ofstream fout("students.txt", ios::app);
        fout
            << Student::get_name()
            << " "
            << Student::get_last_name()
            << " ";

        for (int i = 0; i < 5; i++)
        {
            fout << Student::scores[i] << " ";
        }
        fout << "\n";
        fout.close();
    }


    // установка имени студента
    void Student::set_name(std::string student_name)
    {
        Student::name = student_name;
    }

    // получение имени студента
    std::string Student::get_name()
    {
        return Student::name;
    }

    // установка фамилии студента
    void Student::set_last_name(std::string student_last_name)
    {
        Student::last_name = student_last_name;
    }

    // получение фамилии студента
    std::string Student::get_last_name()
    {
        return Student::last_name;
    }

    // установка промежуточных оценок
    void Student::set_scores(int student_scores[])
    {
        for (int i = 0; i < 5; ++i)
        {
            Student::scores[i] = student_scores[i];
        }
    }

    // установка среднего балла
    void Student::set_average_score(double ball)
    {
        Student::average_score = ball;
    }

    // получение среднего балла
    double Student::get_average_score()
    {
        return Student::average_score;
    }


