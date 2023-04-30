#ifndef Vehicle_C_H
#define Vehicle_C_H

#include<string>
#include<iostream>

using namespace std;

class Vehicle_C
{
private:
	string manufacturer;
	int year;

public:
	Vehicle_C();

	void Set_Manufacturer(string);
	void Set_Year(int);

	string Get_Manufacturer();
	int Get_Year();

	void Display_Info();
};
#endif