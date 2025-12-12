#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;
	int a=10;
	p=&a;
	printf("%d",*p);
	*p=20;
	printf("\n %d",a);
}
