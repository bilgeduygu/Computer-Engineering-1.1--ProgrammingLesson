#include <stdio.h>
#include <stdlib.h>

int MAXSIZE=8;
int stack[8];
int top=-1;

int isEmpty()
{
	if(top==-1)
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
	if(top==MAXSIZE)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int push(int data)
{
	if(!isFull())
	{
		top++;
		stack[top]=data;
	}
	else{
		printf("stack is full");
	}
}
int pop()
{
	int data;
	if(!isEmpty())
	{
		data=stack[top];
		top--;
		return data;
	}
	else
	{
		printf("stack is empty");
	}
}
int peek()
{
	return stack[top];
}
int main()
{
	push(30);
	push(20);
	push(10);
	
	printf("element at the top pf the stack: %d\n",peek());
	printf("elements: ");
	
	while(!isEmpty())
	{
		int data=pop();
		printf("%d\n",data);
	}
	
	printf("stack is full : %s\n",isFull()?"true":"false");
	printf("stack is empty : %s",isEmpty()?"true":"false");
}
