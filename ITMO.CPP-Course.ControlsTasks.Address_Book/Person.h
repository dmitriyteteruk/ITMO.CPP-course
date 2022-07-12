#pragma once
#include <string>
#include <fstream>
#include <sstream>

// абстранктный класс Person
class Person
{
public:
	std::string Name = Name;
	std::string LastName = LastName;
	int Phone = Phone;
	int Age = Age;
	Person();
	~Person();

	void SetName(std::string Name)
	{
		this->Name = Name;
	}
	std::string GetName() const {
		return Name;
	}

	void SetLastName(std::string LastName)
	{
		this->LastName = LastName;
	}
	std::string GetLastName() const {
		return LastName;
	}

	void SetPhone(int Phone)
	{
		this->Phone = Phone;
	}
	int GetPhone() const
	{
		return Phone;
	}

	void SetAge(int Age)
	{
		this->Age = Age;
	}
	int GetAge() const
	{
		return Age;
	}

	virtual std::string GetInfo() const
	{
		std::ostringstream fullInfo;
		fullInfo << GetLastName() << " " << GetName() << ", возраст: " << GetAge() << ", " << " телефон: " << GetPhone() << "\n";
		return fullInfo.str();
	}
	virtual void Save() const
	{
		std::ofstream fout("book1.txt", std::ios::app);
		fout << GetLastName() << " " << GetName() << ", возраст: " << GetAge() << ", " << " телефон: " << GetPhone() << "\n";
		fout << std::endl;
		fout.close();
	}

private:
	std::string Name;
	std::string Last_Name;
	int Phone;
	int Age;
};

Person::Person()
{
}

Person::~Person()
{
}

