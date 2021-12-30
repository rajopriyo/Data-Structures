#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int queue[MAX];
int front=-1;
int rear=-1;
int x;
int isFull()
{
	if(rear==MAX-1)
	{
		return 1;
    }
    return 0;
}
int isEmpty()
{
	if(front==-1||front>rear)
	{
		return 1;
	}
	return 0;
}
void en_queue()
{
	if(isFull())
	{
		printf("Queue overflows\n");
	}
	else
	{
		front=0;
		scanf("%d",&x);
		rear++;
		queue[rear]=x;
	}
}
void de_queue()
{
	if(isEmpty())
	{
		printf("Queue underflows\n");
	}
	else
	{
		front++;
	}
		
}
void display()
{
	int i;
	for(i=front;i<rear+1;i++)
	{
		printf("%d->",queue[i]);
	}
}
int main()
{
	int ch=-1;
	printf("------Choice------\n\n");
	printf("------1.En-queue------\n");
	printf("------2.De-queue------\n");
	printf("\n------Press 0 to exit------\n");
	printf("\n------**----\n");
	while (ch!=0)
	{
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				en_queue();
				display();
				break;
			case 2:
				de_queue();
				display();
				break;
			case 0:
				exit(0);
			default:
			    printf("Invalid Choice");
				break;		
		}
	}
}