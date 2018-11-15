#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bits.h"

int main() 
{
	unsigned int value = 0XFF29;
	unsigned int* valuep = &value;
	printIntToBinary(value);
	printf("\n");
	*valuep =	setBitp(valuep, 7);	
	printIntToBinary(*valuep);
	printf("\n");
	value =	clearBit(value, 10);	
	printIntToBinary(value);
	printf("\n");
	value =	toggleBit(value, 10);	
	printIntToBinary(value);
	printf("\n");
	printf("%u", extractBit(value, 10));
	printf("\n");
}
