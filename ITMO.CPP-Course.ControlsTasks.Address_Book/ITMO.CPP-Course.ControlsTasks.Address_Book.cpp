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
    cout << "Ввести дополнительную информацию((у / n) ? ";
    cin >> choice;
    if (choice == 'y') {
        cout << "Введите возраст: ";
        cin >> age;
        cout << "Введите телефон: ";
        cin >> phone;
        cout << "Введите название улицы: ";
        cin >> street;
        cout << "Введите номер дома: ";
        cin >> houseNumber;
        cout << "Введите номер квартиры: ";
        cin >> apartmentNumber;
        address = street + ", дом " + houseNumber + ", квартира " + apartmentNumber;
        person->SetAge(age);
        person->SetPhone(phone);
        person->SetAddress(address);
    }
    else {
        cout << "Ввод дополнительных данных не производится.\n";
    }
}

void ShowInfo(const Person* person) {
    cout << person->GetInfo() << endl;
}
int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    Person* person[200];
    int n = 0;
    char choice1, choice2;
    
    std::cout << "Записаня книжка";
    std::cout << "<--------------------------------------------->";
    std::cout << "Внести новую запись (Y / N)?";
    std::cin >> choice1;
    if (choice1 == 'Y' || 'y' || 'н' || 'Н')
    {
        do
        {
            std::cout << "\nНовая запись относится к родственнику (1) или знакомому (2)? ";
            std::cin >> choice2;
            if (choice2 == '1') {
                std::string lastName, name;
                std::cout << "Введите имя";
                std::cin >> name;
                cout << "Введите фамилию: ";
                std::cin >> lastName;
                
                person[n] = new Relative(lastName, name, );
                AdditionalInfo(person[n]);
                person[n]->Save();
            }
            else {
                string lastName, name, secondName;
                cout << "Введите фамилию преподавателя: ";
                cin >> lastName;
                cout << "Введите имя преподавателя: ";
                cin >> name;
                cout << "Есть ли отчество((у / n) ? ";
                cin >> choice;
                if (choice == 'y') {
                    cout << "Введите отчество преподавателя: ";
                    cin >> secondName;
                }
                else {
                    secondName = "not";
                }

                unsigned int numDis;
                cout << "Введите номер дисциплины (1 - Физика, 2 - Химия, 3 - Литература, 4 - Философия, 5 - История): ";
                cin >> numDis;
                person[n] = new Teacher(lastName, name, secondName, discipline[numDis - 1]);

                AdditionalInfo(person[n]);
                person[n]->Save();
            }
            cout << "Продолжать((у / n) ? ";
            cin >> choice;
            n++;
        } while (choice == 'y');
    }
    else
    
    for (int j = 0; j < n; j++) //Вывод, цикл по всем объектам
        ShowInfo(person[j]);
    for (int j = 0; j < n; j++) //Освобождение памяти, цикл по всем объектам
        delete person[j];
    return 0;
}