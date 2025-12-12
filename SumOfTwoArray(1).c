#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array_1[30] = {0};
    int array_2[30] = {0};

    int *c;
    int i=0 , j=0 , k=0;
    int x=0 , y=0 , z=0;

    printf("\nEnter the number of elements for both arrays..");
    printf("\nFor array_1 : ");
    scanf("%d",&x);
    printf("\nFor array_2 : ");
    scanf("%d",&y);
 
    printf("\nEnter the elements for array_1..\n");
    for(i=0 ; i<x ; i++)
    {
        printf("array_1[%d] : ",i);
        scanf("%d",&array_1[i]);
    }
    
    printf("\nEnter the elements for array_2..\n");
    for(i=0 ; i<x ; i++)
    {
        printf("array_2[%d] : ",i);
        scanf("%d",&array_2[i]);
    }
    
    // Calculate the total elements for pointer "c"
    z = x +y;
    
    printf("\nTotal elements are : %d\n",z);
    
    // now allocate dynamic memory to pointer "c"
    // but according to the "z"
    c = (int*)malloc(z * sizeof(int));
    
    for(i=0,j=0,k=0 ; i<z,j<x,k<y ; i++)
    {
        c[i] = array_1[j++];
        if(i>=x)
        {
            c[i] = array_2[k++];
        }
    }
    
    printf("\nThe final array after merging the two arrays is..");
    for(i=0;i<z;i++)
    {
        printf("\nC[%d] : %d",i,c[i]);
    }
    
    return 0;
}
