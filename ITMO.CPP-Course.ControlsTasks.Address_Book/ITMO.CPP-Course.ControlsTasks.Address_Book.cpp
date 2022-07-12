#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "Person.h"
#include "Friend.h" 
#include "Relative.h" 

using namespace std;

void AdditionalInfo(Person* person) {
    int age;
    string phone, address;
    char   choice;
    cout << "������ �������������� ����������((� / n) ? ";
    cin >> choice;
    if (choice == 'y') {
        cout << "������� �������: ";
        cin >> age;
        cout << "������� �������: ";
        cin >> phone;
        cout << "������� �������� �����: ";
        cin >> street;
        cout << "������� ����� ����: ";
        cin >> houseNumber;
        cout << "������� ����� ��������: ";
        cin >> apartmentNumber;
        address = street + ", ��� " + houseNumber + ", �������� " + apartmentNumber;
        person->SetAge(age);
        person->SetPhone(phone);
        person->SetAddress(address);
    }
    else {
        cout << "���� �������������� ������ �� ������������.\n";
    }
}

void ShowInfo(const Person* person) {
    cout << person->GetInfo() << endl;
}
int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    Person* person[200];
    int n = 0;
    char choice1, choice2;
    
    std::cout << "�������� ������";
    std::cout << "<--------------------------------------------->";
    std::cout << "������ ����� ������ (Y / N)?";
    std::cin >> choice1;
    if (choice1 == 'Y' || 'y' || '�' || '�')
    {
        do
        {
            std::cout << "\n����� ������ ��������� � ������������ (1) ��� ��������� (2)? ";
            std::cin >> choice2;
            if (choice2 == '1') {
                std::string lastName, name;
                std::cout << "������� ���";
                std::cin >> name;
                cout << "������� �������: ";
                std::cin >> lastName;
                
                person[n] = new Relative(lastName, name, );
                AdditionalInfo(person[n]);
                person[n]->Save();
            }
            else {
                string lastName, name, secondName;
                cout << "������� ������� �������������: ";
                cin >> lastName;
                cout << "������� ��� �������������: ";
                cin >> name;
                cout << "���� �� ��������((� / n) ? ";
                cin >> choice;
                if (choice == 'y') {
                    cout << "������� �������� �������������: ";
                    cin >> secondName;
                }
                else {
                    secondName = "not";
                }

                unsigned int numDis;
                cout << "������� ����� ���������� (1 - ������, 2 - �����, 3 - ����������, 4 - ���������, 5 - �������): ";
                cin >> numDis;
                person[n] = new Teacher(lastName, name, secondName, discipline[numDis - 1]);

                AdditionalInfo(person[n]);
                person[n]->Save();
            }
            cout << "����������((� / n) ? ";
            cin >> choice;
            n++;
        } while (choice == 'y');
    }
    else
    
    for (int j = 0; j < n; j++) //�����, ���� �� ���� ��������
        ShowInfo(person[j]);
    for (int j = 0; j < n; j++) //������������ ������, ���� �� ���� ��������
        delete person[j];
    return 0;
}