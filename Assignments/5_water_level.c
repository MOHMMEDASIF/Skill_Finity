/**********************************************************************************************************************

Title       : Water Level Management System
Author      : MOHMMED ASIF.S
Date        : 7/12/2017
Description : A software module records the water contained in a tank.
              with every usage of water by a house, it displays the water
              level after usage.
              it displays the below message always

                current water level       : xyz ltr
                enter the current usage   : <takes input from user>

                when the current water level goes below 25lts, it refills the
                tank automatically and sets the current water level to 1000ltr


 **********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char __option;
    int current_water_level = 1000, usage = 0;

    //clear the screen and dispaly greeting message to the user
    system("clear");
    puts("Welcome To the WLMS[Water Level Management system]");

    do
    {
        //Display the Current water-level and ask the user for the Usage in ltrs
        printf("\n%-30s [%d]\n","Current Water Level    : ",current_water_level );
        printf("%-30s","Enter the current usage:    ");
        scanf("%d", &usage);

        if(usage >= 0)
        {
            //Error Handling
            //validate for the usage level greater then the current_water_level
            if(usage >= current_water_level)
            {
                printf("\nPresent Level : %d ltrs, Usage of %d ltr is Not Valid\n", current_water_level, usage);
            }

            //validate for the water_level less then or equal to 25ltrs
            else if(current_water_level <= 25)
            {
                //initialize with 1000 litrs
                current_water_level = 1000;
            }

            else if((current_water_level  == usage) && (usage < 1000) && (usage < current_water_level))
            {
                //initialize to the water_lever = 1000 and then perform the calculation
                current_water_level = 1000;
                current_water_level -= usage;
            }
            else
            {
                current_water_level -= usage;
            }
        }
        else
        {
            printf("\nPresent Level : %d ltrs, Usage of %d ltr is Not Valid\n", current_water_level, usage);

        }

        //prompt the user for option
        printf("\n\nDO YOU WANT TO CONTINUE[Y/N]:");
        scanf("\n%c", &__option);

        //clear the screen
        system("clear");

    }while(__option == 'Y' || __option == 'y');

    //greet the user 
    puts("\n\nThank you For Using Water Level Management System.....");

    return 0;
}
