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
        	printf("\nMENU\n1. Insertion at Beginning\n2. Insertion after search value\n3. Insertion at End\n4. Deletion\n5. Search\n6. Display\n7. Exit\nEnter a choice: ");
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
		{	if(ptr->link==NULL)
			{	printf("List is EMPTY!");
			}
			
			else
			{	printf("Enter the element to be deleted: ");
                		scanf("%d",&key);
                		flag=0;
                		
				while(ptr->link!=NULL)
                		{	ptr1=ptr;
                    			ptr=ptr->link;
                    
					if(ptr->data==key)
                    			{	ptr1->link=ptr->link;
                        			free(ptr);
                        			flag+=1;
                    			}
                		}
                	
				if(flag==0)
				{	printf("Element NOT FOUND!");
                		}
            		}
        	}

		else if(cho==5)
		{	if(ptr->link==NULL)
			{	printf("List is EMPTY!");
			}
            		ptr=ptr->link;
            		flag=0;
            		printf("Enter the element to be searched: ");
            		scanf("%d",&key);
            		
			while(ptr!=NULL)
            		{	if(ptr->data==key)
                		{	printf("\nElement FOUND!");
                    			flag+=1;
                		}
                		ptr=ptr->link;
            		}
            
			if(flag==0)
            		{	printf("\nElement NOT FOUND!");
            		}
        	}

		else if(cho==6)
		{	ptr=ptr->link;
            
			while(ptr!=NULL)
			{	printf("%d -> ",ptr->data);
                		ptr=ptr->link;
            		}
            		printf("NULL");
        	}
	}while(cho==1 || cho==2 || cho==3 || cho==4 || cho==5 || cho==6);
}
