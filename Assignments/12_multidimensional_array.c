/**********************************************************************************************************************

Title       :
Author      : MOHMMED ASIF.S
Date        :  
Description :

**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char __option;

    do
    {

        
        printf("\n\nDO YOU WANT TO CONTINUE[Y/N]:");
        scanf("\n%c", &__option);
    
    }while(__option == 'Y' || __option == 'y');

    return 0;
}
