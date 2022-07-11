#include <Windows.h>
#include <iostream>
#include <tuple>

using Tuple = std::tuple <double, double, int>;
Tuple SqRoot(double a, double b, double c)
{
    double x1, x2;
    int flag = -1;
    double D = b * b - 4 * a * c;
	if (D > 0) {
		x1 = ((-b) + sqrt(D)) / (2 * a);
		x2 = ((-b) - sqrt(D)) / (2 * a);
		flag = 1;
	}
	if (D == 0) {
		x1 = (-b) / (2 * a);
		x2 = x1;
		flag = 0;
	}
	return std::make_tuple(x1, x2, flag);
}

int main()
{
    // руссификация консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
	double a, b, c;
	std::cout << "Введите через пробел коэффициенты квадратного уравнения a, b и c\n";
	std::cin >> a >> b >> c;
	Tuple t1 = SqRoot(a, b, c);
	std::cout << "Корни квадратного уравнения равны " << std::get<0>(t1) << " и " << std::get<1>(t1) << ", а флаг равен " << std::get<2>(t1) << "\n";
}

