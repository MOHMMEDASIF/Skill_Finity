#include <stdio.h>
#include <stdlib.h>

int sum(int (*)[5]);

int main()
{
    int a[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

     printf("sum : %d\n",sum(a));

   return 0;
}

int sum(int (*a)[5])
{
    int l_sum = 0;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 5; j++ )
        {
            l_sum += a[i][j];
        }
    }

    return l_sum;
}
