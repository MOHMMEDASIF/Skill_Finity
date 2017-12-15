/**********************************************************************************************************************

Title       : Multi-Dimensional manipulation
Author      : MOHMMED ASIF.S
Date        : 12/12/2017
Description : Application which can perform following mathematical operation
              for 2x2 and 3x3 matrices

              1.Addition
              2.Subtraction
              3.Multiplication
              4.Division
              5.Transpose

**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void populate(int row, int col, int p[][]);//, int row, int col);
int** f_addition(int col, int (*array1)[col], int (*array2)[col]);


int main(int argc, char *argv[])
{
    char __option;
    enum intialization
    {
        addition = 1,
        subtraction, 
        multiplication, 
        division, 
        transpose,
    };   

    do
    {
            //    int (*result_array)[array_2_col] ;
        int user_choice, array_1_row, array_1_col, array_2_row, array_2_col;

        //prompt the user for the available operation
        puts("\n\nBELOW OPTION AVAILABLE");
        puts("1.Addition");
        puts("2.Subtraction");
        puts("3.Multiplication");
        puts("4.Division");
        puts("5.Transpose");
        printf("Enter your choice:");
        scanf("%d", &user_choice);
       
        //prompt the user for array size
        printf("\n\nEnter the size of an array1\n");
        printf("row size:");
        scanf("%d", &array_1_row);
        printf("column size:");
        scanf("%d", &array_1_col);

        //prompt the user for array size
        printf("\n\nEnter the size of an array2\n");
        printf("row size:");
        scanf("%d", &array_2_row);
        printf("column size:");
        scanf("%d", &array_2_col);

        int array1[array_1_row][array_1_col], array2[array_2_row][array_2_col];
        //handle the error conditions
        if(user_choice >= 3)
        {
            if(array_1_col == array_2_row)
            {

                if(array_1_row == array_2_col)
                {
                    //int array1[array_1_row][array_1_col], array2[array_2_row][array_2_col];

                    //populate an array of size mxn
                    puts("\nEnter the value of an array1");
                    populate(array_1_row, array_1_col, array1);
                    puts("\nEnter the value of an array2");
                    populate(array_2_row, array_2_col, array2);

                }
            }
        }
        else if(array_1_row == array_2_col)
        {
            //int array1[array_1_row][array_1_col], array2[array_2_row][array_2_col];
           
        //    int (*result_array)[array_2_col] ;
            //populate an array of size mxn
            puts("\nEnter the value of an array1");
            populate(array_1_row, array_1_col, array1);
            puts("\nEnter the value of an array2");
            populate(array_2_row, array_2_col, array2);

        }
        else
        {
            printf("\n\n2x2 and 3x3 are the possible size of an array\n");
            printf("Invalid array size..\n\n");
            break;
        }

        int (*result_array)[array_2_col] ;
        //validate the user_choice
        switch(user_choice)
        {
            case addition:

                //add two array by passing to an function
                (*result_array)[array_2_col] = (int (*)[])f_addition(array_1_col, array1, array2);

                //display the value of an array 
                //display(result_array, array_1_row);
                break;

            case subtraction:
                break;
            case multiplication:
                break;

            case division:
                break;
            case transpose:
                break;

            default:
                printf("\n\nInvalid Entry Try Again...\n\n");
                break;
        }


        printf("\n\nDO YOU WANT TO CONTINUE[Y/N]:");
        scanf("\n%c", &__option);
    
    }while(__option == 'Y' || __option == 'y');

    return 0;
}

//populate an 2D array
void populate(int row, int col,int p[][])//, int row, int col)
{
    
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j ++)
        {
            printf("%parray[%d][%d]", (p + j), i, j);
            //scanf("%d", (*(p + j) + i));
            scanf("%d", &p[i][j]);

        }
    }
}

//addition of 2-d matrices
int** f_addition(int col, int (*array1)[col], int (*array2)[col])
{
    int (*ptr)[col];

        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j < col; j++)
            {
                
                printf("%parray[%d][%d]", ptr, i, j);
               ( * ( * (ptr + j) + i)) = (* ( * (array1 + j) + i)) + ( * ( * (array2 + j) + i));     
            }

        }
        
        return (int **)(*ptr)[0]; 

}
