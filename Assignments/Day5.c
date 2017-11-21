#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_choice, user_preference;
    static int HH = 0,  MM = 0, SS = 0;
    char option;

    do
    {
    printf("Select to Updated\n");
    printf(" 1.Hours\n");
    printf(" 2.Minutes\n");
    printf(" 3.Seconds\n");
    printf(" 4.Exit\n");
    printf("Enter Your Choice:");
    scanf("%d", &user_choice);

    switch(user_choice)
    {
        case 1:
            printf("\t1.Increment\n");
            printf("\t2.Decrement\n");
            printf("Enter the Choice:");
            scanf("%d", &user_preference);
            
            switch(user_preference)
            {
                case 1:
                    if (HH >= 12)
                    {
                        HH = HH % 12;
                    }
                    else if(HH < 12 && HH > 0)
                    {
                        HH++;
                    }
                    else
                    {
                        HH++;
                    }
                    break;

                case 2:
                    if (HH < 12 && HH > 0)
                    {
                        HH--;
                    }
                    else if (HH == 0 )
                    {
                        HH = 11;
                    }
                    else if(HH == 12)
                    {
                        HH = 11;
                    }
                    break;
                default:
                    printf("\n Invalid Entry...\n");
                    break;
            }
            break;
        case 2:
            printf("\t1.Increment\n");
            printf("\t2.Decrement\n");
            scanf("%d", &user_preference);
            
            switch(user_preference)
            {
                case 1:
                    if (MM >= 60)
                    {
                       MM = MM % 60;
                    }
                    else if(MM < 60 && MM > 0)
                    {
                        MM++;
                    }
                    else
                    {
                        MM++;
                    }
                    break;

                case 2:
                    if (MM < 60 && MM > 0)
                    {
                        MM--;
                    }
                    else if(MM == 0 || MM == 60)
                    {
                        MM = 59;

                    }
                    break;
                default:
                    printf("\n Invalid Entry...\n");
                    break;
            }
            break;
        case 3:
            printf("\t1.Increment\n");
            printf("\t2.Decrement\n");
            scanf("%d", &user_preference);
            
            switch(user_preference)
            {
                case 1:
                    if (SS >= 60)
                    {
                        SS = SS % 60;
                    }
                    else if(SS < 60 && SS > 0)
                    {
                        SS++;
                    }
                    else
                    {
                        SS++;
                    }
                    break;

                case 2:
                    if (SS < 60 && SS > 0)
                    {
                        SS--;
                    }
                    else if(SS == 0 || SS == 60)
                    {
                        SS = 59;

                    }
                    break;
                default:
                    printf("\n Invalid Entry...\n");
                    break;
            }
            break;
        case 4:
                printf("\nUpdated Time is %d:%d:%d\n", HH, MM, SS);
                printf("\n\n\t\tThank you\n\n");
                exit(0);
                break;
        default:
            printf("Invalid Choice.....");
            break;

    }
    
    printf("\nUpdated Time is %d:%d:%d\n", HH, MM, SS);


    printf("Do You Want To Continue[Y/N]:");
    scanf("\n%c", &option);
    }while(option == 'Y' || option == 'y');
    return 0;
}
