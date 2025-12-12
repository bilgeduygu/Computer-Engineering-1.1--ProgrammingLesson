#include <stdio.h>

int main()
{
	int n=srand()%23,i,x;
	printf("I choose %d,try to reach my number",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",x);
		if(x==2 || x==3 || x==5)
		{
			n=n+x;
		}
		else if(x!=2 || x!=3 || x!=5)
		{
			printf("wrong number entered");
		}
	}
}
