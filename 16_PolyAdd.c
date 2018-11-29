/*
	16. Polynomial addition
	NAME : ANIJA J
	ROLL No. : 07
*/

#include<stdio.h>
#include<malloc.h>

struct Node
	{	int coeff;
		int pow;
		struct Node *next;
	};

void create_node(int x, int y, struct Node **temp)
	{	struct Node *r, *z;
		z = *temp;
		if( z==NULL )
			{	r=(struct Node*)malloc(sizeof(struct Node));
				r->coeff=x;
				r->pow=y;
				*temp=r;
				r->next=(struct Node *)malloc(sizeof(struct Node));
				r=r->next;
				r->next=NULL;
			}
		else
			{	r->coeff=x;
				r->pow=y;
				r->next=(struct Node *)malloc(sizeof(struct Node));
				r=r->next;
				r->next=NULL;
			}
	}
	
void polyadd(struct Node *p1, struct Node *p2,struct Node *p)
	{	while(p1->next && p2->next)
		{	if(p1->pow>p2->pow)
				{	p->pow=p1->pow;
					p->coeff=p1->coeff;
					p1=p1->next;
				}
			else if(p1->pow<p2->pow)
				{	p->pow=p2->pow;
					p->coeff=p2->coeff;
					p2=p2->next;
				}
			else
				{	p->pow=p1->pow;
					p->coeff=p1->coeff+p2->coeff;
					p1=p1->next;
					p2=p2->next;
				}
				
				p->next=(struct Node *)malloc(sizeof(struct Node));
				p=p->next;
				p->next=NULL;
		}
		
		while( p1->next||p2->next )
		{	if(p1->next)
			{	p->pow=p1->pow;
				p->coeff=p1->coeff;
				p1=p1->next;
			}
			
			if(p2->next)
			{	p->pow=p2->pow;
				p->coeff=p2->coeff;
				p2=p2->next;
			}
			p->next=(struct Node *)malloc(sizeof(struct Node));
			p=p->next;
			p->next=NULL;
		}
	}

void show(struct Node *node)
	{	while(node->next!=NULL)
			{	printf("%dx^%d",node->coeff,node->pow);
				node=node->next;
				if(node->next!=NULL)
				printf("+");
			}
	}

int main()
	{	struct Node *p1=NULL, *p2=NULL, *p=NULL;
		int a, b, c, d, e, f, a1, b1, c1, d1, e1, f1;
		printf("Enter the coefficients of 1st polynomial : ");
		scanf("%d%d%d",&a,&b,&c);
		printf("Enter the powers of 1st polynomial : ");
		scanf("%d%d%d",&d,&e,&f);
		printf("Enter the coefficients of 2nd polynomial : ");
		scanf("%d%d%d",&a1,&b1,&c1);
		printf("Enter the powers of 2nd polynomial : ");
		scanf("%d%d%d",&d1,&e1,&f1);

		create_node(a,d,&p1);
		create_node(b,e,&p1);
		create_node(c,f,&p1);

		create_node(a1,d1,&p2);
		create_node(b1,e1,&p2);
		create_node(c1,f1,&p2);

		printf("First polynomial: ");
		show(p1);

		printf("\nSecond polynomial: ");
		show(p2);

		p=(struct Node *)malloc(sizeof(struct Node));
		polyadd(p1,p2,p);

		printf("\nThe sum of the polynomials: ");
		show(p);
		
		return 0;
	}



