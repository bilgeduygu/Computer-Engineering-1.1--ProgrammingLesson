/**
 * Queue implementation using array.
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CAPACITY 100

/**
 * Global queue declaration.
 */
int queue[CAPACITY];
unsigned int size  = 0;
unsigned int rear  = CAPACITY - 1;   // Initally assumed that rear is at end
unsigned int front = 0;

/* Function declaration for various operations on queue */
int enqueue(int data);
int dequeue();
int isFull();
int isEmpty();
int getRear();
int getFront();

/* Driver function */
int main()
{
	int number,b;
	printf("Enter a number\n");
	scanf("%d",&number);
	int step;
	step = calc_step(number);
	func(number,step);
}
int calc_step(int number)
{
	int step;
	while(number>=1)
	{
		number=number/10;
        step++;
	}
	return step;
}
int func(int number,int step)
{
	int i,j,b;
	for(i=0;i<step-1;i++)
	{
		enqueue(number%10);
		number = number / 10;
	}
	enqueue(number);
	b = dequeue();
	for(j=0;j<step-1;j++)
	{
		b = b * 10;
		b = b + dequeue();
	}		

	printf("%d",b);
	printq();
}
/**
 * Enqueue/Insert an element to the queue. 
 */
int enqueue(int data)
{
	int i;

	// Queue is full throw Queue out of capacity error.
    if (isFull()) 
    {
        return 0;
    }

    // Ensure rear never crosses array bounds
    rear = (rear + 1) % CAPACITY;

    // Increment queue size
    size++;

    // Enqueue new element to queue
    queue[rear] = data;

    // Successfully enqueued element to queue
    return 1;

}
/**
 * Dequeue/Remove an element from the queue. 
 */
int dequeue()
{
    int data = INT_MIN;

    // Queue is empty, throw Queue underflow error
    if (isEmpty())
    {
        return INT_MIN;
    }

    // Dequeue element from queue
    data = queue[front];

    // Ensure front never crosses array bounds
    front = (front + 1) % CAPACITY;

    // Decrease queue size
    size--;

    return data;
}
/**
 * Checks if queue is full or not. It returns 1 if queue is full, 
 * overwise returns 0.
 */
int isFull()
{
    return (size == CAPACITY);
}
/**
 * Checks if queue is empty or not. It returns 1 if queue is empty, 
 * otherwise returns 0.
 */
int isEmpty()
{
    return (size == 0);
}
/**
 * Gets, front of the queue. If queue is empty return INT_MAX otherwise
 * returns front of queue.
 */
int getFront()
{
    return (isEmpty())
            ? INT_MIN
            : queue[front];
}
/**
* Gets, rear of the queue. If queue is empty return INT_MAX otherwise
 * returns rear of queue.
 */
int getRear()
{
    return (isEmpty())
            ? INT_MIN
            : queue[rear];
}

int printq(){
	
	int i = front;
	
	for(i = front; i<=rear; i++) {
		if(i == CAPACITY) i = 0;
		printf("%d",queue[i]);
		
	}
	
	printf("\n");
}


