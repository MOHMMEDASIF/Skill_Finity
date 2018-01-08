/*
#
#       Name        : Stack Implementation
#       Date        : 8/1/2018  
#       Author      : MOHMMED ASIF.S
#       Description : perform "push" and "pop" operation on stack[FILO]
#                     First In and Last Out Mechanisms  
#
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 2

void push(int a[], int data);
void pop();

int top = -1;
int stack[MAX];

enum
{
    push_1 = 1,
    pop_2
};

int main(int argc, char *argv[])
{
    char option;
    do
    {
        int user_choice = 0, data = 0;

        //prompt the user for choice
        system("clear");
        puts("Operation To perform on Stack");
        puts(" 1.push");
        puts(" 2.pop");

        //read user choice
        printf("Enter the choice: ");
        scanf("%d", &user_choice);

        //validate user choice
        switch(user_choice)
        {
            case push_1:
                system("clear");
                
                printf("Enter the data: ");
                scanf("%d", &data);
                
                push(stack, data);
                break;

            case pop_2:
                
                pop();

                break;
            
            default:
                printf("Invalid Entry Try Again....\n");
                break;
        }
        printf("\n\nDO YOU WANT TO CONTINUE[Y/N]:");
        scanf("\n%c", &option);
    }while(option == 'Y' || option == 'y');
    return 0;
}
//removes the data from the stack
void pop()
{
    if( -1 == top)
    {
        printf("\n[ERROR] underflow [ERROR]\n");
        printf("[Unsuccessful.....]\n");
    }
    else
    {
        printf("Popped data is [%d]\n", stack[top--]);
    }
}

//adds the data into stack
void push(int *a, int data)
{
    if(top >= MAX)
    {
        printf("\n[ERROR] Overflow [ERROR]\n");
        printf("[Unsuccessful.....]\n");
    }
    else
    {
        //push 
        stack[++top] = data;
        printf("Successfully pushed [%d] into the stack\n", data);
    }
}
