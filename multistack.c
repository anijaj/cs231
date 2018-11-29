#include<stdio.h>
#include<stdlib.h>

void main()

{	int A[30], top1=0, top2=30, i, n;

	do
	{	printf("\n\t\tMENU\nSTACK1\t\t\tSTACK2\n1. PUSH\t\t\t4. PUSH\n2. POP\t\t\t5. POP\n3. DISPLAY\t\t6. DISPLAY\n\t\t7.EXIT\n\nEnter a choice: ");
		scanf("%d",&n);

		if(n==1)
		{	top1=top1+1;
			printf("Enter the elements: ");
			scanf("%d",&A[i]);
			printf("Elements PUSHED!");
		}

		else if(n==2)
		{	if(top1==0)
			{	printf("Stack is EMPTY!");
			}

			else
			{	printf("Popped out %d",A[top1]);
				A[top1]=NULL;
				top1-=1;
			}
		}


		else if(n==3)
		{	printf("Elements are ");
			for(i=top1 ; i>0 ; i--)
			{	printf("%d -> ",A[i]);
			}
			printf("NULL");
		}

		else if(n==4)
		{	top2=top2-1;
			printf("Enter the elements: ");
			scanf("%d",&A[top2]);
			printf("Elements PUSHED!");
		}

		else if(n==5)
		{	if(top2==30)
			{	printf("Stack is EMPTY!");
			}
			
			else
			{	printf("Popped out %d",A[top2]);
				for(i=top2 ; i<30 ; i++)
					{	printf("%d -> ",A[i]);
					}
				printf("NULL");
			}
		}
	}while(n==1||n==2||n==3||n==4||n==5||n==6);
}
