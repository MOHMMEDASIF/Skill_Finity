/*********************************************************************************************************************

Title       : Print in Pattern
Author      : MOHMMED ASIF.S
Date        : 16/11/2017
Description : Prompt the user for the name, branch, college, Year of passing and passion and print in the below format
                
                Example:

#if 0
    //multi- line in printf function

    printf( "*************************************************************\n"

            "*                                                           *\n"

            "*      Name                :   Deepak Hebbur                *\n"

            "*      Branch              :   Computer Science             *\n"

            "*      College             :   SIT, Tumkur                  *\n"

            "*      Year of Passing     :   1999                         *\n"

            "*      Passion             :   Skill Building               *\n"

            "*                                                           *\n"   

            "*************************************************************\n");
#endif
                        
                        


**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define MAX 20


int main()
{
    system("clear");

    //prompt for the Greeting
    printf("Please Fill the Following form to print in the Format\n\n");

    char name[MAX];
    char branch[MAX];
    char college[MAX];
    int year;
    char passion[MAX];

    //prompt the user for Name and store in the varible
    printf("Enter Your Name: ");
    scanf("%[^\n]s", name);
    

    //prompt the user for branch and store in the varible
    printf("Enter Your Branch Name: ");
    scanf("\n%[^\n]s", branch);

    
    //prompt the user for College name and store in the varible
    printf("Enter Your College Name: ");
    scanf("\n%[^\n]s", college);
    

    //prompt the user for Name and store in the varible
    printf("Enter Year of Passing: ");
    scanf("%d", &year);


    //prompt the user for Name and store in the varible
    printf("Enter Your Passion: ");
    scanf("\n%[^\n]s", passion);

    system("clear");

    //To print the outer_layer
    for(int row = 0; row < 9; row++)
    {
        printf("*");
        for(int col = 0; col < 50; col++)
        {
            if(0 == row || 8 == row)
            {

                printf("*");

            }
            else if(1 == row || 7 == row)
            {
                printf(" ");

            }
            else if(5 == col)
            {
                if (row == 2)
                {
                    printf("   %-20s:    %-21s ", "Name", name);
                }
                else if (row == 3)
                {
                    printf("   %-20s:    %-21s ", "Branch", branch);
                }
                else if (row == 4)
                {
                    printf("   %-20s:    %-21s ", "College", college);
                }
                else if (row == 5)
                {
                    printf("   %-20s:    %-21d ", "Year of Passing", year );
                }
                else if (row == 6)
                {
                    printf("   %-20s:    %-21s ", "Passion", passion);
                }
            }
        }

        printf("*");
        puts("");
    }

    return 0;

}
