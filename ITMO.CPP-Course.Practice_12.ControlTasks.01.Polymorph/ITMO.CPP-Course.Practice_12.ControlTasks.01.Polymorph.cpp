// ����������� ������� 13
#include <iostream>
#include <vector>
#include <windows.h>

// ��������� ������ �� ����� 
#include "human.h"
#include "student.h"
#include "teacher.h"

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// ������ ��������
	std::vector<int> scores;
	// ���������� ������ �������� � ������
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
	
	human* hum1 = new human("������", "����", "��������");
	std::cout << hum1->get_info() << "\n\n " << std::endl;
	
	human* stud = new student("������", "����", "��������", scores);	
	//student* stud = new student("������", "����", "��������", scores);
	
	hum1 = stud;
	
	std::cout << hum1->get_info() << "\n\n " << std::endl;
	unsigned int teacher_work_time = 40;
	
	human* tch = new teacher("�������", "�������", "���������", teacher_work_time);
	hum1 = tch;
	std::cout << hum1->get_info() << "\n\n" << std::endl;

	delete hum1;
	delete stud;
	delete tch;
	return 0;
}