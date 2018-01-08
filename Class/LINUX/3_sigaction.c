#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

struct sigaction oact[32];

void signalaction(int number)
{
    printf("Signal Number of the Signal:%d\n", number);
}



int main(int argc, char *argv[])
{
    struct sigaction action;
    memset(&action, 0, sizeof(struct sigaction));
    action.sa_handler = signalaction;

    sigaction(SIGINT, &action,&oact[SIGINT]);
    sigaction(SIGTERM, &action,&oact[SIGTERM]);
    sigaction(SIGQUIT, &action,&oact[SIGQUIT]);
    sigaction(SIGTSTP, &action,&oact[SIGTSTP]);

    while(1)
    {
        printf("Hello ... from PID: %d\n", getpid());
        sleep(1);
    }
    return 0;
}
