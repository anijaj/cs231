/*
	1.SEQUENTIAL SEARCH
	NAME : ANIJA J
	ROLL No. : 07
*/

#include<stdio.h>

int main()

{
	int A[50],i,n,x;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		{	scanf("%d",&A[i]);
			}

	printf("Enter the element to be searched: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
		{
		{
			if(x==A[i])
				{	printf("%d found at %d",x,i+1);	
					break;					
					}
		}
	}
	
	

	if(i==n)
	{
		printf("Not found !");
		}
	return 0;	
}
	

