
#include <iostream>
#include "reference_example.h"


void reference_egs(void)
{
	int x{ 10 };
	int &ref = x;
	std::cout << "\nX value is " << x <<"\nRef Value is "<<ref;
	x = 25;
	std::cout << "\nX value is " << x << "\nRef Value is " << ref;
	ref = 89;
	std::cout << "\nX value is " << x << "\nRef Value is " << ref;
	std::cout << "\nX address is " << &x << "\nRef address is " << &ref;

	int& ref2{ x };
	std::cout << "\nX value is " << x << "\nRef2 Value is " << ref2;
	std::cout << "\nX address is " << &x << "\nRef2 address is " << &ref2;
}