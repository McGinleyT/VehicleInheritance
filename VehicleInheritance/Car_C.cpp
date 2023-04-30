#include"Car_C.h"

Car_C::Car_C()
{
	doors = 0;
	Set_Manufacturer("\0");
	Set_Year(0);
}

Car_C::Car_C(int door, string man, int yr)
{
	doors = door;
	Set_Manufacturer(man);
	Set_Year(yr);
}

void Car_C::Set_Doors(int door)
{
	doors = door;
}

int Car_C::Get_Doors()
{
	return doors;
}

void Car_C::Display_Info()
{
	cout << "\nManufacturer: " << Get_Manufacturer();
	cout << "\nYear of production: " << Get_Year();
	cout << "\nNumber of doors: " << doors;
}