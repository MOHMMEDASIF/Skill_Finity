#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char * argv[])
{

    struct sigaction l_newaction;
    l_newaction.sa_handler = SIG_IGN;

    pid_t pid = fork();

    if(-1 == sigaction(SIGQUIT, &l_newaction, NULL))
    {
        perror("ERROR");
    }

   if(-1 == sigaction(SIGCONT, &l_newaction, NULL))
    {
        perror("ERROR");
    }

    if(pid > 1)
    {
        //parent
        printf("Parent process[%d]", getpid());

        int l_count = 0;
        while(1)
        {
            printf("Parent second[%d]\n", l_count++);
            sleep(1);
        }

    }
    else
    {
        int count = 0;
        l_newaction.sa_handler = SIG_DFL;
        if(-1 == sigaction(SIGCONT, &l_newaction, NULL))
        {
            perror("CERROR");
        }
        //child
        printf("Child[%d]\n", getpid());
        while(1)
        {
            count++;
            printf("CHILD second[%d]\n", count);
            sleep(1);

        }
    }

}
