#include <stdio.h>

int main()
{
    int *p = NULL;

    printf("p : %p, &p = %p, sizeof(p)%zu, %zu\n", p,&p,sizeof(&p), sizeof(long long int));
}
