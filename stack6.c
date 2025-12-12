#include <stdlib.h>
#include <stdio.h>

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
int peek()
{
	return stack[top];
}
int push(int data)
{
	if(!isFull())
	{
		top++;
		stack[top]=data;
	}
	else
	{
		printf("full");
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
		printf("empty");
	}
}
int main()
{
	push(5);
	push(10);
	push(15);
	push(20);
	
	printf("top of the stack : %d\n",peek());
	printf("elements: ");
	
	while(top!=-1)
	{
		int data=pop();
		printf("%d\n",data);
	}
	
	printf("stack is full %s\n",isFull()?"true":"false");
	printf("stack is empty %s",isEmpty()?"true":"false");
}
