#include <stdio.h>


int main()
{
    int i, max, min;
	int a[3]={10,20,30};
    
    min=a[i];
    max=a[i];
    for(i=1;i<3;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

        if(a[i]<max)
        {
            min=a[i];
            
        }
    }
    printf("Maximum element in array = %d\n Min element in array=%d",max,min);
    return 0;
}
