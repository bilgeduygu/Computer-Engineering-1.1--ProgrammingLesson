#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int a[50];
	int b[50];
	int i;
	for(i=1;i<=50;i++)
	{
		a[i]=rand()%50+1;
	}
	printf("%10s%13s\n","Element(a[50])","Value(a[50])");
		
	for(i=1;i<=50;i++)
	{
		printf("%7u%15d\n",i,a[i]);       
	}
	for(i=1;i<=50;i++)
	{
		b[i]=rand()%50+1;
	}
	printf("%10s%13s\n","Element(b[50])","Value(b[50])");	
	for(i=1;i<=50;i++)
	{
		printf("%7u%15d\n",i,b[i]);       	
	}
	int c[100];
	for(i=1;i<=100;i++)
	{
		c[i]=a[i]+b[i];	
	}
	printf("%10s%13s\n","Element(c[100])","Value(c[100])");
		
	for(i=1;i<=100;i++)
	{
		printf("%7u%15d\n",i,c[i]);       
	}
	
}
