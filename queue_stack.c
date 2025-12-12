#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define CAPACITY 100

int queue[CAPACITY];
unsigned int size  = 0;
unsigned int rear  = CAPACITY - 1; 
unsigned int front = 0;

int enqueue(char data);
int dequeue();
int isFull();
int isEmpty();
int getRear();
int getFront();
void printq();

int main()
{
	char str[7]={"([dlr])"};
	int i,j;
	
	for(i=0;i<6;i++)
	{
		enqueue(str[i]);
	}
	char a=str[0];
	enqueue(a);
	dequeue();

	for(j=0;j<6;j++)
	{
		dequeue();	
	}
	printf("%s\n",str);
	//printq();
	
/*	for(i=0;i<6;i++)
	{
		push(str[i]);
	}*/


   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data 
   while(!isempty()) 
   {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   
   return 0;
}
	
int enqueue(char data)
	{
	    if (isFull()) 
	    {
	        return 0;
	    }
	
	    rear = (rear + 1) % CAPACITY;
	
	    size++;
	
	    queue[rear] = data;
	
	    return 1;
	}

int dequeue()
{
    char data ='w';

    if (isEmpty())
    {
        return 'w';
    }

    data = queue[front];

    front = (front + 1) % CAPACITY;
    size--;

    return data;
}
int isFull()
{
    return (size == CAPACITY);
}
int isEmpty()
{
    return (size == 0);
}
int getFront()
{
    return (isEmpty())
            ? 'w'
            : queue[front];
}
int getRear()
{
    return (isEmpty())
            ? 'w'
            : queue[rear];
}
void printq()
{	
	int i = front;
	
	for(i = front; i<=rear; i++) 
	{
		if(i == CAPACITY) i = 0;
		printf("%c ",queue[i]);
		
	}
	printf("\n");
}

int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() 
{
    int data;
	
    if(!isempty()) 
    {
      data = stack[top];
      top = top - 1;   
      return data;
    }
	else 
	{
      printf("Could not retrieve data, Stack is empty.\n");
    }
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

