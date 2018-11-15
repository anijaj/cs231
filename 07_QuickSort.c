#include<stdio.h>

void main()
	{
	int A[20],i,j,n,temp;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("Enter the element: ");
	for(i=0;i<n;i++)
		{
		scanf("%d",&A[i]);
		}
	printf("The unsorted list:");
	for(i=0;i<n;i++)
		{
		printf("\n%d",A[i]);
		}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]>A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	printf("\nThe sorted list : ");
	for(i=0;i<n;i++)
		{
		printf("\n%d",A[i]);
		}
	
	}
