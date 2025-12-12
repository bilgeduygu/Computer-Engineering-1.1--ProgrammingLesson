#include <stdio.h>
#include <stdlib.h>

typedef struct LINKED_TREE_NODE_s *LINKED_TREE_NODE;
typedef struct LINKED_TREE_NODE_s{
	LINKED_TREE_NODE left;
	LINKED_TREE_NODE right;
	int key;
}LINKED_TREE_NODE_t[1];

typedef struct LINKED_TREE_s *LINKED_TREE;
typedef struct LINKED_TREE_s{
	LINKED_TREE_NODE root;
}LINKED_TREE_t[1];

typedef struct LINKED_STACK_NODE_s *LINKED_STACK_NODE;
typedef struct LINKED_STACK_NODE_s{
	LINKED_STACK_NODE next;
	LINKED_TREE_NODE data;
}LINKED_STACK_NODE_t[1];

typedef struct LINKED_STACK_s{
	LINKED_STACK_NODE head;
}LINKED_STACK_t[1],*LINKED_STACK;


LINKED_TREE linked_tree_init()
{
	LINKED_TREE new;
	new = (LINKED_TREE)malloc(sizeof(LINKED_TREE_t));

	if(new != NULL){
		new->root = NULL;
	}else{
		printf("error at memory allocation\n");
	}
	return new;
}


LINKED_STACK linked_stack_init()
{
    LINKED_STACK new;
    new=(LINKED_STACK)malloc(sizeof(LINKED_STACK_t));
    if(new!=NULL)
    {
    	new->head=NULL;
   	}
    else
    {
    	printf("error");
    }
    return new;
}

LINKED_TREE_NODE linked_tree_node_init(int key)
{
	LINKED_TREE_NODE new;
	new = (LINKED_TREE_NODE)malloc(sizeof(LINKED_TREE_NODE_t));

	new->key = key;
	new->left = NULL;
	new->right = NULL;

	return new;
}

void linked_tree_insert(LINKED_TREE_NODE node,int key)
{
	while(1)
	{
		if(key < node->key)
		{
			if(node->left == NULL)
			{
				node->left = linked_tree_node_init(key);
				break;
			}
			else
			{
				node = node->left;
			}
		}

		else if(key > node->key)
		{
			if(node->right == NULL)
			{
				node->right = linked_tree_node_init(key);
				break;
			}
			else
			{
				node = node->right;
			}
		}
		else
		{
			break;
		}
	}
}

void insert(LINKED_TREE tree,int key)
{
	if(tree == NULL)
	{
		printf("invalid data\n");
	}
	else if(tree->root == NULL)
	{
		tree->root = linked_tree_node_init(key);
	}
	else
	{
		linked_tree_insert(tree->root,key);
	}
}
void linked_stack_push(LINKED_STACK stack, void *data)
{
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
LINKED_TREE_NODE linked_stack_pop(LINKED_STACK stack)
{
	LINKED_STACK_NODE iter=stack->head;
	LINKED_TREE_NODE temp;
	if(stack==NULL)
	{
		printf("stack is empty");
	}
	else if(iter->next==NULL)
	{
		temp=iter->data;
		stack->head=NULL;
	}
	else
	{
		while(iter->next->next!=NULL)
		{
			iter=iter->next;
		}
		temp=iter->next->data;
		iter->next=NULL;
	}
	return temp;
}

void delete_node(LINKED_TREE tree, int key)
{
	int choice;
	LINKED_TREE_NODE node;
	LINKED_TREE_NODE min;
	LINKED_TREE_NODE parent;
	node=tree->root;

	while(node != NULL)
		{
			if(key < node->key)
			{
				parent = node;
				node = node->left;
				choice = 0;
			}
			else if(key > node->key)
			{
				parent = node;
				node = node->right;
				choice = 1;
			}
			else{
				break;
			}
		}
	if(node==NULL){
	        printf("Key not found.\n");
	}
	else{
		if((node->left==NULL)&&(node->right==NULL)){
			if(parent==tree->root)
			{
				tree->root=NULL;
			}
			else if(choice == 1){
				parent->right = NULL;
			}
			else if(choice==0){
				parent->left = NULL;
			}

	}
	else if((node->left != NULL) && (node->right == NULL))
	{
		if(choice == 0){
			parent->left = node->left;
		}
		else{
			parent->right = node->left;
		}
	}
	else if((node->left==NULL)&&(node->right!=NULL)){
		if(choice==1){
			parent->right=node->right;
		}
		else{
			parent->left=node->right;
		}
	}
	else{
		min=node->right;
		while(min->left!=NULL)
		{
			min=min->left;
		}

		min->left=node->left;
		if(choice==0)
		{
			parent->left=node->right;
		}
		else if(choice==1)
		{
			parent->right=node->right;
		}

	}
}
}

void delete(LINKED_TREE tree,int key)
{
	if(tree == NULL){
		printf("error\n");
	}
	else if(tree->root == NULL){
		return;
	}
	else{
		delete_node(tree,key);
	}
}

void print_tree(LINKED_TREE_NODE node,int l)
{
	int i;
	if(node != NULL){
		print_tree(node->right,l+1);
		for(i=0;i<l;i++){
			printf("   ");
		}
		printf("%d",node->key);
		printf("\n");
		print_tree(node->left,l+1);
	}
}

int isEmpty(LINKED_STACK stack)
{
	if(stack->head!=NULL)
	{
		return 1;
	}
	return 0;
}

void traverse_inorder_with_stack(LINKED_TREE_NODE node,LINKED_TREE_NODE *A,LINKED_STACK stack,int i)
{

	if(isEmpty(stack)==1 || node!=NULL)
	{
		if(node!=NULL)
		{
			linked_stack_push(stack,node);
			traverse_inorder_with_stack(node->left,A,stack,i);
		}
		else
		{
			node=linked_stack_pop(stack);
			A[i]=node;
			i++;
			traverse_inorder_with_stack(node->right,A,stack,i);
		}
	}
}

void balance(LINKED_TREE tree,LINKED_TREE_NODE *A,int l)
{
	int t=l;
	while(l!=0)
	{
		l=l/2;
		if(A[l]!=NULL)
		{
			insert(tree,A[l]->key);
		}
		balance(tree,&A[l+1],t-l-1);
	}
}

int main()
{
	LINKED_TREE tree;
	tree = linked_tree_init();

	LINKED_TREE_NODE *A = (LINKED_TREE_NODE*)malloc(11*sizeof(LINKED_TREE_NODE_t));

	LINKED_STACK stack =  linked_stack_init();

	insert(tree,115);
	insert(tree,102);
	insert(tree,98);
	insert(tree,65);
	insert(tree,34);
	insert(tree,22);
	insert(tree,18);
	insert(tree,5);
	insert(tree,130);
	insert(tree,67);
	insert(tree,118);

	int i=0;
	traverse_inorder_with_stack(tree->root,A,stack,i);
	printf("INORDER :   ");
	for(i=0;i<11;i++)
	{
		printf("%d, ",A[i]->key);
	}

	printf("\n\n\n");
	printf("UNBALANCED TREE");
	printf("\n\n");
	print_tree(tree->root,0);

	delete(tree,5);
	delete(tree,18);
	delete(tree,22);
	delete(tree,34);
	delete(tree,67);
	delete(tree,65);
	delete(tree,98);
	delete(tree,102);
	delete(tree,118);
	delete(tree,130);
	delete(tree,115);

	balance(tree,A,11);
	printf("BALANCED TREE ");
	printf("\n\n");
	print_tree(tree->root,0);
	return 0;
}

