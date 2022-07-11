#include <iostream>
#include <Windows.h>

struct Time 
{
    int hours, minutes, seconds;
};

Time SumTime(Time t1, Time t2)
{   Time t;
    t.hours = t1.hours + t2.hours;
    t.minutes = t1.minutes + t2.minutes;
    t.seconds = t1.seconds + t2.seconds;

    if (t.seconds >= 60)
    {
        t.seconds -= 60;
        t.minutes++;
    }
    if (t.minutes >= 60)
    {
        t.minutes -= 60;
        t.hours++;
    }                                                        
    return t;
}

Time SubTime(Time t1, Time t2)
{
    Time t;
    t.hours = t1.hours - t2.hours;
    t.minutes = t1.minutes - t2.minutes;
    t.seconds = t1.seconds - t2.seconds;

    if (t.seconds < 0)
    {
        t.seconds += 60;
        t.minutes--;
    }
    if (t.minutes < 0)
    {
        t.minutes += 60;
        t.hours--;
    }

    return t;
}

Time InputTime()
{
    Time t;
    std::cout << "Введите часы, минуты и секунды через пробел\n";
    std::cin 
        >> t.hours 
        >> t.minutes 
        >> t.seconds;
    if (t.seconds >= 60)
    {
        t.seconds -= 60;
        t.minutes++;
    }
    if (t.minutes >= 60)
    {
        t.minutes -= 60;
        t.hours++;
    }
    std::cout << "Введенное время " << t.hours << ":" << t.minutes << ":" << t.seconds << "\n";
    return t;
}

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Time t1 = InputTime();
    Time t2 = InputTime();
    Time t = SumTime(t1, t2);
    std::cout << "\nСумма времени равна " << t.hours << ":" << t.minutes << ":" << t.seconds << "\n";
    t = SubTime(t1, t2);
    std::cout << "\nРазница времени равна " << t.hours << ":" << t.minutes << ":" << t.seconds << "\n";
}

