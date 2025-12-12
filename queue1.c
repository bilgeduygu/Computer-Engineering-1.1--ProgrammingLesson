#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define CAPACITY 100
int queue[CAPACITY];
unsigned int size=0;
unsigned int rear=CAPACITY-1;
unsigned int front=0;

int enqueue(int data)
{
	if(isFull())
	{
		return 0;
	}
	rear=(rear+1)%CAPACITY;
	size++;
	queue[rear]=data;
}
int dequeue()
{
	int data=INT_MIN;
	if(isEmpty())
	{
		return INT_MIN;
	}
	data=queue[front];
	front=(front+1)%CAPACITY;
	size--;
	return data;
}
int isFull()
{
	return (size==CAPACITY);
}
int isEmpty()
{
	return (size==0);
}
int getFront()
{
	return (isEmpty())
			? INT_MIN
			:queue[front];
}
int getRear()
{
	return (isEmpty())
			? INT_MIN
			:queue[rear];
}
int printq()
{
	int i=front;
	for(i=front;i<=rear;i++)
	{
		if(i==CAPACITY)
		{
			i=0;
		}
		printf("%d",queue[i]);
	}
}
int main()
{
	int a,b;
	
	a=1234;
	enqueue(a%10);
	a=a/10;
	enqueue(a%10);
	a=a/10;
	enqueue(a%10);
	a=a/10;
	enqueue(a);
	
	b=dequeue();
	b=b*10;
	b=b+dequeue();
	b=b*10;
	b=b+dequeue();
	b=b*10;
	b=b+dequeue();
	
	printf("%d",b);
	printq();
}
