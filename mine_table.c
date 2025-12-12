#include <stdio.h>
#include <time.h>


int print_matrix(char mine_table[9][9])
{
	int row,column,i,j;
    for (row=0;row<9;row++) 
    { 
        for (column=0;column<9;column++) 
        {   	
 			printf("%c ",mine_table[row][column]);
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
		printf("enter row and column\n");
		scanf("%d",&i);
		scanf("%d",&j);
		if(mine_table[i][j]=='*')
		{
			printf("***YOU STEPPED OF THE MINE***\n");
			return 0;
		}
		
		else if(mine_table[i][j]=='-')
		{
			mine_table[i][j]='x';
			print_matrix(mine_table);
		}
	}
			
}
int main()
{
	int row=9,column=9;	
	char mine_table[row][column];
	generate_matrix(mine_table);
	print_matrix(mine_table);
	matrix(mine_table);
	print_matrix(mine_table);

}
