#include <stdio.h>
#include <semaphore.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char * argv[])
{
    sem_t *l_sem1 = sem_open("posixsem1", O_CREAT, 0600, 0);
    if(SEM_FAILED == l_sem1)
    {
        perror("ERROR");
        return -1;
    }
    else
    {
        printf("POSIX sem1 created [%p]\n", l_sem1);

    }

    sem_t *l_sem2 = sem_open("posixsem2", O_CREAT, 0600, 0);
    if(SEM_FAILED == l_sem2)
    {
        perror("ERROR");
        return -1;
    }
    else
    {
        printf("POSIX sem1 created [%p]\n", l_sem2);
    }


    return 0;
}
