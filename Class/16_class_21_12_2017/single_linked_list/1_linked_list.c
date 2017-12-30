#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;

};

int main(int argc, char *argv[])
{
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node)), *third = malloc(sizeof(struct node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    printf("\nData in HEAD is %d\n", head -> data);
    printf("\nADDRESS OF HEAD is %p\n", head);
    printf("\nData in SECOND is %d\n", second -> data);
    printf("\nADDRESS OF SECOND head -> next is %p\n", head -> next);
    printf("\nADDRESS OF SECOND second is %p\n", second);
    printf("\nData in THIRD is %d\n", third -> data);
    printf("\nADDRESS OF THIRD second -> next is %p\n", second -> next);
    printf("\nADDRESS OF THIRD third is %p\n", third);



    return 0;
}
