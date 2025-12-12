#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() 
{
	srand(time(NULL));
  	int c,n,i;
  	int arr[100];
	printf("%s%13s\n","Element","Value"); 
  	for (c = 1; c <= 100; c++)
	{
    	n = rand() % 100 + 1;
    	printf("%7u%15d\n", n);
  	}
  return 0;
}
