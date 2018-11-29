/*
	1.SEQUENTIAL SEARCH
	NAME : ANIJA J
	ROLL No. : 07
*/

#include<stdio.h>

void main()
	{
	  int A[50], n, i, j, min, temp;
	  printf("Enter the number of elements: ");
	  scanf("%d",&n);
	  printf("Enter the elements: ");
	  for( i=0 ; i<n ; i++)
	  	{	scanf("%d",&A[i]);
			}
	  
	  for( i=0 ; i<n-1 ; i++)
		{ min = i;
			for( j=i+1 ; j<n ; j++)
				{ if(A[min] > A[j])
					min = j;
					}
				
				if( min!=i )
				{	temp = A[i];
					A[i] = A[min];
					A[min]=temp;
					}

			}

	   printf("The sorted array : ");
	   for ( i=0 ; i<n ; i++ )
		{	printf("%d\t", A[i]);
			}
 
	   }
