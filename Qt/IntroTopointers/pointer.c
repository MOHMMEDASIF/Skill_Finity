#include <stdio.h>

int main()
{
    int l_a = 10;

    //create a pointer
    int *l_ptr = &l_a;

    printf("%p: %d", l_ptr, *l_ptr);


    return 0;
}
