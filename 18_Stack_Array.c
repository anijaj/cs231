
/*
	18. Stack using Array
	NAME : ANIJA J
	ROLL No. : 07
*/

#include<stdio.h>
#include<stdlib.h>

void main()

{	int A[20], top=0, n, i;
	do
	{	printf("\nMENU\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n\nEnter a Choice: ");
		scanf("%d",&n);

		if(n==1)
		{	top=top+1;
			printf("Enter the elements: ");
			scanf("%d",&A[top]);
			printf("Elements PUSHED!");
		}

		else if(n==2)
		{	if(top==0)
			{	printf("Stack is EMPTY!");
			}

			else
			{	printf("Popped out %d",A[top]);
				A[top]=NULL;
				top-=1;
			}
		}

		else if(n==3)
		{	printf("Elements are: ");
			for(i=top; i>0 ; i--)
				{	printf("%d -> ",A[i]);
				}
			printf("NULL");
		}		
	}while(n==1||n==2||n==3);
}
