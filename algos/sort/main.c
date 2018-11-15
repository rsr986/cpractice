#include <stdio.h>
#include "sort.h"

void printArr(unsigned int* arr, unsigned int len);

void main()
{
	unsigned int arr[] = {90, 39, 89, 34, 52, 6, 23, 1, 646, 2};
	printArr(arr, 10);
//	bubbleSort(arr, 10);
	insertionSort(arr, 10);
//	selectionSort(arr, 10);
	printArr(arr, 10);
}

void printArr(unsigned int* arr, unsigned int len)
{
	for(int i=0; i<len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}




