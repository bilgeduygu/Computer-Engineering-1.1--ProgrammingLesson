#include <stdio.h>

int main()
{
	int num,sum=0;
	printf("please enter a number");
	scanf("%d",&num);
	printf("digits of number : %d",sum_of_digit_recursion(num));
}
int sum=0;
int sum_of_digit_recursion(int num)
{
	if(num!=0)
	{
		return	(num%10 + sum_of_digit_recursion(num/10));
	}
	else
	{
		return 0;
	}
}
