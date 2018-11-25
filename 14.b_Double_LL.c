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
		printf("\nMENU\n1. Insertion at Beginning\n2. Insertion after search value\n3. Insertion at End\n4. Deletion\n5. Search\n6. Display\n7.Exit\nEnter a choice:");
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
		{	if(ptr->rlink==NULL)
            		{	printf("List is empty!!!");
            		}
            
			else
            		{	printf("Enter the element to be deleted: ");
                		scanf("%d",&key);
                		flag=0;
                
				while(ptr->rlink!=NULL)
                		{	ptr1=ptr;
                    			ptr=ptr->rlink;
                    			ptr2=ptr->rlink;
                    
					if(ptr->data==key)
                    			{	if(ptr->rlink==NULL)
                        			{	ptr1=ptr->llink;
                            				ptr1->rlink=NULL;
                            				free(ptr);
                            				flag+=1;   
						}
                       				
						else
						{	ptr1=ptr->llink;
                            				ptr2=ptr->rlink;
                            				ptr1->rlink=ptr2;
                            				ptr2->llink=ptr1;
                            				free(ptr);
                            				flag+=1;
                        			}
                    			}
               			 }
				if(flag==0)
				{	printf("Element NOT FOUND!");
                		}
            		}
        	}

		else if(cho==5)
        	{	if(ptr->rlink==NULL)
            		{	printf("List is EMPTY!");
            		}
            		
			else
            		{	ptr=ptr->rlink;
                		flag=0;
                		printf("Enter the element to be searched: ");
                		scanf("%d",&key);
                
				while(ptr!=NULL)
                		{	if(ptr->data==key)
                    			{	printf("\nElement FOUND!");
                        			flag+=1;
                    			}
                    			ptr=ptr->rlink;
                		}
                	if(flag==0)
                	{	printf("\nElement NOT FOUND!");
                }
            }
        }
        else if(cho==6)
		{	ptr=ptr->rlink;
            
			while(ptr!=NULL)
            		{	printf("%d -> ",ptr->data);
                		ptr=ptr->rlink;
            		}
            		printf("NULL");
        	}
	}while(cho==1 || cho==2 || cho==3 || cho==4 || cho==5 || cho==6);
}
