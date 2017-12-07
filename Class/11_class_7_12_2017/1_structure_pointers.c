#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[10];
    int age;
}student_t;

int main()
{
    student_t var; 
    char _name[20];
    
    printf("Enter the string:");
    scanf("%s", var.name);

    student_t *ptr = &var;// = malloc(sizeof(student_t));
    ptr -> age = 20;
    //ptr -> name = ;
    //var.name[0] = 'a';



    printf("%d", ptr->age);
    //printf("%s", _name);
    printf("%s\n", var.name);

    return 0;
}
