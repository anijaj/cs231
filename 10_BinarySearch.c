/*
	10. BINARY SEARCH
	NAME : ANIJA J
	ROLL No. : 07
*/

#include <stdio.h>
     
int main()
	{	int A[50], n, i, j, x, temp, f, l, mid, flag=0;
		printf("Enter number of elements: ");
		scanf("%d",&n);
		printf("Enter the elements: ");
		for(i=0 ; i<n ; i++)
		scanf("%d",&A[i]);
		printf("Enter the element to be searched: ");
		scanf("%d", &x);
		f=0;
		l=n-1;
		for( i=0 ; i<n-1 ; i++)
			{	for( j=0 ; j<n-i-1 ; j++)
				{	if(A[j] > A[j+1])
					{	temp = A[j];
						A[j] = A[j+1];
						A[j+1]= temp;
					}
				}
			}	  
		printf("The sorted list in ascending order : ");
		for( i=0 ; i<n ; i++)
			{	printf("%d \t",A[i]);
				}
		mid = (f+l)/2;
		while(f<=l)
			{	if(A[mid]<x)
					f=mid+1;
 				else if(A[mid]==x)
					{	printf("\n%d found at location %d.\n",x,mid+1);
						break;
					}
				else
					l=mid-1;
					mid=(f+l)/2;
    			}
 
    		if(f>l)
			{	printf("\nNot found!\n%d not present in the list.",x);
			}
		
		return 0;
	
	}
