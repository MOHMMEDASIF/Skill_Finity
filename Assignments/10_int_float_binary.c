/*********************************************************************************************************************
Title       : int and float TO binary
Author      : MOHMMED ASIF.S
Date        : 10/12/2017
description : Print the binary form of the floating number
 **********************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void print_bits(int num, size_t n);

int main()
{
    char option;
    system("clear");
    do
    {
        int user_choice = 0, integer = 0; 
        float f;

        puts("Enter The Type");
        puts(" 1.Integer to Binary");
        puts(" 2.Float to Binary");
        printf("Enter you choice:");
        scanf("\n%d", &user_choice);

        switch(user_choice)
        {
            case 1:
                //promt the  user for the floating point number
                printf("\nEnter Integer Number:");
                scanf("%d", &integer);


                //pass value of type int to print the value of the bit and the sizeof the value
                print_bits(integer, sizeof(float) * 8);
                break;

            case 2:
                //promt the  user for the floating point number
                printf("\nEnter the Floating point Number:");
                scanf("%f", &f);

                //type cast the address pointer to int 
                int *p = (int *)&f;

                //pass the address pointer of type int to print the value of the bit and the sizeof the value
                print_bits(*p, sizeof(float) * 8);
                break;

           default:
                puts("Invalid Entry..");
                puts("Try Again...");
        }

        printf("\n\n\nDo you want to continue?[Y/N]:");
        scanf("\n%c", &option);
    }while (option == 'Y' || option == 'y');

    return 0;
}


//function prints as a bits
void print_bits(int num, size_t n)
{
    unsigned int mask;

    printf("[");
    for(mask = 1 << ((sizeof(int) * 8) - 1); mask; mask >>= 1)
    {
        num & mask ? putchar('1'):putchar('0') ;
    }
    printf("]");
}
