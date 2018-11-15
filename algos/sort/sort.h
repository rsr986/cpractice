#include <stdio.h>


void bubbleSort(unsigned int* arr, unsigned int len);
void selectionSort(unsigned int* arr, unsigned int len);
void insertionSort(unsigned int* arr, unsigned int len);


void insertionSort(unsigned int* arr, unsigned int len)
{
	int i=0, j=0;
	for(i=0; i<len-1; i++)
	{
		int pos = i+1;
		int temp = arr[pos];
		for(j=pos; j>0; j--)
		{
			if(arr[j-1] > temp)
				arr[j] = arr[j-1];
			else
				break;
		}
		arr[j] = temp;
	}
}


void selectionSort(unsigned int* arr, unsigned int len)
{
	int i=0, j=0;
	for(i=0; i<len; i++)
	{
		unsigned int pos = i+1;
		unsigned int smallest = arr[i+1];
		for(j=i+1; j<len; j++)
		{
			if(smallest > arr[j])
			{
				smallest = arr[j];
				pos = j;
			}
		}
		if(arr[i] > smallest)
		{
			arr[pos] = arr[i];
			arr[i] = smallest;
		}
	}
}




void bubbleSort(unsigned int* arr, unsigned int len)
{
	for(int i=len; i > 0; i--)
	{
		for(int j=0; j<i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}	
}
