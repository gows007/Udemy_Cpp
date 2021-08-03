
#include "Car.h"
#include <iostream>

int main()
{
	Car carObj;
	Car car2(65);

	carObj.Dashboard();
	car2.Dashboard();

	carObj.FillFuel(63.9f);
	carObj.AddPassenger(3);
	carObj.Accelerate();
	carObj.Accelerate();
	carObj.Accelerate();

	carObj.Dashboard();
	carObj.Brake();
	carObj.Dashboard();

	return 0;
}