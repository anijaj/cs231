/*
	5. MERGE SORT: RECURSIVE
	NAME : ANIJA J
	ROLL No. : 07
*/

#include<stdio.h>

void quicksort(int A[50], int l, int h);

int main()
	{	int A[50], n, i;
		printf("Enter the number of elements: ");
		scanf("%d",&n);
		printf("Enter te elements: ");
		for(i=0 ; i<n ;i++)
			{	scanf("%d",&A[i]);
			}
		quicksort(A,0,n-1);
		printf("Sorted Array: ");
		for(i=0 ; i<n ; i++)
			{	printf("%d\t",A[i]);
			}
		return 0;
	}

void quicksort(int A[50], int low, int high)
	{	int pivot, i, j, temp;
		if(low<high)
		{		pivot=low;
				i=low;
				j=high;
			while(i<j)
			{	while(A[i]<=A[pivot]&&i<=high)
					{i++;
					}
				while(A[j]>A[pivot]&&j>=low)
					{j--;
					}
	
				if(i<j)
					{	temp=A[i];
						A[i]=A[j];
						A[j]=temp;
					}
				}
	
				temp=A[j];
				A[j]=A[pivot];
				A[pivot]=temp;

				quicksort(A,low,j-1);
				quicksort(A,j+1,high);
		}
	}		
