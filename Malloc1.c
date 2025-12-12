#include <stdio.h>
#include <stdlib.h>

main()
{
  int *ip1;

  ip1 = (int*) malloc(sizeof(int)); /* 1 */
  *ip1 = 126;

  printf("%p\n", ip1);
  printf("%d", *ip1);
  
  free(ip1);
}

