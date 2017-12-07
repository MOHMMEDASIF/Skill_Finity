/**********************************************************************************************************************

Title       : Decimal to hexadecimal and Octal conversion
Author      : MOHMMED ASIF.S
Date        : 19/11/2017
Description : A programmer wants an application which can take input and 
              display the corresponding hexadecimal and octal representation


**********************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main()

{
    int number;

    system("clear");

    //prompt the user for the number
    printf("Enter the Number:");
    scanf("%d", &number);

    puts("");

    //display the hexa and octal formt of the number
    printf("hexadecimal format of the number %d : %X\n", number, number);
    printf("Octal format of the number %d : %o\n", number, number);

    return 0;

}
