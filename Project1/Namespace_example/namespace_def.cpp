
#include <iostream>
#include "namespace_def.h"

float Complex::calculate(float a, float b)
{
	std::cout << "\nComplex::calculate: \t";
	return (a + b) / 2;
}

float Complex::Mean::calculate(float a, float b)
{
	std::cout << "\nComplex::Mean::calculate: \t";
	return sqrt(a * b);
}

float Simple::Multiply::calculate(float a, float b)
{
	std::cout << "\nSimple::Multiply::calculate: \t";
	return (a * b);
}

float Simple::calculate(float a, float b)
{
	std::cout << "\nSimple::calculate: \t";
	return (a + b);
}