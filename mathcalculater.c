#include <stdio.h>
#include <conio.h>
 
//Çarpma iþlemi kullanmadan Çarpma yapma (Fonksiyonsuz)
//Cemalettin Serit ckaynak.com | teknooneri.com | cemserit.com
 
int main()
{   
    int i, sum=0,x, gecici1, gecici2;
 
	srand(time(NULL));
	int n=rand()%21+10;
	int m=rand()%21+10;
 
    gecici1 = n;     
    gecici2 = m;
 
    if(gecici1 < 0) 
    {
        gecici1 = 0 - gecici1;    	
	}
    if(gecici2 < 0)
    {
        gecici2 = 0 - gecici2;  	
	}
    for(i=0;i<gecici2;i++) 
    {
        sum += gecici1;	
	}
    if(n < 0 && m < 0) 
    {
        sum = sum;	
	}
    else if(n < 0 || m < 0 )
    {
        sum = 0 - sum;
	}
            
    printf("%d*%d\n", n, m);
    scanf("%d",x);
    
    if(x==sum)
    {
    	printf("correct");
	}
	if(x!=sum)
	{
		printf("fail");
	}
 
    getch();   // Programýn kapanmamasý için (Klavyeden bir deðer bekler)
    return 0; // Programý sonlandýrýr
}
