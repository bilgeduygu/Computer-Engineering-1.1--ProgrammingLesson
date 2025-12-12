#include <stdio.h>

int main()
{
int i;
int min=1;
int max=500;
int C;
int R;
int L;

printf("Please choose a number from 1 to 500,I can guess your number\n",min,max);

for(i=1;i<500;i++)
{
	rand()%500+1;
	printf("ýs your number 250?\n if it is correct please enter C\n, if your number bigger than 250 please enter R\n, if your number lower than 250 please enter L\n");
	scanf("%d");
	
}
}
