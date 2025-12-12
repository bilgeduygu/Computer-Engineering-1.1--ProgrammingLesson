#include <stdio.h>
#include <stdlib.h>

#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3

typedef struct MAZE_NODE_s *MAZE_NODE;
typedef struct MAZE_NODE_s{
	MAZE_NODE dir[4]; //directions: NORTH, EAST, SOUTH, WEST
	int visited;
	int data;
}MAZE_NODE_t[1];

typedef struct LINKED_STACK_NODE_s *LINKED_STACK_NODE;
typedef struct LINKED_STACK_NODE_s{
	LINKED_STACK_NODE next;
	void *data;
}LINKED_STACK_NODE_t[1];

typedef struct LINKED_STACK_s{
	LINKED_STACK_NODE head;
}LINKED_STACK_t[1],*LINKED_STACK;


LINKED_STACK linked_stack_init();
//void linked_stack_free(LINKED_STACK stack);
void *linked_stack_pop(LINKED_STACK stack);
void linked_stack_push(LINKED_STACK stack, void *data);
void maze_solve_and_print(MAZE_NODE node);

void linked_stack_push(LINKED_STACK stack, void *data){
	LINKED_STACK_NODE new;
	new=(LINKED_STACK_NODE)malloc(sizeof(LINKED_STACK_NODE_t));

	if(stack->head==NULL)
	{
		new->data=data;
		new->next=NULL;
		stack->head=new;
	}
	else
	{
		LINKED_STACK_NODE iter=stack->head;
		while(iter->next!=NULL)
		{
			iter=iter->next;
		}
		new->data=data;
		new->next=NULL;
		iter->next=new;
	}
}
void *linked_stack_pop(LINKED_STACK stack){
	LINKED_STACK_NODE iter=stack->head;
	LINKED_STACK_NODE temp;
	if(stack==NULL)
	{
		printf("stack is empty");
	}
	else if(iter->next==NULL)
	{
		temp=iter;
		stack->head=NULL;
	}
	else
	{
		while(iter->next->next!=NULL)
		{
			iter=iter->next;
		}
		temp=iter->next;
		iter->next=NULL;
	}
	return temp;
}

LINKED_STACK linked_stack_init()
{
	LINKED_STACK new;
	new = (LINKED_STACK)malloc(sizeof(LINKED_STACK_t));

	if(new != NULL)
	{
		new->head = NULL;
	}
	else
	{
		printf("error at memory allocation\n");
	}
	return new;
}
void maze_solve_and_print(MAZE_NODE node){
	printf("?????");
	LINKED_STACK s= linked_stack_init();
	int i;
	while(node->dir[SOUTH]!=node)
	{
		for(i=0;i<4;i++)
		{
			if(node->dir[i] != NULL && node->dir[i]->visited==1)
			{
				node=node->dir[i];
				linked_stack_push(s,node);
				node->visited=1;
			}
		}
		linked_stack_pop(s);
		printf("***********");
	}
	//linked_stack_free(s);
}

int main()
{
	int i, j, size;
	size  = 25;
	MAZE_NODE_t node[size];


	//Clear all directions.
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 4; j++)
		{
			node[i]->dir[j] = NULL;
			node[i]->visited = 0;
			node[i]->data = i;
		}
	}

	//Entrance/Exit links.
	node[0]->dir[NORTH] = node[0];
	node[24]->dir[SOUTH] = node[24];

	//Assign links.
	node[0]->dir[SOUTH]  = node[1];    node[1]->dir[NORTH]   = node[0];
	node[1]->dir[WEST]   = node[2];    node[2]->dir[EAST]    = node[1];
	node[2]->dir[WEST]   = node[3];    node[3]->dir[EAST]    = node[2];
	node[3]->dir[WEST]   = node[4];    node[4]->dir[EAST]    = node[3];
	node[4]->dir[SOUTH]  = node[5];    node[5]->dir[NORTH]   = node[4];
	node[5]->dir[SOUTH]  = node[6];    node[6]->dir[NORTH]   = node[5];

	node[1]->dir[SOUTH]  = node[7];    node[7]->dir[NORTH]   = node[1];
	node[7]->dir[SOUTH]  = node[8];    node[8]->dir[NORTH]   = node[7];
	node[8]->dir[EAST]   = node[9];    node[9]->dir[WEST]    = node[8];

	node[9]->dir[EAST]   = node[10];   node[10]->dir[WEST]   = node[9];
	node[10]->dir[NORTH] = node[11];   node[11]->dir[SOUTH]  = node[10];


	node[9]->dir[SOUTH]  = node[12];   node[12]->dir[NORTH]  = node[9];
	node[12]->dir[SOUTH] = node[13];   node[13]->dir[NORTH]  = node[12];
	node[13]->dir[SOUTH] = node[14];   node[14]->dir[NORTH]  = node[13];

	node[14]->dir[EAST]  = node[15];   node[15]->dir[WEST]   = node[14];
	node[15]->dir[EAST]  = node[16];   node[16]->dir[WEST]   = node[15];
	node[16]->dir[SOUTH] = node[17];   node[17]->dir[NORTH]  = node[16];
	node[17]->dir[SOUTH] = node[918];   node[18]->dir[NORTH]  = node[17];

	node[14]->dir[WEST]  = node[19];   node[19]->dir[EAST]   = node[14];
	node[19]->dir[WEST]  = node[20];   node[20]->dir[EAST]   = node[19];
	node[20]->dir[SOUTH] = node[21];   node[21]->dir[NORTH]  = node[20];
	node[21]->dir[SOUTH] = node[22];   node[22]->dir[NORTH]  = node[21];
	node[22]->dir[EAST]  = node[23];   node[23]->dir[WEST]   = node[22];
	node[23]->dir[SOUTH] = node[24];   node[24]->dir[NORTH]  = node[23];

	maze_solve_and_print(node);

	return 0;

}

