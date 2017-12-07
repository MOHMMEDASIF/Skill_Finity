/**********************************************************************************************************************

Title       : Check the Co-ordinates
Author      : MOHMMED ASIF.S
Date        : 20_11_2017
Description :  A module is required to be developed which when given a x,y coordinate 
               checks if it lies inside a rectangular area covered by coordinates A(10,10) and B(100,100). 
               write a small module for this.


                Example:
                
                     -------------------------------- B(100,100)

                     |                                |

                     |                                |
    
                     |                                |

              (10,10)A --------------------------------


**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char __option;

    do
    {
        int x_coordinate, y_coordinate;

        //clear the screen
        system("clear");

        //prompt for greeting
        printf("Enter the Co-ordinates to check the Boundaries are within the Rectangle\n");

        //prompt for x-coordinate
        printf(" Enter X-Co-ordinate: ");
        scanf("%d", &x_coordinate);

        //prompt for y-coordinate
        printf(" Enter y-Co-ordinate: ");
        scanf("%d", &y_coordinate);

        //validate the points 
        if((x_coordinate > 9 && x_coordinate < 101) && (y_coordinate > 9 && y_coordinate < 101))
        {
            printf("Co-ordinates %d and %d are within the Rectangle Area", x_coordinate, y_coordinate);

        }
        else
        {
            printf("Co-ordinates %d and %d are not within the Rectangle Area", x_coordinate, y_coordinate);

        }


        printf("\n\nDO YOU WANT TO CONTINUE[Y/N]:");
        scanf("\n%c", &__option);
    
    }while(__option == 'Y' || __option == 'y');

    return 0;
}
