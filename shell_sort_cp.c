#include <stdio.h> 

void print_deck(int deck[], int size) 
{ 
	int i;

    for (i=0;i<size;i++) 
    {
    	printf("%d,",deck[i]); 
	}
	printf("\n");
}

int shellSort(int deck[], int size) 
{ 
	int x,i,j,k,d,temp;
    for (x=size/2 ;x>0 ;x/=2) 
    { 
        for (i=x;i<size;i+=1) 
        { 
            temp=deck[i];
            for (j=i;j>=x && deck[j-x]>temp;j-=x) 
            {
            	printf("Do you want to swap (yes=1 || no=0)");
        		scanf("%d",&d);
        		if(d==1)
	        	{
	        		deck[j]=deck[j-x];
				}
				else if(d==0)
				{
					return 0;
				}
			print_deck(deck,size);	
			}
			deck[j]=temp;
    				
        }
    } 
    return 0; 
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
	
    shellSort(deck, size); 
  
  
    return 0; 
} 
