#include <stdio.h>

int main()
{
	int min;
	int max;
	int guess;
	int player;
	int random;
	int i;
	
	printf("Please choose a number from 1 to 500,I can guess your number\n");
	
	for(i=1;i<500;i++)
	{
		printf("is your guess %d\n",guess);
		printf("(1)yes,you guessed my number\n");
		printf("(2)no,guess a lower number\n");
		printf("(3)no,guess a higher number\n");
		scanf("%d",&player);
		
		random=rand()%500+1;
		printf("%d",random);
		
		if(player==3)
		{
			printf("is your guess %d",random);
		}	
		else if(player==2)
		{
			printf("is your guess %d",random);
		}
		else if(player==1)
		{
			printf("VICTORY");
			return 0;
		}
	
		if(player>3)
		{
			printf("wrong number");
			return 0;
		}
	}
}

