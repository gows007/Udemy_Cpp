
#include<stdio.h>
#include<stdlib.h>

#include "Header.h"

void malloc_egs(void)
{
	int* ptrMem = (int*)malloc(sizeof(int)); //Memory allocated to the ptr
	*ptrMem = 5;

	printf("\n%d", *ptrMem);

	free(ptrMem); // Free the memory 
	ptrMem = NULL; //To avoid dangling pointer

	free(ptrMem); // This is redundant and will work because ptr is NULL

}

void calloc_egs(void)
{
	int* ptrMem = (int*)calloc(2,sizeof(int)); //Memory allocated to the ptr
	*ptrMem = 5;
	ptrMem[1] = 23;

	printf("\n%d \t %d", *ptrMem, ptrMem[1]);

	free(ptrMem); // Free the memory 
	ptrMem = NULL; //To avoid dangling pointer

	free(ptrMem); // This is redundant and will work because ptr is NULL
}