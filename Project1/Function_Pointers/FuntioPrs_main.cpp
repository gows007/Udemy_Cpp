
#include <iostream>

void Print(int Count, char element)
{
	std::cout << "\n";
	for (int i = 0; i < Count; i++)
	{
		std::cout << element << " ";
	}
}

int main()
{
	//Normal Fuction Call
	Print(7, '%');

	//Creating Functio Pointers
	void (*func_ptr) (int, char) = Print;

	//Call using Pointer
	(*func_ptr)(9, '"');
	func_ptr(21, '§');

	return 0;
}