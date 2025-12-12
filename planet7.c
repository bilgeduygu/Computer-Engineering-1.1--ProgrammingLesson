#include <stdio.h> 
#include <time.h> 
#include <stdlib.h>
#include <math.h>

int main() 
{ 
	int x,sum,i,y=1;
	srand(time(NULL));
	int n=rand()%21+10;
	int m=rand()%21+10;

    clock_t t; 
    t = clock();
	
    while(1) 
    { 
        if(getchar()) 
        break; 	
    }    
    
    t = clock() - t; 
    double time= ((double)t)/CLOCKS_PER_SEC;
    while(y==1)
    {
    	printf("%d*%d\n",n,m);
	    scanf("%d",&x);		
		int sum=n*m;        
	    if(x==sum)
	    {
	    	y=0;
		}
		n=rand()%21+10;	
		m=rand()%21+10;	
		if(x!=sum)
		{
			printf("fail try again\n");
		}
	}   
    printf("You found the answer %f seconds\n", time); 
}



