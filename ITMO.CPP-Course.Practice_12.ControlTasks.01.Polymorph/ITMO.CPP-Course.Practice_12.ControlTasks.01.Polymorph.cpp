// контрольное задание 13
#include <iostream>
#include <vector>
#include <windows.h>

// добавляем классы из папки 
#include "human.h"
#include "student.h"
#include "teacher.h"

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// Оценки студента
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(4);
	
	human* hum1 = new human("Иванов", "Иван", "Иванович");
	std::cout << hum1->get_info() << "\n\n " << std::endl;
	
	human* stud = new student("Петров", "Петр", "Петрович", scores);	
	//student* stud = new student("Петров", "Петр", "Петрович", scores);
	
	hum1 = stud;
	
	std::cout << hum1->get_info() << "\n\n " << std::endl;
	unsigned int teacher_work_time = 40;
	
	human* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	hum1 = tch;
	std::cout << hum1->get_info() << "\n\n" << std::endl;

	delete hum1;
	delete stud;
	delete tch;
	return 0;
}