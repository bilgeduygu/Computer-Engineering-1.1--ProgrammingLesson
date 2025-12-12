#include <stdio.h>

int main()
{
	int i,k,l;
	printf("Please enter the number of student:");
	scanf("%d",&k);	
	int arr[k][2];
	for(i=0;i<k;i++)
	{
	    printf("Please enter student's number and grade\n");
	    
		for(l=0;l<2;l++)
		{
			scanf("%d",&arr[i][l]);
		}
	}
	sortTheArray(arr,k);
}
int sortTheArray(int arr[][2],int k)
{
	int i,m,temp,l;
	for(i=1;i<k;i++)
	{
		for(m=0;m<k-i;m++)
		{
			if(arr[m][0]>arr[m+1][0])
			{   
				temp=arr[m][0];
				arr[m][0]=arr[m+1][0];
				arr[m+1][0]=temp;
				
				temp=arr[m][1];
				arr[m][1]=arr[m+1][1];
				arr[m+1][1]=temp;			
			}
		}
	}
	for(i=0;i<k;i++)
	{
		for(l=0;l<2;l++)
		{
			printf("%d,%d \n",i,l);
			printf("%d\n",arr[i][l]);
		}
	}
}

