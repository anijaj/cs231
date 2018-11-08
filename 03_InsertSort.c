#include<stdio.h>

void main()
	{	int A[50], n, i, j, temp;
		printf("Enter the number of elements: ");
		scanf("%d",&n);
		printf("Enter the elements: ");
		for(i=0 ; i<n ; i++)
			{	scanf("%d",&A[i]);
			}
		for(i=1 ; i<=n-1 ; i++)
			{	j=i;
				while(j>0 && A[j-1]>A[j])
					{	temp=A[j];
						A[j]=A[j-1];
						A[j-1]=temp;
						j--;
					}
			}
		printf("\nSorted Array : ");
		for(i=0 ; i<n ; i++)
			{	printf("%d\t",A[i]);
			}
	}
