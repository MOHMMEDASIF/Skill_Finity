#include <stdio.h>

int main()
{
    FILE * l_file_ptr = fopen("asif.txt", "r");
    char value[120] = {0} ;

    if(NULL != l_file_ptr)
    {
        fread(value, 1, 10, l_file_ptr);
    }
    else
    {
        puts("NULL");
    }

    printf("%s\n", value);

    return 0;
}
