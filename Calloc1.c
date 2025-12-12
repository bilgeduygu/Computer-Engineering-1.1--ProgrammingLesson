#include <stdio.h>
#include <stdlib.h>

main()
{
  int *ip1, id1;

  ip1 = (int *) calloc(5, sizeof(int));

  for (id1=0; id1<5; id1++) {
       *(ip1+id1) = (id1+1) * 10;   
       printf("%p -----> %d\n", (ip1+id1), *(ip1+id1));
  }
  
  free(ip1);
}


