#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int speed(int main);
int main()
{
    speed(0);
    speed(1);
    speed(2);
    speed(3);
    speed(4);
    speed(5);
    speed(6);
    speed(7);
    speed(8);

    return 0;
}
int speed(int main)
{
    system("clear");
    printf("Speed : %d KMPH\n", main );
    sleep(1);

}
