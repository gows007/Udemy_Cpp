#include <iostream>
#include "common_func.h"


void Add(int a, int b, int& result)
{
	result = a + b;
}
void Factorial(int a, int& result)
{
	result = 1;
	for (int i = 1; i <= a; i++)
	{
		result = result * i;
	}
}
void Swap(int& a, int& b)
{
	int temp{};
	temp = a;
	a = b;
	b = temp;
}

void Swap(int* a, int* b)
{
	int temp{};
	temp = *a;
	*a = *b;
	*b = temp;
}