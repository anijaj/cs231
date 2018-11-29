/*
	12. Double Linked List - insert at begin, at end, after a value searched
	NAME : ANIJA J
	ROLL No. : 07
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *llink,*rlink;
};

void main()
{
	int key, x, cho, flag;
	struct node *head,*temp,*ptr,*ptr1,*ptr2;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=0;
	head->llink=NULL;
	head->rlink=NULL;

	do
	{
		ptr=head;
		printf("\nMENU\n1. Insertion at Beginning\n2. Insertion after search value\n3. Insertion at End\n4. Display\n5. Exit\nEnter a choice: ");
	        scanf("%d",&cho);
		
		if(cho==1)
		{	printf("Enter the element: ");
            		scanf("%d",&key);
            		
			if(ptr->rlink==NULL)
            		{	temp=(struct node*)malloc(sizeof(struct node));
                		ptr->rlink=temp;
                		temp->llink=ptr;
                		temp->rlink=NULL;
                		temp->data=key;
            		}
            
			else 
            		{	temp=(struct node*)malloc(sizeof(struct node));
                		ptr1=ptr->rlink;
                		ptr->rlink=temp;
                		temp->llink=ptr;
                		temp->rlink=ptr1;
                		ptr1->llink=temp;
                		temp->data=key;
            		}
        	}
        	
		else if(cho==2)
		{	printf("Enter the element after which new element has to be inserted: ");
            		scanf("%d",&key);
            		ptr=ptr->rlink;
            
			while(ptr!=NULL)
            		{	if(ptr->data==key)
				{	temp=(struct node*)malloc(sizeof(struct node));
                    			ptr1=ptr->rlink;
                    			ptr->rlink=temp;
                    			temp->llink=ptr;
                    			ptr1->llink=temp;
                    			temp->rlink=ptr1;
                    			printf("Enter the element: ");
                    			scanf("%d",&x);
                    			temp->data=x;

                		}
                		ptr=ptr->rlink;
            		}
        	}
		
		else if(cho==3)
		{	while(ptr->rlink!=NULL)
			{	ptr=ptr->rlink;
			}
            		temp=(struct node*)malloc(sizeof(struct node));
            		ptr->rlink=temp;
            		printf("Enter data: ");
           		scanf("%d",&x);
            		temp->data=x;
            		temp->rlink=NULL;
            		temp->llink=ptr;
        	}

		else if(cho==4)
		{	ptr=ptr->rlink;
            
			while(ptr!=NULL)
            		{	printf("%d -> ",ptr->data);
                		ptr=ptr->rlink;
            		}
            		printf("NULL");
        	}
	}while(cho==1 || cho==2 || cho==3 || cho==4);
}
