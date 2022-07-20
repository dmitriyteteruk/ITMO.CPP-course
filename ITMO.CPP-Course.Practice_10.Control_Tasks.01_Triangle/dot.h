#pragma once

class Dot
{
private:
	double x;
	double y;
public:
	Dot();							// пустой конструктор
	Dot(double x, double y);		// конструктор с параметрами
	double distanceTo(Dot point);	// метод определения расстояния 
};
