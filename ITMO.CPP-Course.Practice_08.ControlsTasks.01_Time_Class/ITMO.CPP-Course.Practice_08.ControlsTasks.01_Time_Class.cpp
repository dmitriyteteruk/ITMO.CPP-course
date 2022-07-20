#include <iostream>
#include <Windows.h>

class Time
{
    friend Time operator+(const Time&, const double); // из контрольного 11.1
    friend Time operator+(const double, const Time&); // из контрольного 11.1

private:
        int hh, mm, ss;
    public:
        // контрольная задача 9.2 - исключение в классе
        class ExNegativeNumber {
        public:
            std::string nameObject;
            ExNegativeNumber(std::string nameObj) : nameObject(nameObj) {}
        };
       
        // конструктор по умолчанию
        Time() : hh(0), mm(0), ss(0) {};
        
        // конструктор с параметрами и приведением чисел
        Time(int h, int m, int s) : hh(h), mm(m), ss(s)
        {
            // контрольная задача 9.2 - исключение в классе
            if (h < 0 || m < 0 || s < 0)
                throw ExNegativeNumber("Ошибка инициализации объекта Time. Введено отрицательное число.");
            
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
        
        // метод класса для отображения времени
        void ShowTime() const
        {
            std::cout << hh << ":" << mm << ":" << ss << "\n";
        }

        // метод класса для складывания двух значений.
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
                << "Сумма времени " << t1.hh << ":" << t1.mm << ":" << t1.ss
                << " и " << t2.hh << ":" << t2.mm << ":" << t2.ss 
                << " равна: " << hh << ":" << mm << ":" << ss << "\n";
        }

        // перегрузка операции сложения 
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
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int hours, minutes, seconds;

    // контрольное 9.2 добавляет try
    try
    {
        Time t1;

        std::cout << "Введите часы, минуты и секунды через пробел и нажмите Enter\n";
        std::cin >> hours >> minutes >> seconds;
        Time t2(hours, minutes, seconds);

        std::cout << "Введите часы, минуты и секунды через пробел еще раз и нажмите Enter\n";
        std::cin >> hours >> minutes >> seconds;
        Time t3(hours, minutes, seconds);
        Time sum = t1 + t2;
        sum.ShowTime();
        // отображаем время через метод класса
        t1.ShowTime();
        t2.ShowTime();
        t3.ShowTime();
        t1.SumTime(t2, t3);
    }
    catch (Time::ExNegativeNumber& ex) {
        std::cout << ex.nameObject;
    }
}
