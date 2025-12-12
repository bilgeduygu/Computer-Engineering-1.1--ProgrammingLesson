#include <stdio.h>

int main()
{
	int i,j;
	int a[2]={1,2};
	int b[2]={3,4};
	swapTheArrays(a,b);
	printf("a[2]={%d,%d}  b[2]={%d,%d}",a[0],a[1],b[0],b[1]);	
}
int swapTheArrays(int*i,int*j)
{
	int change[2],k;
	
	for(k=0; k<2;k++)
	{
		change[k]=i[k];
    	i[k]=j[k];
    	j[k]=change[k];
	}

	
}

