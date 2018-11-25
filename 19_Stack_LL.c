#include<stdio.h>
#include<stdlib.h>

struct node
{	int data;
	struct node *link;
};

void main()

{	int n;
	struct node *temp, *top, *head;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=NULL;
	temp->link=NULL;
	head=temp;
	top=head->link;

	do
	{	printf("\nMENU\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n\nEnter a choice: ");
		scanf("%d",&n);

		if(n==1)
		{	temp=(struct node *)malloc(sizeof(struct node));
			printf("Enter the element: ");
			scanf("%d",&temp->data);
			temp->link=head->link;
			head->link=temp;
			top=head->link;
		}

		else if(n==2)
		{	if(top==NULL)
			{	printf("Stack is EMPTY!");
			}

			else
			{	printf("Popped out %d",top->data);
				temp=top;
				top=top->link;
				head->link=top;
				free(temp);
			}
		}

		else if(n==3)
		{	printf("Elements are: ");
			temp=top;
			
			while(temp!=NULL)
			{	printf("%d -> ",temp->data);
				temp=temp->link;
			}
			printf("NULL");
		}
	}while(n==1||n==2||n==3);
}
