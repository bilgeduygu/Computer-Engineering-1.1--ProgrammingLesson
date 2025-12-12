#include <stdio.h>

int MAXSIZE=8;
int stack[8];
int top=-1;

int push(int data)
{
	if(!isFull())
	{
		top=top+1;
		stack[top]=data;
	}
	else
	{
		printf("stack is full\n");
	}
}

int pop()
{
	int data;
	if(!isEmpty())
	{
		data=stack[top];
		top=top-1;
		return data;
	}
	else
	{
		printf("stack is empty\n");
	}
}

int peek()
{
	return stack[top];
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
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	
	printf("element at the top of the stack %d",peek());
	printf("elements: \n");
	
	while(!isEmpty())
	{
		int data=pop();
		printf("%d",data);
	}
	
	printf("stack is full %s\n",isFull()?"true":"false");
	printf("stack is empty %s\n",isEmpty()?"true":"false");
}
