#include <stdio.h>

int main(){
	int x,*p;
	
	x=77;
	p=&x;
	
	printf("\nValue of X : %d",x);
	printf("\nAddress of X : %d",&x);
	//%p
	printf("\n");
	
	printf("\nValue of *p : %d",*p);
	printf("\n *p=x : %ld = %ld",*p,x);
	printf("\n");
	
	printf("\nValue of p Pointer : %d",p);
	printf("\n p=&x (hex) : %x=%x",p,&x);
	printf("\n p=&x (long) : %ld=%ld",p,&x);
}
