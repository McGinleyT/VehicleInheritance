#ifndef Car_C_H
#define Car_C_H

#include"Vehicle_C.h"

class Car_C : public Vehicle_C
{
private:
	int doors;

public:
	Car_C();
	Car_C(int, string, int);

	void Set_Doors(int);

	int Get_Doors();

	void Display_Info();
};


#endif