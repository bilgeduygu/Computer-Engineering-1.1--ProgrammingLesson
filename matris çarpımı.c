
#include <stdio.h>

int main()
{   

    int i,j,k,a,b,c;
    int comp=0;
	
	printf("please enter the first row\n");
	scanf("%d",&i);
	
	printf("please enter the first column\n");
	scanf("%d",&j);
	
	printf("please enter the second column\n");
	scanf("%d",&k);
	
	int m[i][j], n[j][k], p[a][b];
	
	
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			printf("please enter m(%d,%d)\n",a,b);
			scanf("%d",&m[a][b]);
		}
	}	
	for(a=0;a<j;a++)
	{
		for(b=0;b<k;b++)
		{
			printf("please enter n(%d,%d)\n",a,b);
			scanf("%d",&n[a][b]);
		}
	}
	for(a=0;a<i;a++)
	{
		for(b=0;b<k;b++)
		{
			for(c=0; c<j; c++)
			{
		    	comp = comp + m[a][c] * n[c][b];
			}
			    p[a][b] = comp;
			    comp=0;
				printf("%d ", p[a][b]);
		}
		printf("\n");
	}	
	return 0;
}
