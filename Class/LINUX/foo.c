#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
    int i = 0;
    
    printf("PID = %d\n", getpid());
    while(1)
    {
        printf("I = %d\n", i++);
        sleep(1);
    }

    return 0;
}
