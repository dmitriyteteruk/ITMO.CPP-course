#include <iostream>
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

    IdCard idc(123, "�������");

    // ���� ����� � ����������
    cout << "Name: ";
    getline(cin, name);
    // ���� �������
    cout << "Last name: ";
    getline(cin, last_name);

    //Student student01;
    Student* student02 = new Student(name, last_name, &idc);

    // ����� ���� ������
    int sum = 0;
    // ���� ������������� ������
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        // ������������
        sum += scores[i];
    }

    try
    {
        // ��������� ������������� ������ � ������ ������ Student
        student02->set_scores(scores);
        // ������� ������� ����
        double average_score = sum / 5.0;
        // ��������� ������� ���� � ������ ������ Student
        student02->set_average_score(average_score);
        // ������� ������ �� ��������
        cout << "Average ball for " << student02->get_name() << " "
            << student02->get_last_name() << " is "
            << student02->get_average_score() << endl;
        cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
        cout << "Category: " << student02->getIdCard().getCategory() << endl;

    }
    catch (Student::ExScore& ex)
    {
        cout << "\n������ ������������� " << ex.origin;
        cout << "\n��������� �������� ������ " << ex.iValue <<
            "�������� ������������\n";
    }
    delete student02;
    return 0;
}