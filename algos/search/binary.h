#include <stdio.h>


unsigned int binarySearch(unsigned int* arr, 
		unsigned int len, unsigned int value);


unsigned int binarySearch(unsigned int* arr, 
		unsigned int len, unsigned int value)
{
	unsigned int found = 0;
	unsigned int start = 0;
	unsigned int end = len;
	unsigned int middle = (start + end)/2;
	if(len == 0)
		return 0;

	if(arr[middle] == value) {
		found = 1;
	} else if(value > arr[middle]) {
		found = binarySearch(&arr[middle+1], end-middle, value);
	} else if(value < arr[middle]) {
		found = binarySearch(arr, middle, value);
	}

	return found;
}
