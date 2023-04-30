//Thomas McGinley
//April 30, 2023
//CIS1202 N01

#include<iostream>
#include<string>
#include"Suv_C.h"

using namespace std;

int main()
{
	int yearBuilt;
	string manuName;
	int numDoors;
	double tankSize;

	cout << "VEHICLE:";
	Vehicle_C testVehicle;
	cout << "\nEnter year built: ";
	cin >> yearBuilt;
	cout << "Enter manufacturer name: ";
	cin.ignore();
	getline(cin, manuName);
	
	testVehicle.Set_Year(yearBuilt);
	testVehicle.Set_Manufacturer(manuName);
	cout << "\nVEHICLE INFO:";
	testVehicle.Display_Info();


	cout << "\n\nCAR:";
	cout << "\nEnter year built: ";
	cin >> yearBuilt;
	cout << "Enter manufacturer name: ";
	cin.ignore();
	getline(cin, manuName);
	cout << "Enter number of doors: ";
	cin >> numDoors;
	
	Car_C testCar(numDoors, manuName, yearBuilt);
	cout << "\nCAR INFO:";
	testCar.Display_Info();


	cout << "\n\nSUV:";
	cout << "\nEnter year built: ";
	cin >> yearBuilt;
	cout << "Enter manufacturer name: ";
	cin.ignore();
	getline(cin, manuName);
	cout << "Enter number of doors: ";
	cin >> numDoors;
	cout << "Enter size of gas tank in gallons: ";
	cin >> tankSize;

	Suv_C testSuv(tankSize, numDoors, manuName, yearBuilt);
	cout << "\nSUV INFO:";
	testSuv.Display_Info();

	return 0;
}