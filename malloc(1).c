#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int *ptr,*p;
	int n;
	n=8;
	ptr=(int*)calloc(n, sizeof (int));
	int i;
	for(i=0;i<n;i++)
	{
		ptr[i]=i+1;
		printf("%d,",ptr[i]);
	}
	int k=12;
	ptr=realloc(ptr, n * sizeof(int));
	
	for(i=8;i<k;i++)
	{
		ptr[i]=i+1;
		printf("%d,",ptr[i]);
	}
}
