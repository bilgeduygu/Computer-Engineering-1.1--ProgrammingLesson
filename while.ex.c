#include <stdio.h>

int main()
{
	int i=0;
	int j;
	int n;
	int m;
printf("Using While loops\n ");
	while(i<m)
	{
		j=0;
		while(j<n)
		{
			printf("%d_",j-i);
			j++;
		}
		printf("*\n");
		i++;
	}	
}

