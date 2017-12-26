#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
    (void)argc;
    (void)argv;

    pid_t child = fork();

    //int l_a = 10, l_b = 10;

    if(child == 0)
    {
        printf("created child\n");
        exit(0);
    }
    else
    {
        sleep(120);
        printf("parent \n");
    }

    return 0;
}
