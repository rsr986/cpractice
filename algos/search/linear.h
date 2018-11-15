#include <stdio.h>


unsigned int linearSearch(unsigned int* arr, 
		unsigned int len, unsigned int value);


unsigned int linearSearch(unsigned int* arr, 
		unsigned int len, unsigned int value)
{
	unsigned int found = 0;
	for( int i=0; i < len; i++)
	{
		if(arr[i] == value) {
			found = 1;
			break;
		}
	}
	return found;
}
