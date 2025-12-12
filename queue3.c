#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define CAPACITY 10

int queue[CAPACITY];
unsigned int size=0;
unsigned int front=-1;
unsigned int rear=-1;

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
		printf("%d,",queue[i]);
	}
	printf("\n");
}
int main()
{
	enqueue(5);
	printq();
	enqueue(10);
	printq();
	enqueue(15);	
	printq();
	
	dequeue();
	printq();
	dequeue();
	printq();
	return 0;
}
