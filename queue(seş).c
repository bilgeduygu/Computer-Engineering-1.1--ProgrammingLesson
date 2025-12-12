#include <stdio.h>
#include <stdlib.h>

int *arr=NULL;
int queue=0;
int head=0;
int size=2;
int deque()
{
	if(queue==head)
	{
		printf("queue is empty");
		return -1;
	}
	if(queue-head<=size/4)
	{
		int i;
		int*arr2=(int*)malloc(sizeof(int)*size/2);
		for(i=0;i<queue-head;i++)
		{
			arr2[i]=arr[head+i];
		}
		queue-=head;
		head=0;
		free(arr);
		size/=2;
		arr=arr2;
	}
	return arr[head++];
}
void collect()
{ 
	int i;
	if(head==0)
	{
		return;
		for(i=0;i<size;i++)
		{
			arr[i]=arr[i+head];
		}
		queue -= head;
		head=0;
	}
}
void enque(int a)
{
	int i;
	if(arr==NULL)
	{
		arr=(int*)malloc(sizeof(int)*size);
	}
	if(queue>=size)
	{
		size *=2;
		int *arr2=(int*)malloc(sizeof(int)*size);
		for(i=0;i<size/2;i++)
		{
			arr2[i]=arr[i];
		}
		free(arr);
		arr=arr2;
	}
	arr[queue++]=a;
}
int main()
{
	int i;
	for(i=0;i<20;i++)
	{
		enque(i*10);
	}
	for(i=0;i<25;i++)
	{
		printf("%d ",deque());
	}
}

