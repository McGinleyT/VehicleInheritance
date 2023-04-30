#include"Vehicle_C.h"


Vehicle_C::Vehicle_C()
{
	manufacturer = "\0";
	year = 0;
}

void Vehicle_C::Set_Manufacturer(string man)
{
	manufacturer = man;
}

void Vehicle_C::Set_Year(int yr)
{
	year = yr;
}

string Vehicle_C::Get_Manufacturer()
{
	return manufacturer;
}

int Vehicle_C::Get_Year()
{
	return year;
}

void Vehicle_C::Display_Info()
{
	cout << "\nManufacturer: " << manufacturer;
	cout << "\nYear of production: " << year;
}