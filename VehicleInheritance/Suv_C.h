#ifndef Suv_C_H
#define Suv_C_H

#include"Car_C.h"

class Suv_C : public Car_C
{
private:
	double tankCapacity;

public:
	Suv_C();
	Suv_C(double, int, string, int);

	void Set_Tank(double);

	double Get_Tank();

	void Display_Info();
};
#endif