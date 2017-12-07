#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *a = malloc(4);

    *a = 0xABCDEF;

    printf("%X\n",*a);

    free(a);


    printf("%p : %X\n",a,*a);

    return 0;
}
