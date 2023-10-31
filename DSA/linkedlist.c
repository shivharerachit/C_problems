#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *add;
void createlist(int n)
{
	int i=0,data,value,r;
	//r=n;
	struct node *new1,*p;
	for(i=0;i<5;i++)
	{
		new1=(struct node *)malloc(sizeof(struct node));
		printf("Enter the value:");
		scanf("%d",&value);
		new1->data=value;
		new1->next=NULL;
		if(i=0)
		{
			add=new1;
			p=new1;
		}
		else
		{
			p->next=new1;
			p=new1;
		}
	}
}
void traverselist()
{
	int value;
	struct node *new1,*p;
	new1=add;
	while(new1->next!=NULL)
	{
		value=new1->data;
		p=new1;
		new1=p->next;
		printf("The value is %d.",value);
	}
}
int main()
{
	int n;
	//printf("enter the no. elment:");
	//scanf("%d",&n);
//	printf("%d",n);
	createlist(5);
	traverselist();
}

