#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

void AdditionalInfo(Person* person) {
    int age;
    string phone;
    char   choice;
    cout << "Ввести данные возраста и телефона? (у / n)";
    cin >> choice;
    if (choice == 'y') {
        cout << "Введите возраст: ";
        cin >> age;
        cout << "Введите телефон: ";
        cin >> phone;
        person->SetAge(age);
        person->SetPhone(phone);
    }
    else {
        cout << "Спасибо.\n";
    }
}

void ShowInfo(const Person* person) {
    cout << person->GetInfo() << endl;
}
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Discipline* discipline[10];
    discipline[0] = new Discipline("C#", 50, "зачет");
    discipline[1] = new Discipline("SQL", 55, "зачёт");
    discipline[2] = new Discipline("Python", 50, "зачёт");
    discipline[3] = new Discipline("Java", 65, "экзамен");
    Person* person[100];
    int n = 0;
    char choice;
    do
    {
        cout << "\nВводить данные о студенте (S) или преподавателе (T)? ";
        cin >> choice;
        if (choice == 'S') {   // ввод данные о студенте
            string lastName, name, secondName;
            cout << "Ввод данных о студенте\n-------------------\n";
            cout << "Введите фамилию: ";
            cin >> lastName;
            cout << "Введите имя студента: ";
            cin >> name;
            cout << "Есть ли отчество (у / n) ?  ";
            cin >> choice;
            if (choice == 'y') {
                cout << "Введите отчество студента: ";
                cin >> secondName;
            }
            else {
                secondName = "-";
            }
            std::vector<int> scores;

            unsigned int mark, numMarks;  // только положительные числа
            cout << "Пожалуйста, введите количество отметок: ";
            cin >> numMarks;
            cout << "Введите отметки через пробел: ";
            for (int i = 0; i < numMarks; i++) {
                cin >> mark;
                scores.push_back(mark);  // помещаем отметки в вектор
            }

            person[n] = new Student(lastName, name, secondName, scores);

            AdditionalInfo(person[n]);
            person[n]->Save();
        }
        else {    // ввод данные о преподавателе
            string lastName, name, secondName;
            cout << "Ввод данных о преподавателе\n-------------------\n";
            cout << "Введите фамилию: ";
            cin >> lastName;
            cout << "Введите имя: ";
            cin >> name;
            cout << "Введите отчество: ";
            cin >> secondName;
            

            unsigned int numDis;
            cout << "Введите номер дисциплины: \n1 = C# \n2 = SQL \n3 = Python \n4 = Java): ";
            cin >> numDis;
            person[n] = new Teacher(lastName, name, secondName, discipline[numDis - 1]);

            AdditionalInfo(person[n]);
            person[n]->Save();
        }
        cout << "Добавить еще одну запись? (у / n)\n";
        cin >> choice;
        n++;
    } while (choice == 'y');
    for (int j = 0; j < n; j++)
        ShowInfo(person[j]);
    for (int j = 0; j < n; j++)
        delete person[j];
    return 0;
}