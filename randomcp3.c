#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

int rastgele;
srand(time(NULL)); 
rastgele=rand()%25;

printf("%d",rastgele);
return 0;

}
