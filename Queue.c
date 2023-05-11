#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int front=-1,rear=-1;
int Queue[SIZE];
void enQueue()
{
	if(rear==SIZE-1)
	{
		printf("Queue was full\n");
	}
	else
	{
		int data;
		printf("enter which element you want to insert:");
		scanf("%d",&data);
		if(front=-1)
		{
			front=0;
		}
		rear++;
		Queue[rear]=data;
	}
	printf("You inserted element into queue successfully\n");
}
void deQueue()
{
	if(front==-1 || front>rear)
	{
		printf("Queue was Empty\n");
	}
	else
	{
		front++;
	}
	printf("You removed element from queue successfully\n");
}
void peek()
{
	if(front==-1 || front>rear)
	{
		printf("Queue was empty\n");
	}
	else
	{
		printf("Top most element is %d\n",Queue[front]);
	}
}
void display()
{
	if(front==-1 || front>rear)
	{
		printf("Queue was empty\n");
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			printf("%d\t",Queue[i]);
		}
	}
}
int main()
{
	while(1)
	{
		int choice;
		printf("1) Enqueue 2) Dequeue 3) Peek 4) Display 5) Exit\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("You selected Enqueue operation:\n");
			enQueue();
		}
		else if(choice ==2)
		{
			printf("You selected Dequeue operation:\n");
			deQueue();
		}
		else if(choice==3)
		{
			printf("You selected Peek  operation:\n");
			peek();
		}
		else if(choice==4)
		{
			printf("You selected Display operation:\n");
			display();
		}
		else
		{
			break;
		}
	}
	return 0;
}
