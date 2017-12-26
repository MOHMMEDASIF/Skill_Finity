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

void populate(int row, int col, int p[][col]);
void display(int row, int col, int p[][col]);

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
        int user_choice, array_1_row, array_1_col, array_2_row, array_2_col;

        system("clear");

        //prompt the user for the available operation
        puts("\n\n[BELOW OPTION AVAILABLE]\n");
        puts("1.Addition");
        puts("2.Subtraction");
        puts("3.Multiplication");
        puts("4.Division");
        puts("5.Transpose");
        printf("Enter your choice:");
        scanf("%d", &user_choice);

        //prompt the user for array size
        printf("\n\n[Enter the size of an array1]\n");
        printf("row size:");
        scanf("%d", &array_1_row);
        printf("column size:");
        scanf("%d", &array_1_col);

        //prompt the user for array size
        printf("\n\n[Enter the size of an array2]\n");
        printf("row size:");
        scanf("%d", &array_2_row);
        printf("column size:");
        scanf("%d", &array_2_col);

        int array3[array_1_row][array_2_col];
        int array1[array_1_row][array_1_col], array2[array_2_row][array_2_col];

        //handle the error conditions
        if((array_1_row == array_2_col) && (array_2_row == array_1_col))
        {
            //populate an array of size mxn
            puts("\n[Enter the value of an array1]");
            populate(array_1_row, array_1_col, array1);
            puts("\n[Content of an array 1]\n");
            display(array_1_row, array_1_col, array1);

            puts("\n[Enter the value of an array2]");
            populate(array_2_row, array_2_col, array2);
            puts("\n[Content of an array 2]\n");
            display(array_2_row, array_2_col, array2);

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
                {
                    for(int i = 0; i < array_2_row; i++)
                    {
                        for(int j = 0; j < array_2_col; j++)
                        {
                            ( * ( * (array3 + j) + i)) = (* ( * (array1 + j) + i)) + ( * ( * (array2 + j) + i));     
                        }
                    }
                    //display the value of an array
                    puts("\n[Content of an array after addition]\n");
                    display(array_2_row, array_2_col,array3);
                }

                break;

            case subtraction:
                {
                    for(int i = 0; i < array_2_row; i++)
                    {
                        for(int j = 0; j < array_2_col; j++)
                        {
                            ( * ( * (array3 + j) + i)) = (* ( * (array1 + j) + i)) - ( * ( * (array2 + j) + i));     
                        }
                    }
                    //display the value of an array
                    puts("\n[Content of an array after Subtraction]\n");
                    display(array_2_row, array_2_col,array3);
                }
                break;
            case multiplication:
                {
                    for(int i = 0; i < array_2_row; i++)
                    {
                        for(int j = 0; j < array_2_col; j++)
                        {
                            ( * ( * (array3 + i) + j)) = 0;     
                            for(int k = 0; k < array_2_col; k++)
                            {
                                (( * ( * (array3 + i) + j))) += ((* ( * (array1 + i) + k))) * (( * ( * (array2 + k) + j)));     
                            }

                        }
                    }

                    //display the value of an array
                    puts("\n[Content of an array after Multiplication]\n");
                    display(array_2_row, array_2_col,array3);
                }
                break;

            case division:
                {
                    int temp[array_1_row][array_2_col];

                    //transpose of array1
                    for(int j = 0; j < array_1_row; j++)
                    {
                        for(int i = 0; i < array_1_col; i++)
                        {
                            temp[i][j] = array1[j][i];
                        }
                    }

                    for(int i = 0; i < array_2_row; i++)
                    {
                        for(int j = 0; j < array_2_col; j++)
                        {
                            ( * ( * (array3 + i) + j)) = 0;     
                            for(int k = 0; k < array_2_col; k++)
                            {
                                (( * ( * (array3 + i) + j))) += ((* ( * (temp + i) + k))) * (( * ( * (array2 + k) + j)));     
                            }

                        }
                    }

                    //display the value of an array
                    puts("\n[Content of an array after Division A pow(T) * B]\n");
                    display(array_1_col, array_1_row,array3);

                }    
                break;
            case transpose:
                {
                    for(int j = 0; j < array_1_row; j++)
                    {
                        for(int i = 0; i < array_1_col; i++)
                        {
                            array3[i][j] = array1[j][i];
                        }
                    }
                    //display the value of an array
                    puts("\n[Content of an array1 after Transpose]\n");
                    display(array_1_col, array_1_row,array3);

                    for(int j = 0; j < array_1_row; j++)
                    {
                        for(int i = 0; i < array_1_col; i++)
                        {
                            array3[i][j] = array2[j][i];
                        }
                    }
                    //display the value of an array
                    puts("\n[Content of an array2 after Transpose]\n");
                    display(array_1_col, array_1_row,array3);
                }
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
void populate(int row, int col,int p[][col])//, int row, int col)
{

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j ++)
        {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", (*(p + i) + j));
            //scanf("%d", &p[i][j]);

        }
    }
}

//Dispaly an 2D array
void display(int row, int col,int p[][col])//, int row, int col)
{

    for(int i = 0; i < row; i++)
    {
        printf("|");
        for(int j = 0; j < col; j ++)
        {
            printf(" %-3d ", p[i][j]);
        }
        printf("|\n");
    }
}
