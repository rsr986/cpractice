#include <stdio.h>


void bubbleSort(unsigned int* arr, unsigned int len);
void selectionSort(unsigned int* arr, unsigned int len);
void insertionSort(unsigned int* arr, unsigned int len);

static void printArray(int a[], unsigned int size);
static void mergeTwoArrays(int a[], int size, int a1[], int size1,
	int a2[], int size2);

void mergeSort(int a[], unsigned int start, unsigned int end)
{
	int i, j, middle = (start + end)/2;
	int a1[middle], a2[end-middle];

	if(end == 1)
		return;

	for(i=0; i < middle; i++)
		a1[i]=a[i];
	for(j=0; j+i < end; j++)
	       a2[j]=a[j+i];

//	printArray(a1, middle);
//	printArray(a2, end-middle);

	mergeSort(a1, start, middle);
	mergeSort(a2, 0, end-middle);

	mergeTwoArrays(a, end, a1, middle, a2, end-middle);
}

static void mergeTwoArrays(int a[], int size, int a1[], int size1,
	int a2[], int size2)
{
	int i=0, j=0, k=0;
	for(i=0, j=0, k=0; i<size1 && j<size2; k++)
	{
		if(a1[i] <= a2[j])
		{
			a[k] = a1[i];
			i++;
		}	
		else
		{
			a[k] = a2[j];
			j++;
		}
	}

	if(i < size1)
	{
		while(i < size1)
		{
			a[k] = a1[i];
			i++;
			k++;
		}
	}

	if(j < size2)
	{
		while(j < size2)
		{
			a[k] = a2[j];
			j++;
			k++;
		}
	}

}

static void printArray(int a[], unsigned int size)
{
	for(int i=0; i<size; i++)
		printf("%d ", a[i]);
	printf("\n");
}

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
