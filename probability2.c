#include <stdio.h>
#include <math.h>

float probability(float rating1,float rating2)
{
	float P1,P2;
	P1 = (1.0 / (1.0 + pow(10, ((rating1 - rating2) / 400))));
	P2 = (1.0 / (1.0 + pow(10, ((rating2 - rating1) / 400))));
	
	printf("P1=%f\n",P1);
	printf("P2=%f\n",P2);
	
	if(P1<P2)
	{
		return P2;
	}
	if(P2<P1)
	{
		return P1;
	}
}
float rating(float rating1,float rating2,int K1,int K2,float P)
{

	if(rating1>rating2)
	{
		rating1 = rating1 + K1*(1-P); 
		rating2 = rating2 + K2*(0-(1-P)); 		
	}
	if(rating1<rating2)
	{
		rating1 = rating1 + K2*(1-P); 
		rating2 = rating2 + K1*(0-(1-P)); 	
	}
     
    printf("1:%f\n",rating1);
    printf("2:%f",rating2);

}
float calculateK(int age,int number0fPlayedGames,int rating1)
{
	int K;
	
	if(number0fPlayedGames<30)
	{
		K=40;
	}
	else if(number0fPlayedGames>30 && rating1<2400)
	{
		K=20;
	}
	else if(number0fPlayedGames>30 && rating1>2400)
	{
		K=10;
	}
	else if(rating1<2300 && age<18)
	{
		K=40;
	}
	return K;
}
int main()
{
	float rating1,rating2,prob,age1,age2,player1,plyer2;
	printf("enter rating1\n",rating1);
	scanf("%f",&rating1);
	
	printf("enter rating2\n",rating2);
	scanf("%f",&rating2);
	
	prob = probability(rating1,rating2);
	printf("probability=%f\n",prob);
	
	int age, numberOfPlayedGames1,numberOfPlayedGames2;
	printf("enter player1 age\n");
	scanf("%d",&age1);
	
	printf("enter player2 age\n");
	scanf("%d",&age2);
	
	printf("enter the number 0f played games of player 1\n");
	scanf("%d",&numberOfPlayedGames1);
	
	printf("enter the number of played games of player 2\n");
	scanf("%d",&numberOfPlayedGames2);
	
	float ck1,ck2;
	ck1 = calculateK(age1, numberOfPlayedGames1, rating1);
	ck2 = calculateK(age2, numberOfPlayedGames2, rating2);
	
	float rate;
	rate=rating(rating1,rating2,ck1,ck2,prob);
	
	return 0;
	
}

