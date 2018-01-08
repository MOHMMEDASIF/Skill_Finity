#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct node * create_node(void);
void insert_data(struct node *ptr,int data);
void display_nodes(struct node *l_ptr);

struct node
{
    int data;
    struct node *link;
};
struct node *node1, *node2, *node3, *node4, *node5;

/*    struct node *node1;
    struct node *node2; 
    struct node *node3; 
    struct node *node4; 
    struct node *node5;
    */
int main(int argc, char *argv[])
{
/*
    struct node *node1;
    struct node *node2; 
    struct node *node3; 
    struct node *node4;
    struct node *node5;

    */

    node1 = create_node();
    insert_data(node1, 5);

    node2 = create_node();
    insert_data(node2, 15);
    node1 -> link = node2;

    node3 = create_node();
    insert_data(node3, 25);
    node2 -> link = node3;

    node4 = create_node();
    insert_data(node4, 35);
    node3 -> link = node4;
    
    node5 = create_node();
    insert_data(node5, 45);
    node4 -> link = node5;
   
    display_nodes(node1);


    return 0;
}

struct node * create_node(void)
{
    return (struct node *)malloc(sizeof(struct node));
}

void insert_data(struct node *ptr,int data)
{
    if(NULL != ptr)
    {
        ptr -> data = data;
        ptr -> link = NULL;
    }
    else
    {
        printf("NULL pointer\n");
    }
}

void display_nodes(struct node *l_ptr)
{
    printf("DATA Present in Linked List are:");
    while(NULL != l_ptr)
    {
        printf(" %d ->", l_ptr -> data);
        l_ptr = l_ptr -> link;
    }
    printf("\n");
}

