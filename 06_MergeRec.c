/*
	6. MERGE SORT: RECURSIVE
	NAME : ANIJA J
	ROLL No. : 07
*/

#include <stdio.h>

void mergeSort(int [20], int, int, int);
void partition(int [20],int l, int h);
int main()
	{
	int A[20], i, s;
	printf("Enter total number of elements:");
	scanf("%d", &s);
	printf("Enter the elements: ");
	for(i = 0; i < s; i++)
	{
		scanf("%d",&A[i]);
	}
	partition(A, 0, s-1);
	printf("After merge sort:\n");
	for(i = 0;i < s; i++)
	{
		printf("%d\t",A[i]);
	}
	return 0;
	}

void partition(int A[20],int low,int high)
	{int mid;
	if(low < high)
		{
		mid = (low + high) / 2;
		partition(A, low, mid);
		partition(A, mid + 1, high);
		mergeSort(A, low, mid, high);
		}
	}

void mergeSort(int A[20],int low,int mid,int high)
	{int i, mi, k, lo, temp[50];
 	lo = low;
	i = low;
	mi = mid + 1;
	while ((lo <= mid) && (mi <= high))
	{		
        	if (A[lo] <= A[mi])
		{
			temp[i] = A[lo];
			lo++;
		}
	else
		{
			temp[i] = A[mi];
			mi++;
		}
		i++;

	}

	if (lo > mid)
	{
	for (k = mi; k <= high; k++)
	{
		{
			temp[i] = A[k];
			i++;
		}
	}
	}
	
	else
	{
	for (k = lo; k <= mid; k++)
	{
		{
			temp[i] = A[k];
			i++;
		}
	}

	for (k = low; k <= high; k++)
		{
			A[k] = temp[k];
		}
	}
	}
