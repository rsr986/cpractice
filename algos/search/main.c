#include <stdio.h>
#include "linear.h"
#include "binary.h"


int main()
{
	//unsigned int arr[] = {32, 29, 85, 92, 85, 1, 5, 95, 12};
	unsigned int sortedArr[] = {1, 5, 12, 29, 32, 85, 92, 132, 150};
	unsigned int val = 0;
	if(binarySearch(sortedArr, 9, val)) 
		printf("value: %d found \n", val);
	else
		printf("value: %d not found \n", val);
		
}
