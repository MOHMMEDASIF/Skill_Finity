/**************************************************************************

  Library function to add student in EaZy database ManageMent System

***************************************************************************/
#include <stdio.h>

int main()
{
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
    struct __attribute((__packed__)) studentdetails
    {
        char name[100];
        date DOB;
        int current_course;
        char roll_no[11];
        date DAY_OF_ENROLL;
        char phone_number[11];
        char email_id[50];
    }student;

    //prompt the user for the name and store
    printf("Enter the Student Name: ");
    scanf("%[^\n]s", student.name);
    
    //for new_line
    puts("");

    //prompt the user for the DOB and store 
    printf("Enter Student DOB [format - DDMMYYYY]\n");
    printf(" DD  :");
    scanf("%d", &student.DOB.dd);
    printf(" MM  :");
    scanf("%d", &student.DOB.mm);
    printf(" YYYY:");
    scanf("%d", &student.DOB.yy);

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
    scanf("%d", &student.current_course);

    //for new_line
    puts("");

    //clear the input buffer
    __fpurge(stdin);

    //prompt the user for the roll_number and store
    printf("Enter Valid Roll Number: ");
    scanf("%[^\n]s", student.roll_no);

    //for new_line
    puts("");
    
    //prompt the user for the Enrollement-Date and store 
    printf("Enter Student Enrollement Date [format - DDMMYYYY]\n");
    printf(" DD  :");
    scanf("%d", &student.DAY_OF_ENROLL.dd);
    printf(" MM  :");
    scanf("%d", &student.DAY_OF_ENROLL.mm);
    printf(" YYYY:");
    scanf("%d", &student.DAY_OF_ENROLL.yy);

    //for new_line
    puts("");

    //prompt the user for the Phone_number and store
    printf("Enter Phone Number:");
    scanf("%[^\n]s", student.phone_number);

    //for new_line
    puts("");

    //prompt the user for the email_id and store
    printf("Enter Email-Id:");
    scanf("%[^\n]s", student.email_id);

}
