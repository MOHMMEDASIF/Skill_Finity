#include <stdio.h>

int main()
{
    //.text section and cannot be modified
    char *ptr = "my name is asif";
    //*ptr = 10;

    //*ptr = "N";
    printf("%x %c\n", ptr, *ptr);

    return 0;
}
