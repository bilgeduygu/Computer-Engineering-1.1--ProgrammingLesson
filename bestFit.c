#include<stdio.h>


int main()
{
	int blockSize[] = {100, 500, 200, 300, 600}; 
	int processSize[] = {212, 417, 112, 426,50,150};
	int arr[] = {-1.-1.-1.-1.-1.-1};

	int i,j;

	for (i = 0; i < 6; i++)
	{
		int best = -1;
		for (j = 0; j < 5; j++)
		{
			if (processSize[i] <= blockSize[j])
			{
				if(best == -1)
				{
					best = j;
				}
				else if(blockSize[best] > blockSize[j])
				{
					best = j;
				}
									
			}
		}
		if(best != -1)
		{
			arr[i] = best;
			blockSize[best] -=  processSize[i];
		}
		
	}	
	for (int i = 0; i < 6; ++i)
	{

		printf("%d \t %d\n",arr[i]+1,processSize[i]);
	}
	
}
