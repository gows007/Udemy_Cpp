
#include <iostream>


void PrintRef(const int& ref) //Defined as const, to prevent anyone to change value inside the function
{
	using namespace std;
	cout << "\n Printed Variables: "<< ref << endl;
}


int main()
{

	//Area of circle  = pi*r*r

	const float PI = 3.14159f;

	int radius{ 5 }; //cm
	float area{};

	area = PI * radius * radius;

	std::cout << "Area is " << area;

	const int RAND_NUM = 87;
	const int* constPtr{ &RAND_NUM };
	std::cout << "\n Random Number: " << *constPtr;

	int x{ 10 }, y{ 20 };
	int* const ptrx = &x;
	std::cout << "\n Number: " << *ptrx;

	PrintRef(y);

	//Checking Ref const
	const int MAX = 12;
	int& ref_x1 = x;
	const int& ref_x2 = x; // Only ref2 cannot be changed, but since x is not const, its value can change. Useless here


	ref_x1 = 87;
	std::cout << "\n x is " << x;

	std::cout << "\n ref_x2 is " << ref_x2;


	return 0;
}