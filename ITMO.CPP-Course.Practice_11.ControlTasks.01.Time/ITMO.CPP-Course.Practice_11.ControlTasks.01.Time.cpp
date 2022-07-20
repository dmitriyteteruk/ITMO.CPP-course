#include <iostream> 
#include <windows.h>
#include <string>

class Time {
    friend Time operator+(const Time&, const double);
    friend Time operator+(const double, const Time&);
public:
    Time() {
        SetAll(0, 0, 0);
    }

    Time(int hours, int minutes, int seconds) {

        SetAll(hours, minutes, seconds);
    }

    void SetAll(int hours, int minutes, int seconds) {
        if (hours < 0 or minutes < 0 or seconds < 0)
            throw ExNegativeNumber("Ошибка инициализации объекта Time. Введено отрицательное число.");
        this->hours = hours + (minutes + seconds / 60) / 60;
        this->minutes = (minutes + seconds / 60) % 60;;
        this->seconds = seconds % 60;;

    }

    std::string ShowTime() const {
        std::string timeString;
        timeString.append(std::to_string(hours / 10));
        timeString.append(std::to_string(hours % 10));
        timeString.append(":");
        timeString.append(std::to_string(minutes / 10));
        timeString.append(std::to_string(minutes % 10));
        timeString.append(":");
        timeString.append(std::to_string(seconds / 10));
        timeString.append(std::to_string(seconds % 10));

        return timeString;
    }

    int TimeToSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    Time operator+(const Time& time) const {
        Time summTime;
        int addInSeconds = TimeToSeconds() + time.TimeToSeconds();
        summTime.hours = addInSeconds / 3600;
        summTime.minutes = (addInSeconds % 3600) / 60;
        summTime.seconds = addInSeconds % 60;
        return summTime;
    }

    Time operator-(const Time& time) const {
        Time summTime;
        int addInSeconds = TimeToSeconds() - time.TimeToSeconds();
        summTime.hours = addInSeconds / 3600;
        summTime.minutes = (addInSeconds % 3600) / 60;
        summTime.seconds = addInSeconds % 60;
        return summTime;
    }
    bool operator<(const Time& time) const {
        int timeInSeconds1 = TimeToSeconds();
        int timeInSeconds2 = time.TimeToSeconds();
        if (timeInSeconds1 < timeInSeconds2) return true;
        return false;
    }
    bool operator>(const Time& time) const {
        int timeInSeconds1 = TimeToSeconds();
        int timeInSeconds2 = time.TimeToSeconds();
        if (timeInSeconds1 > timeInSeconds2) return true;
        return false;
    }
    class ExNegativeNumber {
    public:
        std::string nameObject;
        ExNegativeNumber(std::string nameObj) : nameObject(nameObj) {}
    };
private:
    int hours;
    int minutes;
    int seconds;
};
Time operator+(const Time& time1, const double time2) {
    Time summTime;
    int addInSeconds = time1.TimeToSeconds() + static_cast<int>(time2 * 3600);
    summTime.hours = addInSeconds / 3600;
    summTime.minutes = (addInSeconds % 3600) / 60;
    summTime.seconds = addInSeconds % 60;
    return summTime;
}
Time operator+(const double time1, const Time& time2) {
    return time2 + time1;
}
class ExNotNumber {
public:
    ExNotNumber() : message("Введён символ, не являющийся целым числом.") { }
    void printMessage() const { std::cout << message << std::endl; }
private:
    std::string message;
};


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int h, m, s;
    try {
        std::cout << "Введите часы, минуты и секунды для time1 через пробел и нажмите Enter\n";
        
        if (!(std::cin >> h >> m >> s))
            throw ExNotNumber();
        std::cout << "time2 задано 01:67:05\n\n";
        Time time1(h, m, s);
        Time time2(1, 67, 5);
        Time sumTime = time1 + time2;
        Time minusTime = time1 - time2;
        Time timePlusNumber = time1 + 1.5;
        Time numberPlusTime = 2.3 + time2;
        std::cout << "time 1 = " << time1.ShowTime() << std::endl;
        std::cout << "time 2 = " << time2.ShowTime() << std::endl;
        std::cout << "Сумма time1 + time2 = " <<  sumTime.ShowTime() << std::endl;
        std::cout << "Разница time1 - time2 = " << minusTime.ShowTime() << std::endl;
        std::cout << "Время time1 + число time2 = " << timePlusNumber.ShowTime() << std::endl;
        std::cout << "Число time2 + время time1 = " << numberPlusTime.ShowTime() << std::endl;
        if (time1 < time2) std::cout << "Время time1 < time2 = " << "True" << std::endl;
        else std::cout << "Время time1 < time2 = " << "False" << std::endl;
        if (time1 > time2) std::cout << "Время time1 > time2 = " << "True" << std::endl;
        else std::cout << "Время time1 > time2 = " << "False" << std::endl;

    }
    catch (Time::ExNegativeNumber& ex) {
        std::cout << ex.nameObject;
    }
    catch (ExNotNumber& ex)
    {
        ex.printMessage();
    }

}
