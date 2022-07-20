#pragma once
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Person {
public:
    Person(string lastName, string name, string secondName = "not") :
        lastName(lastName), name(name), secondName(secondName)
    {

    }

    string GetName() const {
        return name;
    }
    string GetLastName() const {
        return lastName;
    }
    string GetSecondName() const {
        return secondName;
    }

    virtual string GetStatus() const = 0;

    void SetAge(int age) {
        this->age = age;
    }
    int GetAge() const {
        return age;
    }
    void SetPhone(string phone) {
        this->phone = phone;
    }
    string GetPhone() const {
        return phone;
    }
    
    virtual string GetInfo() const
    {
        std::ostringstream fullInfo;
        fullInfo 
            << "\n--------------------------\n" 
            << GetLastName() << " " << GetName() << " " << GetSecondName() 
            << "\nСтатус : " << GetStatus() 
            << "\nВозраст : " << GetAge() 
            << "\nТелефон: " << GetPhone();
        return fullInfo.str();
    }
    virtual void Save() const
    {
        ofstream fout("record.txt", ios::app);
        fout << "\n--------------------------\n" 
            << GetLastName() << " " << GetName() << " " << GetSecondName() 
            << "\nСтатус : " << GetStatus() 
            << "\nВозраст : " << GetAge() 
            << "\nТелефон: " << GetPhone();
        fout << endl;
        fout.close();
    }
private:
    string name;
    string lastName;
    string secondName = "-";
    int age = 0;
    string phone = "-";


};