#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int probability(int rating1,int rating2)
{
	int P1,P2;
	P1 = (1.0 / (1.0 + pow(10, ((rating1 – rating2) / 400))));
	P2 = (1.0 / (1.0 + pow(10, ((rating2 – rating1) / 400))));
	P1+P2=1;
}
int calculateRating()
{
	int rating1,K,actual_score,expected_score;
	rating1 = rating1 + K*(actual_score – expected_score);
}
int caculateK(numberOfPlayedGames)
{
	int kFactor;
	if(numberOfPlayedGames<30)
	{
		kFactor=40;
	}
}
int main()
{
	int rating1,rating2;
	rating1 = 1200, rating2 = 1000;
	probability(rating1,rating2);
	printf("probability=%d",probability);
}
