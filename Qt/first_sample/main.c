#include <stdio.h>

void Test(int a)
{
    printf("value is %d\n", a);
}

int main()
{
    int a = 10;
    Test(a);
    printf("%d\n", a);
    printf("Testing\n");
    return 0;
}
