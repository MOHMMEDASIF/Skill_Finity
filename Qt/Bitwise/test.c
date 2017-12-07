#include <stdio.h>
#include <stdint.h>

int main()
{

    int c = 9;
    int a = 23;
    char b;
    char d;

    //scanf("%o", &a);
    printf("address of a: %2d\n", a);
    printf("address of b: %p\n", b);
    printf("address of c: %2d\n", c);
    printf("address of d: %p\n", d);
    return 0;
}
