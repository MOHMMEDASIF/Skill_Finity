/**********************************************************************************************************************

Title       : Doctor and Patient Tracking System(DPTS)
Author      : MOHMMED ASIF.S
Date        : 4/12/2017
Description : A software Module Implement the status dispaly of a doctor. 
                1 = Doctor Entry
                2 = Patient Entry
                3 = Patient Exit
                4 = Doctor Exit
               When the doctor enters his clinic in the morning, 
               he gives an input where the program records that the doctor is in.
               After that it allows patient inside by giving 2 as input. 
               If already a patient is in and another patient tries to enter it gives message "Doctor is Busy, Please Wait". 
               Once the patient comes out with a input of 3, another patient can enter. 
               when the doctor leaves the clinic, option  4 is used. 
               when doctor has not entered in the clinic, if the option 2 is used, it displays "DOCTOR is not yet in Please wait". 
               If doctor has excited the clinic, option 2 display a message "Doctor has left, please come tomorrow".
               if no patient is in a option 3 is used it dispaly a message "Are you Joking?, first send patient in!".

**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char __option;

    do
    {
        int flag_pa = 1, flag = 1, choice, doctor_status = 0, patient_status = 0;
        system("clear");
        printf("\n\nWelcome to DPTS[Doctor and Patient Tracking system]\n\n");
        while(1)
        {
            //prompt the user for the choice
            puts(" 1.Doctor Entry");
            puts(" 2.Patient Entry");
            puts(" 3.Patient Exit");
            puts(" 4.Doctor Exit");
            puts(" 5.Exit");

            //prompt the user and store the choice 
            printf("Enter the status:");
            scanf("%d", &choice);
            
            //validate the choice
            switch(choice)
            {
                case 1:
                        if (flag)
                        {
                            doctor_status = 1;
                            flag = 0;
                        }
                        else
                        {
                            system("clear");
                            printf("\nDoctor is Already Present...Sent Patient\n ");
                        }
                        break;

                case 2:
                        if (doctor_status && flag_pa)
                        {
                            patient_status = 1;
                            //printf("patient sent successfully\n");
                            flag_pa = 0;
                        }
                        else
                        {
                            if(flag_pa == 0 && doctor_status)
                            {
                                system("clear");
                                printf("\nDoctor is Busy With the patient..\n");
                            }
                            else 
                            {
                                system("clear");
                                printf("\nDoctor is not available...\n");
                            }
                        }
                        break;

                case 3:
                        if (patient_status == 1)
                        {
                            flag_pa = 1;
                            patient_status = 0;
                        }
                        else if(patient_status == 0)
                        {
                            system("clear");
                            printf("\nAre you Joking, Sent the Patient..\n");
                        }
                        break;

                case 4:
                        if (doctor_status == 1)
                        {
                            flag = 1;
                            doctor_status = 0;
                            patient_status = 0;
                            flag_pa = 1;
                        }
                        else if(doctor_status == 0)
                        {
                            system("clear");
                            printf("\nDoctor is Not available ..\n");
                        }
                        break;

                case 5:
                        system("clear");
                        printf("\nThank you for Using DPTS[Doctor and Patient Tracking System]...\n\n");
                        exit(1);

                default:
                        system("clear");
                        printf("\nInvalid Entry Try Again....\n");
                        break;
            }
           
        }
        
        printf("DO YOU WANT TO CONTINUE[Y/N]:");
        scanf("\n%c", &__option);
    
    }while(__option == 'Y' || __option == 'y');

    return 0;
}
