#include <stdio.h>

int main()
{
    char str[200];
    
    printf("Enter the string:");
    scanf("%[^\n]", str);

    printf("\nEntered string is [%s]\n", str);
}
