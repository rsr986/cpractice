#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bits.h"



unsigned int setBit(unsigned int val, unsigned int pos)
{
	return setbit(val, pos);
}

unsigned long int setBitp(unsigned int* val, unsigned int pos)
{
	return setbitp(val, pos);
}

unsigned int clearBit(unsigned int val, unsigned int pos)
{
	return clearbit(val, pos);
}

unsigned int toggleBit(unsigned int val, unsigned int pos)
{
	return togglebit(val, pos);
}

unsigned int extractBit(unsigned int val, unsigned int pos)
{
	if(extractbit(val, pos))
		return 1;
	else
		return 0;
}


void printIntToBinary(unsigned int value)
{
	char* arr = (char*) calloc(SIZE_OF_WORD, sizeof(char));
	uIntToBinary(arr, value);
//	printf("%s\n", strrev(arr));
//	puts(strrev(arr));
	for(int i=strlen(arr)-1; i>=0; i--)
	       putchar(arr[i]);	
	free(arr);
}

void uIntToBinary(char* arr, unsigned int value)
{
	unsigned int len = 0;
	do 
	{
		//arr[len] = value % 2;
		if(value%2)
			arr[len] = '1';
		else
			arr[len] = '0';
		value /= 2;
		len++;
	}while(value != 0);
	arr[len] = '\0';	
}

void printCharArrayInverse(unsigned int arr[], int len)
{
	for(int i=len-1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
}

