#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Student
{
    public:
        
        // ��������� ������ ��������
        void set_name(string student_name)
        {
            name = student_name;
        }

        // ��������� ����� ��������
        string get_name()
        {
            return name;
        }

        // ��������� ������� ��������
        void set_last_name(string student_last_name)
        {
            last_name = student_last_name;
        }

        // ��������� ������� ��������
        string get_last_name()
        {
            return last_name;
        }

        // ��������� ������������� ������
        void set_scores(int student_scores[])
        {
            for (int i = 0; i < 5; ++i)
            {
                scores[i] = student_scores[i];
            }
        }

        // ��������� �������� �����
        void set_average_score(double ball)
        {
            average_score = ball;
        }

        // ��������� �������� �����
        double get_average_scrore()
        {
            return average_score;
        }

    private: 
        int scores[5];          // ������ ������������� ������
        double average_score;   // ������� ���
        string name;            // ��� ��������
        string last_name;       // ������� ��������


};

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Student student01;

    string name;
    string last_name;
    int scores[5];

    // ���� �����
    cout << "������� ���: ";
    cin >> name;
    
    // ���� �������
    cout << "������� �������: ";
    cin >> last_name;

    // ����� ���� ������
    int sum = 0;

    // ���� ������������� ������
    for (int i = 0; i < 5; i++)
    {
        cout << "������ " << i + 1 << ": ";
        cin >> scores[i];
        // ������������
        sum += scores[i];
    }

    // ��������� ���, ������� � ������������� ������ � ������ ������ Student
    student01.set_name(name);
    student01.set_last_name(last_name);
    student01.set_scores(scores);

    // ������ �������� �����
    double average_score = sum / 5.0;
    //��������� ������� � ������ ������
    student01.set_average_score(average_score);

    // ������� ��� ���������� �� �����
    cout
        << "������� ���� ��� "
        << student01.get_name()
        << " "
        << student01.get_last_name()
        << " ����� "
        << student01.get_average_scrore()
        << "\n";

}

