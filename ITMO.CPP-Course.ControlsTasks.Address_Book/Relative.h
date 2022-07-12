#pragma once
#include "Person.h"
#include <string>
class Relative : public Person
{

public:
	Relative();
	~Relative();

private:
	std::string Address;
	std::string Relationship;
	std::string City;

};

Relative::Relative()
{
}

Relative::~Relative()
{
}