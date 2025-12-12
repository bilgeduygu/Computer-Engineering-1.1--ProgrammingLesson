#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int correct=0;
	srand(time(NULL));
	int m=rand()%255;
	while(correct<3)
	{
		int a=1,y,i,t;
		int binary=0;
    	int part=0,l=1;
    	while(m!=0)
    	{
        	part=m%2;
    	    m/=2;
    	    binary+=part*l;
    	    l*=10;
    	}
    	do
		{
    	    m=m/10;
    	    a++;
    	}
    	while(m>=10);
		int x=rand()%a+1;
    
   		for(i=0;i<x;i++)
		{
			y=m%10;
	    	m=m/10;
		}
		printf("\nwhat is the digit %d\n",x);
		scanf("%d",&t);
		if(t==y)
		{
			printf("correct",correct);
			correct=correct+1;
		}
		else if(t!=y)
		{
			printf("try again");
		}
	}
}


