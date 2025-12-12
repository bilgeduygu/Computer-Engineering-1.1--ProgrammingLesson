#include <stdio.h>
#include <stdlib.h>

int top=-1;
int stack[8];
int MAXSIZE=8;

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
int main()
{
	push(4);
	push(27);
	push(7);
	push(1);
	
	printf("top of the stack : %d\n",peek());
	printf("elements: \n");
	
	while(top!=-1)
	{
		int data=pop();
		printf("%d,",data);
	}
	
	printf("stack is full: %s\n",isFull()?"true":"false");
	printf("stack is empty: %s",isEmpty()?"true":"false");
}
