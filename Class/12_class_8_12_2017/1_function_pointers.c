#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}


int main()
{
    int (*ptr)(int , int) = add;

    //int sum = (*ptr)(10, 20);
    int sum = ptr(10, 20);

    printf("%d\n", sum);

}


