#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	srand(time(NULL));
	int i=0, counter=0, n=rand()%20+1,m=rand()%2;
	printf("I choose a number from 1 to 10, try to find my number\n");
	printf("%d\n",n);
	printf("%d\n",m);
	while(n!=i)
	{
		scanf("%d",&i);
		if(n<i)
		{
			if(m==1)
			{
				printf("decrease your guess");
			}
			if(m==0)
			{
				printf("increase your guess");
				m=rand()%2;
			}
		}
		if(n>i)
		{
			if(m==1)
			{
				printf("increase your guess");
			}
			if(m==0)
			{
				printf("decrease your guess");
				m=rand()%2;
			}
		}
		if(n==i)
		{
			printf("!!Congratulations You Found The Number!!");
			return 0;
		}
	}
}
