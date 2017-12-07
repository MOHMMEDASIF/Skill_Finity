/**********************************************************************************************************************

Title       : Student Database Management System
Author      : MOHMMED ASIF.S
Date        : 30/11/2017
Description : Application which can store,Edit and Search Following data about the student
                1.Name of the student
                2.DOB
                3.Current Course
                4.Roll_no
                5.Day of Enrollement in DD/MM/YYYY
                6.Phone_Number
                7.Email_id
                

**********************************************************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "addstudent.h"

int main()
{
    char option;

    do
    {
        int user_choice, validate;
        
        //prompt the user for the menu to perform the operation
        system("clear");
        puts("Welcome to EaZy DataBase ManageMent System");
        puts("");
        puts(" 1.Add Student");
        puts(" 2.Search Student");
        puts(" 3.Edit Student Details");
        puts(" 4.Exit");

        //Store the user_choice in the variable
        printf("Enter your choice:");
        scanf("%d", &user_choice);

        //validate the user_choice and perform appropriate operation
        switch(user_choice)
        {
            case 1:
                    //valiate for the entry
                    //addstudent.h has the prototype for the function add_student()
                    validate = add_student();

                    if(validate)
                    {
                        printf("Entry Is Successful......\n");
                        puts("");
                    }
                    else
                    {
                        printf("Entered Invalid Details\n");
                        puts("Try Again!!!!");
                        puts("");
                    }
                    break;
            
            case 2:
                    //search the student in the database 
                    validate = search_student();

                    if(validate)
                    {
                        printf("Search Is Successful......\n");
                        puts("");
                    }
                    else
                    {
                        printf("Entered Invalid Details\n");
                        puts("Try Again!!!!");
                        puts("");
                    }

                    break;
            case 3:
                    //Edit the student details from the database
                    validate = Edit_details();

                    if(validate)
                    {
                        printf("Successfully Edited the details Of the Student......\n");
                        puts("");
                    }
                    else
                    {
                        printf("Entered Invalid Details\n");
                        puts("Try Again!!!!");
                        puts("");
                    }

                    break;
            case 4:
                    //Exit from the Application
                    puts("Thank You For Using EaZy DataBase Magament System");
                    puts("");
                    exit(1);
                    break;

            default:
                    puts("Invalid Entry.....");
                    puts("Try Again!!!!!!");
                    puts("");
        }

        printf("DO YOU WANT TO CONTINUE [Y/N]:");
        scanf("\n%c", &option);

    }while(option == Y || option == y);
    return 0;
}

