/*********************************************************************************************************************
Title       : int and float TO binary
Author      : MOHMMED ASIF.S
Date        : 10/12/2017
description : Print the binary form of the floating number
**********************************************************************************************************************/

#include<stdio.h>

void print_bits(int num, size_t n);

int main()
{
    char option;

    do
    {
        float f;
        double d;

        //promt the  user for the floating point number
        printf("Enter the Floating point Number:");
        scanf("%f", &f);

        //type cast the address pointer to int 
        int *p = (int *)&f;

        //pass the address pointer of type int to print the value of the bit and the sizeof the value
        print_bits(*p, sizeof(float) * 8);


        printf("\nDo you want to continue?[Y/N]:");
        scanf("\n%c", &option);
    }while (option == 'Y' || option == 'y');

    return 0;
}


//function prints as a bits
void print_bits(int num, size_t n)
{
    unsigned int mask;

    for(mask = 1 << ((sizeof(int) * 8) - 1); mask; mask >>= 1)
    {
        num & mask ? putchar('1'):putchar('0') ;
    }
}
