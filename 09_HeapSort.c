/*
	9. HEAP SORT
	NAME : ANIJA J
	ROLL No. : 07
*/

#include<stdio.h>

void main()
{
	int A[20],n,i,j,c,root,temp;
	printf("\n Enter the number of elements: ");
	scanf("%d",&n);
	printf("\n Enter the numbers: ");
	for(i=0;i<n;i++)
		{scanf("%d",&A[i]);}
	for(i=1;i<n;i++)
	{
		c=i;
		do
		{
			root=(c-1)/2;
			if(A[root]<A[c])
			{
				temp=A[root];
				A[root]=A[c];
				A[c]=temp;
			}
			c=root;
		}while(c!=0);
	}
	printf("Heap array: ");
	for(i=0;i<n;i++)
		{printf("%d\t",A[i]);}
	for(j=n-1;j>=0;j--)
	{
		temp=A[0];
		A[0]=A[j];
		A[j]=temp;
		root=0;
		do
		{
			c=2*root+1;
			if((A[c]<A[c+1])&&c<j-1)
				i++;
			if(A[root]<A[c]&&c<j)
			{
				temp=A[root];
				A[root]=A[c];
				A[c]=temp;
			}
			root=c;
		}while(c<j);
	}
		printf("\n The sorted array: ");
		for(i=0;i<n;i++)
			{printf("%d \t",A[i]);}
}
