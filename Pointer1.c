#include <stdio.h>
#include <conio.h>

int main(){
	int a=10;
	int *p;
	p=&a;
	printf("%d\n",*p); // value that p shows it
	printf("%d\n",p); //value of p , it means print address that p shows it.
	printf("%d\n",&p); // value of a 
	printf("%d\n",a); // value of a
	printf("%d\n",&a); //address of a
	getch();
	return 0;
}
