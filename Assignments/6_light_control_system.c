/**********************************************************************************************************************

Title       : Light Controlling System[LCS]
Author      : MOHMMED ASIF.S
Date        : 7/12/2017 
Description : A Module to switch-on the light when it turns dark and 
              off in the morning. 
              Based on the current time entered by user in hhmm format,
              dispaly the status of light to the user 0600 to 1900 is day
              and 1901 to 0559 is night

**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void readHH();
void readMM();
void Dispaly_status();

typedef struct time
{
    int HH;
    int MM;
}time_s;

//declare variable of the type time_s
time_s time;

int main(int argc, char *argv[])
{
    char __option;
    int flag = 0;

    system("clear");

    //greet the user
    puts("Welcome to Light Controlling System[LCS]\n");

    do
    {
        puts("Enter the Time in [HHMM] Format");

        //functions to perform read hh,mm and display the light status
        readHH();
        readMM();
        Dispaly_status();

        printf("\n\nDO YOU WANT TO CONTINUE[Y/N]:");
        scanf("\n%c", &__option);

        system("clear");

    }while(__option == 'Y' || __option == 'y');

    //greet the user
    puts("\nThank you for Using LCS[Light Controlling System]\n\n");

    return 0;
}

//function to read hours
void readHH()
{
    int flag = 0;

    //Validate fro the Hours[0-24]
    do
    {
        //check the flag for repetation of the loop
        if(flag)
        {   
            system("clear");
            printf("\aInvalid Entry of Hours [%d]\nTry Again...\n\n", time.HH);
        }

        //enter hours
        printf("[HH]:");
        scanf("%d", &time.HH);

        //set the flag
        flag = 1;

    }while((time.HH < 0) || (time.HH > 24));

}

//function to read minutes
void readMM()
{
    int flag = 0;

    //validate for the Minutes[0-60]
    do
    {
        //check the flag for repetation of the loop
        if(flag)
        {
            system("clear");
            printf("\aInvalid Entry of Minutes [%d]\nTry Again...\n\n", time.MM);

        }

        //enter minutes
        printf("[MM]:");
        scanf("%d", &time.MM);

        //set the flag
        flag = 1;
    }while((time.MM < 0) || (time.MM > 59));

}

//function to dispaly status of Light
void Dispaly_status()
{
    //check for the time and print appropriate message and status
    if(time.HH >= 6 && (time.HH <= 19 && time.MM <= 0))
    {
        printf("Light is OFF [Time is %d:%d]", time.HH, time.MM);
    }
    else
    {
        printf("Light is ON [Time is %d:%d]", time.HH, time.MM);
    }
}
