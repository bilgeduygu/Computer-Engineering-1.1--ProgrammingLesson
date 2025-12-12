#include <stdio.h>

int main()
{
	int num;
	printf("please enter a number");
	scanf("%d",&num);
	if(palindrome_recursion(num)==1)
	{
		printf("yes number is palindrome");
		return 0;
	}
	if(palindrome_recursion(num)==0)
	{
		printf("no number is not palindrome");
	}
}
int palindrome_recursion(int num)
{
	if(num==reverse_function(num))
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int rem,sum=0;
reverse_function(int num)
{	
   if(num)
   {
   	
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
      return sum;
   }
   else
   {
   		return sum;
   }
}
