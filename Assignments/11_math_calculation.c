/**********************************************************************************************************************

Title       : Math Calculation
Author      : MOHMMED ASIF.S
Date        : 10/12/2017
Description : Application for math Teacher
                a) Factorial
                b) Permutations
                c) combination

 **********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define DEBUG 0

long long fact(long long number);
void f_factorial();
void f_permutation();
void f_combination();

enum {factorial = 1,permutation, combination};

int main(int argc, char *argv[])
{
    char __option;

    do
    {
        int  user_choice;


        //prompt the user for the choice
        puts("Option Available");
        puts(" 1) Factorial");
        puts(" 2) Permutations");
        puts(" 3) combination");
        printf("Enter you choice:");
        scanf("%d", &user_choice);

        //validate the choice
        switch(user_choice)
        {
            case factorial:
                f_factorial();
                break;

            case permutation:
                f_permutation();
                break;

            case combination:
                f_combination();
                break;

            default:
                puts("\n\nInValid Entry ...\nTry Again... ");
                break;
        }

        printf("\n\nDO YOU WANT TO CONTINUE[Y/N]:");
        scanf("\n%c", &__option);

    }while(__option == 'Y' || __option == 'y');

    return 0;
}

//find the factorial of the given number and return the long long
long long fact(long long number)
{
    if (number >= 1)
    {
        return number * fact(number - 1);
    }
    else
    {
        return 1;
    }

}

void f_factorial()
{
    int result, number;
    //prompt for the number to which factorial need to calculate
    printf("\n\nEnter the Number:");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("\n\nNumber Must Be greater then or equal to zero\n");
    }
    else if (number == 0 || number == 1)
    {
        printf("\n\nFactorial of number %d! = %d", number, 1);
    }
    else
    {
        //cal the function to perform the factorial operation
        result = fact(number);
    }
    //print the result
    printf("\n\nFactorial of number %d! = %d", number, result);
}


void f_permutation()
{
    int number, at_times, result, temp, result2;
    //prompt for the number to which factorial need to calculate
    printf("\n\nEnter the Number:");
    scanf("%d", &number);
    printf("Enter the r times of number:");
    scanf("%d", &at_times);

    if (at_times == 0 && number)
    {
        printf("1\n");
    }
    else if(at_times > number)
    {
        printf("0\n");
    }
    else
    {
        result = fact(number) / (fact(number - at_times));
#if 0
        //cal the function to perform the factorial operation
        result = fact(number);
        temp = number - at_times;
        result2 = fact(temp);
#endif
    }

    //print the result
    printf("\n\nPermutaion for %d things taken %d at time = %d", number, at_times, result);

}


void f_combination()
{
    long long number, at_times, result4;

    //prompt for the number to which factorial need to calculate
    printf("\n\nEnter the Number:");
    scanf("%lld", &number);
    printf("Enter the r times of number:");
    scanf("%lld", &at_times);

    if (at_times == 0 && number)
    {
        printf("1\n");
    }
    else if(at_times > number)
    {
        printf("0\n");
    }
    else
    {
        result4 = fact(number) / (fact(at_times) * fact(number - at_times));
#if 0               
        //cal the function to perform the factorial operation
        result = fact(number);
        printf("result1:%lld\n", result);
        result2 = fact(at_times); 
        printf("result2:%lld\n", result2);
        result3 = fact(number - at_times);
        printf("result3:%lld\n", result3);
        result4 = result / (result2 * result3);
        printf("result4:%lld\n", result4);
#endif
    }
    //print the result
    printf("\n\ncombination for %lld things taken %lld at time = %lld", number, at_times, result4);

}
