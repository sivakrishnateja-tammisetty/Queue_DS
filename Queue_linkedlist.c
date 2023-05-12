#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue()
{
	int value;
	printf("Enter an element:");
	scanf("%d",&value);
	struct node *temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=value;
	temp->link=NULL;
	if(front==NULL)
	{
		front=rear=temp;
	}
	else
	{
		rear->link=temp;
		rear=temp;
	}
	printf("Element was added  successfully !!\n");
}
void dequeue()
{
	if(front==NULL)
	{
		printf("Queue was already empty\n");
	}
	else
	{
		struct node *temp=front;
		front=front->link;
		temp->link=NULL;
		free(temp);
		if(front==NULL)//This case is for if there is only 1 node in queue,if front is incrementing and rear is pointing there only
		{
			rear=NULL;
		}
	}
	printf("Element was removed successfully\n");
}
void peek()
{
	if(front==NULL)
	{
		printf("Queue was empty\n");
	}
	else
	{
		printf("top element was %d\n",front->data);
	}

}
void display()
{
	if(front==NULL)
	{
		printf("Queue was empty\n");
	}
	else
	{
		struct node *p=front;
		while(p!=NULL)
		{
			printf("%d\t",p->data);
			p=p->link;
		}
	}

}
int main()
{
	while(1)
	{
		int choice;
		printf("!) Enqueue 2) Dequeue 3) peek 4) Display 5)Exit\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			enqueue();
		}
		else if(choice ==2)
		{
			dequeue();
		}
		else if(choice==3)
		{
			peek();
		}
		else if(choice ==4)
		{
			display();
		}
		else
		{
			break;
		}
	}
	return 0;
}
