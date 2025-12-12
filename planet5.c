#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int rock=1,paper=2,scissor=3,i,m,hour=0,won_=1,won=1;
	
	
	while(won_>=1)
	{
	for(i=1;i<4;i++)
		{
			int n=rand()%3+1;
	
			printf("\nComputer made its move\n",n);
			printf("Your turn\n");
			scanf("%d",&m);
			if(m==1)
			{
				if(n==1)
				{
					printf("draw\n");
				}
				else if(n==2)
				{
					won=won+1;
					printf("computer won this time\n",won);
				}
				else if(n==3)
				{
					won_=won_+1;
					printf("user won this time\n",won_);
				}
				hour=hour+1;
				printf("(%d hour is passed)",hour);
			}
			if(m==2)
			{
				if(n==1)
				{
					won_=won_+1;
					printf("user won this time\n",won_);				
				}
				else if(n==2)
				{
					printf("draw\n");			
				}
				else if(n==3)
				{
					won=won+1;
					printf("computer won this time\n",won);
				}
				hour=hour+1;
				printf("(%d hour is passed)",hour);
			}
			if(m==3)
			{
				if(n==1)
				{
					won_=won_+1;
					printf("user won this time\n",won_);	
				}
				else if(n==2)
				{
					won=won+1;
					printf("computer won this time\n",won);				
				}
				else if(n==3)	
				{
					printf("draw\n");	
				}
				hour=hour+1;
				printf("(%d hour is passed)",hour);			
			}
		}
		if(won>won_)
		{
			printf("\n!!FAIL!!COMPUTER WON THE GAME TRY AGAIN\n");
		}
		if(won_>won)
		{
			won_=0;
			printf("!!CONGRATULATIONS!!YOU WON THE GAME\n");
		}
		if(won_==won)
		{
			printf("THERE IS NO WINNER TRY AGAIN");
		}		
	}
	
}
