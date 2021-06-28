
#include <iostream>
#include "Func.h"

int main()
{
	int sum = Add(21, 32);
	double sum1 = Add(3.23, 54.21);

	int x{ 23 };
	Print(&x);

	const int y{ 54 };
	Print(&y);

	return 0;
}