#include <stdio.h>

int main(){
	
	int vi;
	double vd;
	float vf;
	char vc;
	
	int *i;
	double *d;
	float *f;
	char *c;
	void *v;
	
	printf("Int : %d bytes\n", sizeof(vi));
	printf("Double : %d bytes\n", sizeof(vd));
	printf("Float : %d bytes\n", sizeof(vf));
	printf("Char : %d bytes\n", sizeof(vc));
	
	printf("Int pointer: %d bytes\n", sizeof(i));
	printf("Double pointer: %d bytes\n", sizeof(d));
	printf("Float pointer: %d bytes\n", sizeof(f));
	printf("Char pointer: %d bytes\n", sizeof(c));
	printf("Void pointer: %d bytes\n", sizeof(v));
	
	return 0;
}
