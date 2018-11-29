/*
	11. Singly LL - insert at begin, at end, after a value searched
	NAME : ANIJA J
	ROLL No. : 07
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void main()

{	int key,x,cho,flag;
	struct node *head,*temp,*ptr,*ptr1;
    	head=(struct node*)malloc(sizeof(struct node));
    	head->data=0;
    	head->link=NULL;

    	do
    	{	ptr=head;
        	printf("\nMENU\n1. Insertion at Beginning\n2. Insertion after search value\n3. Insertion at End\n4. Display\n5. Exit\nEnter a choice: ");
        	scanf("%d",&cho);
        	
		if(cho==1)
		{	ptr=head;
			temp=(struct node*)malloc(sizeof(struct node));
			temp->link=ptr->link;
			ptr->link=temp;
			printf("Enter the element: ");
            		scanf("%d",&x);
            		temp->data=x;
		}

		else if(cho==2)
		{	printf("Enter the element after which the new element has to be inserted: ");
            		scanf("%d",&key);
            		ptr=ptr->link;
            
			while(ptr!=NULL)
            		{	if(ptr->data==key)
                		{	temp=(struct node*)malloc(sizeof(struct node));
                   			ptr1=ptr->link;
                    			ptr->link=temp;
                    			temp->link=ptr1;
                    			printf("Enter the element: ");
                    			scanf("%d",&x);
                    			temp->data=x;

                		}
                		ptr=ptr->link;
            		}
        	}

		else if(cho==3)
		{	while(ptr->link!=NULL)
            		{	ptr=ptr->link;
            		}
            		temp=(struct node*)malloc(sizeof(struct node));
            		ptr->link=temp;
            		printf("Enter the element: ");
            		scanf("%d",&x);
            		temp->data=x;
            		temp->link=NULL;
        	}

		else if(cho==4)
		{	ptr=ptr->link;
            
			while(ptr!=NULL)
			{	printf("%d -> ",ptr->data);
                		ptr=ptr->link;
            		}
            		printf("NULL");
        	}

	}while(cho==1 || cho==2 || cho==3 || cho==4);
}
