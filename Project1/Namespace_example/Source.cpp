#include <iostream>
#include "namespace_def.h"

int main()
{
	using namespace Complex::Mean;

	std::cout << calculate(4.0f, 4.0f);
	std::cout << Complex::calculate(4.0f, 4.0f);
	std::cout << Simple::calculate(4.0f, 4.0f);
	std::cout << Simple::Multiply::calculate(4.0f, 4.0f);
	return 0;
}