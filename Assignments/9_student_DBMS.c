/**********************************************************************************************************************

Title       : Student Database Management System[EaZy]
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

#include <stdio.h>
#include <stdlib.h>
int add_student(int);
int search_student();

    //push the previous alignment into stack 
    #pragma pack(push) 

    //use 1-byte alignment system for the below struct
    #pragma pack(1)

    //sturcture to store dateofbirth in DD/MM/YYYY format
    typedef struct dateofbirth
    {
        int dd;
        int mm;
        int yy;

    }date;

    //pop the alignment from the stack
    #pragma pack(pop)

    //applicable for gcc compiler 
    //__attribute((__packed__)) uses the 1-byte aligment 

    //struct to store student details
    typedef struct __attribute((__packed__)) studentdetails
    {
        char name[100];
        date DOB;
        int current_course;
        int roll_no;
        date DAY_OF_ENROLL;
        char phone_number[11];
        char email_id[50];
    }student_t;

    student_t student[100];
    unsigned int student_count = 0;

int main(int argc, char *argv[])
{
    char __option;
    //int student_count = 0;
    //student_t student[100];

    system("clear");
    puts("Welcome to EaZy DataBase ManageMent System");
    do
    {
	int user_choice = 0, validate;
        
        //prompt the user for the menu to perform the operation
        puts("");
        puts(" 1.Add Student");
        puts(" 2.Search Student");
        puts(" 3.Exit");

        //Store the user_choice in the variable
        printf("Enter your choice:");
        scanf("%d", &user_choice);

	//validate the user_choice and perform appropriate operation
        switch(user_choice)
        {
            case 1:
                    //valiate for the entry
                    //addstudent.h has the prototype for the function add_student()
                    validate = add_student(student_count);
                    student_count++;

                    if(validate)
                    {
                        system("clear");
                        printf("\nEntry Is Successful......\n");
                        puts("");
                    }
                    else
                    {
                        system("clear");
                        printf("\nEntered Invalid Details\n");
                        puts("Try Again!!!!");
                        puts("");
                    }
                    break;
          
            case 2:
                    //search the student in the database 
                    validate = search_student();

                    if(validate)
                    {
                        puts("");
                    }
                    else
                    {
                        system("clear");
                        printf("\nEntered Invalid Details\n");
                        puts("Try Again!!!!");
                        puts("");
                    }

                    break;
#if 0
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
#endif
            case 4:
                    //Exit from the Application
                    system("clear");
                    puts("\nThank You For Using EaZy DataBase Magament System");
                    puts("");
                    exit(1);
                    break;

            default:
                    system("clear");
                    puts("Invalid Entry.....");
                    puts("Try Again!!!!!!");
                    puts("");
        }

        
        printf("\n\nDO YOU WANT TO CONTINUE[Y/N]:");
        scanf("\n%c", &__option);
    
    }while(__option == 'Y' || __option == 'y');

    return 0;
}


int add_student(int student_count)
{
    system("clear");
    printf("\n\t\t\t\tPlease Fill The Form\n\n");
    if(student_count >= 0)
    {
        //prompt the user for the name and store
        printf("Enter the Student Name: ");
        scanf("\n%[^\n]s", student[student_count].name);

        //for new_line
        puts("");

        //prompt the user for the DOB and store 
        printf("Enter Student DOB [format - DDMMYYYY]\n");
        printf(" DD  :");
        scanf("%d", &student[student_count].DOB.dd);
        printf(" MM  :");
        scanf("%d", &student[student_count].DOB.mm);
        printf(" YYYY:");
        scanf("%d", &student[student_count].DOB.yy);

        //for new_line
        puts("");

        //prompt the user for the course enrolled
        puts("Enter course code");
        puts(" 1001.Computer Science");
        puts(" 2002.Electronics");
        puts(" 3003.Embedded Systems");
        puts(" 4004.Mechanical");
        puts(" 5005.Civil");
        printf("Enter the code:");
        scanf("%d", &student[student_count].current_course);

        //for new_line
        puts("");

        //clear the input buffer
        //__fpurge(stdin);

        //prompt the user for the roll_number and store
        printf("Enter Valid Roll Number: ");
        scanf("%d", &student[student_count].roll_no);

        //for new_line
        puts("");

        //prompt the user for the Enrollement-Date and store 
        printf("Enter Student Enrollement Date [format - DDMMYYYY]\n");
        printf(" DD  :");
        scanf("%d", &student[student_count].DAY_OF_ENROLL.dd);
        printf(" MM  :");
        scanf("%d", &student[student_count].DAY_OF_ENROLL.mm);
        printf(" YYYY:");
        scanf("%d", &student[student_count].DAY_OF_ENROLL.yy);

        //for new_line
        puts("");

        //prompt the user for the Phone_number and store
        printf("Enter Phone Number:");
        scanf("\n%[^\n]s", student[student_count].phone_number);

        //for new_line
        puts("");

        //prompt the user for the email_id and store
        printf("Enter Email-Id:");
        scanf("\n%[^\n]s", student[student_count].email_id);

    }
    else
    {
        //if unsuccessfull return 0
        return 0;
    }

    //if sucessfull return 1
    return 1;
}
int search_student()
{
    system("clear");
    puts("\n\n\t\t\tSearch Your  Student!!\n\n");
    //temp rollnumber to search the student
    int temp_roll_number = 0, actual_roll_number = -1;

    //enter the roll_number to search the existing roll_number
    printf("Enter Roll-Number: ");
    scanf("%d", &temp_roll_number);

    //serach the roll_number
    for (int i = 0; i < student_count; i++)
    {
        if ((student[i].roll_no) == temp_roll_number)
        {
            actual_roll_number = i;
            break;
        }
    }

    system("clear");
    if(actual_roll_number >= 0)
    {
        printf("\n\n|%20s |%10s |%20s |%20s |%20s|\n", "--------------------","----------", "--------------------", "--------------------", "--------------------");
        printf("|%-20s |%-10s |%-20s |%-20s |%-20s|\n", "Name", "DOB", "Current Course", "Roll-Number", "Enrollment-Date");
        printf("|%20s |%10s |%20s |%20s |%20s|\n", "--------------------","----------", "--------------------", "--------------------", "--------------------");

        printf("|%-20s |%-2d/%-2d/%-4d |%-20d |%-20d |%-2d/%-2d/%-14d|", student[actual_roll_number].name, student[actual_roll_number].DOB.dd, student[actual_roll_number].DOB.mm, student[actual_roll_number].DOB.yy, student[actual_roll_number].current_course, student[actual_roll_number].roll_no, student[actual_roll_number].DAY_OF_ENROLL.dd, student[actual_roll_number].DAY_OF_ENROLL.mm, student[actual_roll_number].DAY_OF_ENROLL.yy);

        printf("\n\n|%20s |%10s |%20s |%20s |%20s|\n", "--------------------","----------", "--------------------", "--------------------", "--------------------");
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}
