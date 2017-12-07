#include <stdio.h>

int print(int);

void main()
{
    int a = 10;
    int c = print(a);

    printf("%d\n", c);
}

int print(int a)
{
    int k = a + a;
    int l = a * a;
    return (l, k);
}
