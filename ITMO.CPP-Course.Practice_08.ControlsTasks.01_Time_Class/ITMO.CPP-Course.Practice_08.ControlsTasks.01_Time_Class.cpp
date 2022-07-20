#include <iostream>
#include <Windows.h>

class Time
{
    friend Time operator+(const Time&, const double); // �� ������������ 11.1
    friend Time operator+(const double, const Time&); // �� ������������ 11.1

private:
        int hh, mm, ss;
    public:
        // ����������� ������ 9.2 - ���������� � ������
        class ExNegativeNumber {
        public:
            std::string nameObject;
            ExNegativeNumber(std::string nameObj) : nameObject(nameObj) {}
        };
       
        // ����������� �� ���������
        Time() : hh(0), mm(0), ss(0) {};
        
        // ����������� � ����������� � ����������� �����
        Time(int h, int m, int s) : hh(h), mm(m), ss(s)
        {
            // ����������� ������ 9.2 - ���������� � ������
            if (h < 0 || m < 0 || s < 0)
                throw ExNegativeNumber("������ ������������� ������� Time. ������� ������������� �����.");
            
            if (s >= 60)
            {
                this->ss = s - 60;
                this->mm = m+1;
            }
            if (mm >= 60)
            {
                this->mm -= 60;
                this->hh = h+1;
            }
        };
        
        // ����� ������ ��� ����������� �������
        void ShowTime() const
        {
            std::cout << hh << ":" << mm << ":" << ss << "\n";
        }

        // ����� ������ ��� ����������� ���� ��������.
        void SumTime(Time t1, Time t2) const
        {
            int hh, mm, ss;
            hh = t1.hh + t2.hh;
            mm = t1.mm + t2.mm;
            ss = t1.ss + t2.ss;

            if (ss >= 60)
            {
                ss -= 60;
                mm++;
            }
            if (mm >= 60)
            {
                mm -= 60;
                hh++;
            }
            
            std::cout
                << "����� ������� " << t1.hh << ":" << t1.mm << ":" << t1.ss
                << " � " << t2.hh << ":" << t2.mm << ":" << t2.ss 
                << " �����: " << hh << ":" << mm << ":" << ss << "\n";
        }

        // ���������� �������� �������� 
        Time operator+(const Time& time) const
        {
            Time sumTimes;
            sumTimes.hh = sumTimes.hh + time.hh;
            sumTimes.mm = sumTimes.mm = time.mm;
            sumTimes.ss = sumTimes.ss = time.ss;
            return sumTimes;
        }
};

int main()
{
    // ������������ �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int hours, minutes, seconds;

    // ����������� 9.2 ��������� try
    try
    {
        Time t1;

        std::cout << "������� ����, ������ � ������� ����� ������ � ������� Enter\n";
        std::cin >> hours >> minutes >> seconds;
        Time t2(hours, minutes, seconds);

        std::cout << "������� ����, ������ � ������� ����� ������ ��� ��� � ������� Enter\n";
        std::cin >> hours >> minutes >> seconds;
        Time t3(hours, minutes, seconds);
        Time sum = t1 + t2;
        sum.ShowTime();
        // ���������� ����� ����� ����� ������
        t1.ShowTime();
        t2.ShowTime();
        t3.ShowTime();
        t1.SumTime(t2, t3);
    }
    catch (Time::ExNegativeNumber& ex) {
        std::cout << ex.nameObject;
    }
}
