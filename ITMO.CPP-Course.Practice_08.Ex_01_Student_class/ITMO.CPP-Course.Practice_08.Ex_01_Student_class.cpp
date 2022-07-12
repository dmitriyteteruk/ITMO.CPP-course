#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Student
{
    public:
        
        // установка имение студента
        void set_name(string student_name)
        {
            name = student_name;
        }

        // получение имени студента
        string get_name()
        {
            return name;
        }

        // установка фамилии студента
        void set_last_name(string student_last_name)
        {
            last_name = student_last_name;
        }

        // получение фамилии студента
        string get_last_name()
        {
            return last_name;
        }

        // установка промежуточных оценок
        void set_scores(int student_scores[])
        {
            for (int i = 0; i < 5; ++i)
            {
                scores[i] = student_scores[i];
            }
        }

        // установка среднего балла
        void set_average_score(double ball)
        {
            average_score = ball;
        }

        // получение среднего балла
        double get_average_scrore()
        {
            return average_score;
        }

    private: 
        int scores[5];          // массив промежуточных оценок
        double average_score;   // средний бал
        string name;            // имя студента
        string last_name;       // фамилия студента


};

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Student student01;

    string name;
    string last_name;
    int scores[5];

    // ввод имени
    cout << "Введите имя: ";
    cin >> name;
    
    // ввод фамилии
    cout << "Введите фамилию: ";
    cin >> last_name;

    // сумма всех оценок
    int sum = 0;

    // ввод промежуточных оценок
    for (int i = 0; i < 5; i++)
    {
        cout << "Оценка " << i + 1 << ": ";
        cin >> scores[i];
        // Суммирование
        sum += scores[i];
    }

    // сохраняем имя, фамилию и промежуточные оценки в объект класса Student
    student01.set_name(name);
    student01.set_last_name(last_name);
    student01.set_scores(scores);

    // расчет среднего балла
    double average_score = sum / 5.0;
    //сохраняем среднюю в объект класса
    student01.set_average_score(average_score);

    // выводим всю инфомрацию на экран
    cout
        << "Средний балл для "
        << student01.get_name()
        << " "
        << student01.get_last_name()
        << " равен "
        << student01.get_average_scrore()
        << "\n";

}

