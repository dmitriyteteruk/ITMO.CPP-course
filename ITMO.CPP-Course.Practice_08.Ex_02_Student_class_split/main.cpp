/* main.cpp*/
#include <iostream>
#include <string>
#include <Windows.h>
#include "student.h"

using namespace std;

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string name;
    string last_name;
    // ���� ����� � ����������
    cout << "������� ���: ";
    std::cin >> name;
    // ���� �������
    cout << "������� �������: ";
    std::cin >> last_name;
    // �������� ���������� ������������
    Student* student02 = new Student(name, last_name);

    
    // ������
    int scores[5];
    
    // ����� ���� ������
    int sum = 0;
    
    // ���� ������������� ������
    for (int i = 0; i < 5; ++i) {
        cout << "������ " << i + 1 << ": ";
        cin >> scores[i];
        // ������������
        sum += scores[i];
    }
    
    // ��������� ������������� ������ � ������ ������ Student
    student02->set_scores(scores);
    
    // ������� ������� ����
    double average_score = sum / 5.0;
    
    // ��������� ������� ���� � ������ ������ Student
    student02->set_average_score(average_score);
    
    // ������� ������ �� ��������
    cout 
        << "������� ���� ��� �������� " 
        << student02->get_name() 
        << " "
        << student02->get_last_name() 
        << " ����� "
        << student02->get_average_score() 
        << "\n";
    
    // �������� ������� student �� ������
    delete student02;
    return 0;

}