/* First Cpp Code*/

//Includes
#include <iostream>
#include "init_types.h"
#include "reference_example.h"
#include "common_func.h"


int main()
{
	//Use namespace if needed, though not the best idea
	using namespace std;

	cout << "Hello World" << "\n New Day.";

	//init_example();

	//reference_egs();

	//Assignment 1
	int sum, fact, num1{ 21 }, num2{ 32 };
	Add(21, 32, sum);
	Factorial(3, fact);
	Swap(num1, num2);

	std::cout << " Sum is " << sum << "\nFactorial is " << fact << "\nSwapped values of " << num2 << " and " << num1 << " is " << num1 << " and " << num2;

	return 0;


}