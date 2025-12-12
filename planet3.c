#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main()
{
	planet3();
}

int planet3()
{
	srand(time(NULL));
	int value,sum=0,n=rand()%23,hour=0;
 
	printf("%d\n",n);
	
 	while(sum!=n)
 	{ 
 		sum=0;
 		while(sum<n)
		{ 
			scanf("%d",&value);
			if(value==2)
			{
    			sum=sum+value;	
			}
			if(value==3)
			{
	  			sum=sum+value;	
			}
			if(value==5)
			{
				sum=sum+value;
			}
    		if(sum==n)
			{
				printf("!!Congratulations You Reach The Number!!");
				return 0;	
			}

		}
		n=rand()%23;
		printf("you entered large number, try again %d\n",n);
		hour=hour+1;
		printf("(%d hour passed)\n",hour);
	} 	
}
