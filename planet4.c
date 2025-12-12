#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	planet4();
}
int planet4()
{
	srand(time(NULL));
	int i,counter=0,won=1,won_=1;
	while(won_>=1)
	{
		for(i=1;i<4;i++)
		{	
			int n=rand()%6+1;
			printf("computer rolled the dice %d\n",n);
			
			int m=rand()%6+1;	
			printf("user rolled the dice%d\n",m);
			if(m<n)
			{
				won=won+1;
				printf("********computer won %d. time*********\n",won);
				
			}
			else if(n<m)
			{
				won_=won_+1;
				printf("*******user won %d. time*******\n",won_);
			}
			else if(m==n)
			{
				printf("DRAW");
			}
			counter=counter+1;
			printf("\n(%d hour passed)\n",counter);
		}		
		if(won>won_)
		{
			printf("!!FAIL!!Computer won the game!!");
		}
		else if(won_>won)
		{
			won_=0;
			printf("!!CONGRATULATIONS!!User won the game!!");
		}
		else if(won==won_)
		{
			printf("\nThere is no winner\n");
		}
	}	
	
}
