#include <stdio.h>
#include <time.h>


int print_matrix(char mine_table[9][9],int i,int j)
{
	int row,column;
    for (row=0;row<9;row++) 
    { 
        for (column=0;column<9;column++) 
        {  
		 	if(row==i && column==j)
		 	{
		 		printf("%d ",mine_table[row][column]);
			}	
		
			else if((row!=i || column!=j) && mine_table[row][column]!='*' && mine_table[row][column]!='-')
			{
				printf("%d ",mine_table[row][column]);
			}			
			else
			{
				printf("O ");
			}	
		}
        printf("\n"); 
	}		
}
int print_matrix2(char mine_table[9][9])
{
	int row,column;
    for (row=0;row<9;row++) 
    { 
        for (column=0;column<9;column++) 
        {  
		 	printf("O ");		
		}
        printf("\n"); 
	}		
}
int generate_matrix(char mine_table[9][9]) 
{ 
	int row,column;
	srand(time(NULL));

    for (row=0;row<9;row++) 
    { 
        for (column=0;column<9;column++) 
        {
 			int random=rand()%2;
		    if(random==0)
			{
		  		mine_table[row][column] = '*';
			}
			else if(random==1)
			{
				mine_table[row][column] = '-';
			}
		} 
	}	
}
int matrix(char mine_table[9][9])
{
	int i,j;
	char x;
	while(mine_table[i][j]!='*')
	{			
		int counter=0;
		printf("enter row and column\n");
		scanf("%d",&i);
		scanf("%d",&j);
		if(mine_table[i][j]=='*')
		{
			printf("***YOU STEPPED THE MINE***\n");
			return 0;
		}	
		else if(mine_table[i][j]=='-')
		{

			if(mine_table[i][j+1]=='*')
            {
                counter=counter+1;
            }
            if(mine_table[i][j-1]=='*')
        	{
                counter=counter+1;
        	}
            if(mine_table[i+1][j]=='*')
            {
                counter=counter+1;
        	}
        	if(mine_table[i-1][j]=='*')
        	{
                counter=counter+1;
            }             
			mine_table[i][j]=counter;
            
			print_matrix(mine_table,i,j);
		}
		printf("x=%d\n", counter);				
	}
}
int main()
{
	int row=9,column=9;	
	char mine_table[row][column];
	generate_matrix(mine_table);
	print_matrix2(mine_table);
	matrix(mine_table);
	print_matrix2(mine_table);

}
