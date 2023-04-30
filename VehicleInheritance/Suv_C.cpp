#include"Suv_C.h"

Suv_C::Suv_C()
{
	tankCapacity = 0.0;
	Set_Doors(0);
	Set_Manufacturer("\0");
	Set_Year(0);
}

Suv_C::Suv_C(double tc, int door, string man, int yr)
{
	tankCapacity = tc;
	Set_Doors(door);
	Set_Manufacturer(man);
	Set_Year(yr);
}

void Suv_C::Set_Tank(double tc) 
{
	tankCapacity = tc;
}

double Suv_C::Get_Tank() 
{
	return tankCapacity;
}

void Suv_C::Display_Info()
{
	cout << "\nManufacturer: " << Get_Manufacturer();
	cout << "\nYear of production: " << Get_Year();
	cout << "\nNumber of doors: " << Get_Doors();
	cout << "\nTank Capacity: " << tankCapacity;
}