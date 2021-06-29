
#include <iostream>
#include "mem_functions.h"


void new_cmd_egs(void)
{
	int* ptr1 = new int(3); // 3 is the initial value
	ptr1[0] = 28;
	std::cout << "\n " << ptr1[0] << "\t"  ;
	delete ptr1;
	ptr1 = nullptr;

}

void new_array_cmd(void)
{
	const int array_len = 6;
	int* ptr1 = new int[array_len]; // 3 is the initial value
	for (int i = 0; i < array_len; i++)
	{
		ptr1[i] = i * 7;
	}
	std::cout << "\n ";
	for (int i = 0; i < array_len; i++)
	{
		std::cout << "\t " << ptr1[i] ;
	}
	std::cout << "\n ";
	delete[] ptr1;
	ptr1 = nullptr;
}

void String_mem_alloc(void)
{
	char* prt = new char[4]; //It is string of 4-1 characters. The 4th character is \o (null terminated)
	strcpy_s(prt,4, "WoW");

	std::cout << "\n "<<prt;
	delete[]prt;
	prt = nullptr;
}

void twoDarray(void)
{
	//Create a 2D array of size [2][3]
	//Allocate memory to Create 2 1D array of 3 elements

	int* p1 = new int[3]; //First row of 3 elements/columns
	int* p2 = new int[3]; //Second row of 3 elements

	//Allocate memory to Create an array of pointers
	int** Prt2D = new int* [2]; //2 rows can be created

	Prt2D[0] = p1; //First row of Prt2D is pointing to the 1D array p1
	Prt2D[1] = p2;

	Prt2D[0][1] = 0xCDF;

	std::cout << "\n " << Prt2D[0][1];

	//Delete in the same order as new coomand
	delete[] p1;
	p1 = nullptr;

	delete[] p2;
	p2 = nullptr;

	delete[] Prt2D;
	Prt2D = nullptr;

}