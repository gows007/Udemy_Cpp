/* First Cpp Code*/

//Includes
#include <iostream>

int main()
{
	//Use namespace if needed, though not the best idea
	using namespace std;

	cout << "Hello World" << "\n New Day.";

	//UNiform initialization
	int b1{}; // Value init
	int b2{ 82 }; //Direct Init
	char e[8]{}; 
	char e1[8]{ "Hello" };

	char* p1 = new char[8]{};
	char* p2 = new char[9]{"Vanakkam"};

	int* p3 = new int{ 21 };

	//Printing all the values
	cout << "Integersa b1, b2: " << b1 << "\t" << b2 << "\n Char Arrays" << e << "\t" << e1 << "\n" << "Pointers are " << *p1 << "\t" << *p2 << *(p2+1) << "\t" << *p3;

}