#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ip, id;

    ip = (int *) malloc(5 * sizeof(int));

    for (id=0; id<5; id++) {
         *(ip+id) = id+1;
         printf("%p -----> %d\n", (ip+id), *(ip+id));
    }

    ip = (int *) realloc(ip, 10 * sizeof(int));

    printf("Extended Values:\n");

    for (  ; id<10; id++) { /* id parameter in here starts as 5. */
         *(ip+id) = id+1;
         printf("%p -----> %d\n", (ip+id), *(ip+id));
    }

    free(ip);
}


