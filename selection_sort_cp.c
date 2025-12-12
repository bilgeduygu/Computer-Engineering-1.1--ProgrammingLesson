#include <stdio.h> 
#include <time.h>

int selectionSort(int deck[], int size) 
{ 
    int i, j, min,k; 
    int temp;
  
    for (i = 0; i < size; i++) 
    { 
        min = i; 
        for (j = i+1; j < size; j++) 
        {
        	if (deck[j] < deck[min])
			{
				min = j; 
			} 
		}
        int x;
        printf("Do you want to swap (yes=1 || no=0)");
    	scanf("%d",&x);
    	if(x==1)
    	{
    		temp=deck[min];
	        deck[min]=deck[i];
	        deck[i]=temp;
    	    for(k=0;k<size;k++)
			{
				printf("%d,",deck[k]);
			}
			printf("\n");
		}
		else if(x==0)
		{
			return 0;
		}
    } 
} 
  
int main() 
{ 
	int size=8;
	int a[4][13];
	int r=4,c=13,i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j] = j+1;
		}
	}

	int deck[8];
	srand(time(NULL));
	printf("Random Deck : ");
	for(i=0;i<8;i++)
	{
		r = rand()%4;
		c = rand()%13;
		deck[i]=a[r][c];
		
		printf("%d,",deck[i]);
	}
	printf("\n");
	
	selectionSort(deck, size); 
	

} 
