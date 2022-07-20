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
    cout << "������ ������ �������� � ��������? (� / n)";
    cin >> choice;
    if (choice == 'y') {
        cout << "������� �������: ";
        cin >> age;
        cout << "������� �������: ";
        cin >> phone;
        person->SetAge(age);
        person->SetPhone(phone);
    }
    else {
        cout << "�������.\n";
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
    discipline[0] = new Discipline("C#", 50, "�����");
    discipline[1] = new Discipline("SQL", 55, "�����");
    discipline[2] = new Discipline("Python", 50, "�����");
    discipline[3] = new Discipline("Java", 65, "�������");
    Person* person[100];
    int n = 0;
    char choice;
    do
    {
        cout << "\n������� ������ � �������� (S) ��� ������������� (T)? ";
        cin >> choice;
        if (choice == 'S') {   // ���� ������ � ��������
            string lastName, name, secondName;
            cout << "���� ������ � ��������\n-------------------\n";
            cout << "������� �������: ";
            cin >> lastName;
            cout << "������� ��� ��������: ";
            cin >> name;
            cout << "���� �� �������� (� / n) ?  ";
            cin >> choice;
            if (choice == 'y') {
                cout << "������� �������� ��������: ";
                cin >> secondName;
            }
            else {
                secondName = "-";
            }
            std::vector<int> scores;

            unsigned int mark, numMarks;  // ������ ������������� �����
            cout << "����������, ������� ���������� �������: ";
            cin >> numMarks;
            cout << "������� ������� ����� ������: ";
            for (int i = 0; i < numMarks; i++) {
                cin >> mark;
                scores.push_back(mark);  // �������� ������� � ������
            }

            person[n] = new Student(lastName, name, secondName, scores);

            AdditionalInfo(person[n]);
            person[n]->Save();
        }
        else {    // ���� ������ � �������������
            string lastName, name, secondName;
            cout << "���� ������ � �������������\n-------------------\n";
            cout << "������� �������: ";
            cin >> lastName;
            cout << "������� ���: ";
            cin >> name;
            cout << "������� ��������: ";
            cin >> secondName;
            

            unsigned int numDis;
            cout << "������� ����� ����������: \n1 = C# \n2 = SQL \n3 = Python \n4 = Java): ";
            cin >> numDis;
            person[n] = new Teacher(lastName, name, secondName, discipline[numDis - 1]);

            AdditionalInfo(person[n]);
            person[n]->Save();
        }
        cout << "�������� ��� ���� ������? (� / n)\n";
        cin >> choice;
        n++;
    } while (choice == 'y');
    for (int j = 0; j < n; j++)
        ShowInfo(person[j]);
    for (int j = 0; j < n; j++)
        delete person[j];
    return 0;
}