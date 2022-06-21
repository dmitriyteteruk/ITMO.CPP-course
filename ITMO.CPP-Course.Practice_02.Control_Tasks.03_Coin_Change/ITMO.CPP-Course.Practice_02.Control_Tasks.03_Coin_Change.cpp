// ITMO.CPP-Course.Practice_02.Control_Tasks.03_Coin_Change.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

int main()
{
	// руссификаци€ консоли
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// «адание 3. –азмен монет
 	std::cout << "«адание 3. –азмен монет\n";
	int A(10), B(5), C(2), D(1);
	int i = 0;
	int sum = 0;
	int ostatok= 0;
	int result = 0;
	std::cout << "¬ведите сумму дл€ размена монетами: "; std::cin >> sum;
	
	if ((sum % A) != 0) 												// ветвь 1/3 - если sum не делитс€ на 10
	{
		i = sum / A;													// вычисл€ем кол-во дес€ток
		std::cout << i << " x " << A << " рублей \n";
		ostatok = sum - i * A; 											// считаем остаток
		i = ostatok / B;  												// вычисл€ем кол-во п€терок в остатке
		std::cout << i << " x " << B << " рублей \n";
		if (ostatok % B != 0)
		{
			ostatok = ostatok - i * B;									// считаем остаток
			i = ostatok / C;											// вычисл€ем кол-во двушек в остатке
			std::cout << i << " x " << C << " рублей \n";
			if (ostatok % C != 0)
			{
				ostatok = ostatok - i * C;								// считаем остаток
				i = ostatok / D;										// вычисл€ем кол-во рублей в остатке
				std::cout << i << " x " << D << " рублей \n";
			}
		}
	}
	else if (sum % 10 == 0 && sum != 0)								   // ветвь 2/3 - если sum делитс€ на 10
	{
		i = sum / 10;
		std::cout << i << " x " << A << " рублей \n";
	}

	else std::cout << " ¬ы ввели число 0 ";							   // ветвь 3/3 - если sum == 0
}
