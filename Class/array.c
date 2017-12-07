#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};

    int *a_ptr = &a;

    printf("%p : %d , %p : %d \n", a ,*(a + 0), a_ptr, *a_ptr );

    return 0;
}
