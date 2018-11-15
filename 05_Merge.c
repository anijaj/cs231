#include <stdio.h>

int main()
{
	int A[20],temp[20],i,j,k,n,s,l1,h1,l2,h2;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements : ");
		scanf("%d",&A[i]);
	}

	for(s=1; s< n; s=s*2 )
	{
		l1=0;
		k=0;  
		while( l1+s < n)
		{
			h1=l1+s-1;
			l2=h1+1;
			h2=l2+s-1;
			if( h2>=n ) 
				h2=n-1;
			i=l1;
			j=l2;
			
			while(i<=h1 && j<=h2 )
			{
				if( A[i] <= A[j] )
					temp[k++]=A[i++];
				else
					temp[k++]=A[j++];
			}
			
			while(i<=h1)
				temp[k++]=A[i++];
			while(j<=h2)
				temp[k++]=A[j++];
			l1=h2+1;
		}
		for(i=l1; k<n; i++) 
			temp[k++]=A[i];

		for(i=0;i<n;i++)
			A[i]=temp[i];

		
	}
	
	printf("Sorted array is :\n");
	for( i=0 ; i<n ; i++)
		printf("%d\t", A[i]);
		
	return 0;
}
