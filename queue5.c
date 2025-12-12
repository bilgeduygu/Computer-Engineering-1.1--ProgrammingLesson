#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define CAPACITY 10
int queue[CAPACITY];
unsigned int front=-1;
unsigned int rear=-1;
unsigned int size=0;

int isEmpty()
{
	if(rear==front)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull()
{
	if(rear==CAPACITY-1 && front==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int enqueue(int data)
{
	if(!isFull())
	{
		rear++;
		queue[rear]=data;
	}
	else 
	{
		printf("full");
	}
}
int dequeue()
{
	/*if(front==CAPACITY-2 && rear==CAPACITY-1)
	{
		front=0;
		rear=0;
	}*/
	if(!isEmpty())
	{
		front++;
	}
	else 
	{
		printf("empty");
	}
}
int printq()
{
	int i;
	for(i=front+1;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	
	printq();
	
	dequeue();
	dequeue();
	
	printq();
}
