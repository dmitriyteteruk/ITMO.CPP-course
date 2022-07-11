// в этой файле приведены решения 7.4 и 7.5
#include <Windows.h>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

//typedef std::tuple<std::string, int, double> Tuple;
using Tuple = std::tuple <std::string, int, double>;

void printTupleOfThree(Tuple t)
{
    std::cout << "\n("
        << std::get<0>(t) << ", "
        << std::get<1>(t) << ", "
        << std::get<2>(t) << ")" << std::endl;
}

Tuple funtup(std::string s, int a, double d)
{
    s.append("!");
    return make_tuple(s, a, d * 10);
}

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::vector<std::string> v1 = { "один", "два", "три", "четыре", "пять", "шесть" };
    std::vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
    std::vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    auto tuple0 = make_tuple(v1[0], v2[0], v3[0]);
    printTupleOfThree(tuple0);

    auto t1 = funtup(v1[1], v2[1], v3[1]);
    printTupleOfThree(t1);

    return 0;
}





