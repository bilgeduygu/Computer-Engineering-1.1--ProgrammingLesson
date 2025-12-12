#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int i,arr[100];
	for(i=0;i<=100;i++)
	{
		arr[i]=rand()%100+1;	
	}
	printf("%10s%13s\n","Element","Value");
	
	for(i=0;i<=100;i++)
	{
		printf("%7u%15d\n",i,arr[i]);       
	}	
	int j,size,count=0;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[j]!=arr[i])
			{
				count++;
				break;
			}
		}
	}
	printf("total number of the uniqe number in array=%d",count);
	return 0;
}
