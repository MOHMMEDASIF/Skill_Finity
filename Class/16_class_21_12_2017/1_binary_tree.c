#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

struct node  
{
    int data;
    struct node * left_child;
    struct node * right_child;
};

struct node* newNode(int data)
{
    struct node * node = (struct node *)malloc(sizeof(struct node));

    if (NULL != node)
    {
        node -> data = data;
        node -> left_child  = NULL;
        node -> right_child  = NULL;
    }
    else
    {
        perror("ERROR");
    }

    return (node);
}


int main()
{
    struct node * root = newNode(99);
    root->left_child = newNode(99);
    root->right_child = newNode(99);

    root->left_child->left_child = newNode(99);                 //||
    root->left_child->left_child->left_child = newNode(1);      //|| 
    root->left_child->left_child->right_child = newNode(1);     //||

    root->left_child->right_child = newNode(99);                //||
    root->left_child->right_child->left_child = newNode(1);     //||
    root->left_child->right_child->right_child = newNode(0);    //||
    
    root->right_child->left_child = newNode(99);                //||
    root->right_child->left_child->left_child = newNode(0);     //||
    root->right_child->left_child->right_child = newNode(0);    //||

    root->right_child->right_child = newNode(99);               //||
    root->right_child->right_child->left_child = newNode(0);    //||
    root->right_child->right_child->right_child = newNode(0);   //||

    int a,b,c;

    printf("[Enter the Input to traverse]");
    printf("\n[Enter A]:");
    scanf("%d", &a );
    printf("[Enter B]:");
    scanf("%d", &b );
    printf("[Enter C]:");
    scanf("%d", &c );

//  printf("input in 111:%d",root -> left_child -> right_child -> right_child-> data  );
    if(a == 1)
    {
        if(b == 1)
        {
            if(c == 1)
            {
                printf("\nData at %d%d%d: %d\n", a, b, c, root -> left_child -> left_child -> left_child -> data);
            }
            else if(c == 0)
            {
                printf("\nData at %d%d%d: %d\n", a, b, c, root -> left_child -> left_child -> right_child -> data);
            }
            else
            {
                printf("\nNO DATA is present in %d%d%d\n", a, b, c);
            }
        }
        else if(b == 0)
        {
            if(c == 1)
            {
                printf("\nData at %d%d%d: %d\n", a, b, c, root -> left_child -> right_child -> left_child -> data);
            }
            else if(c == 0)
            {
                printf("\nData at %d%d%d: %d\n", a, b, c, root -> left_child -> right_child -> right_child -> data);
            }
            else
            {
                printf("\nNO DATA is present in %d%d%d\n", a, b, c);
            }

        }
        else
        {
            printf("\nNO DATA is present in %d%d%d\n", a, b, c);
        }

    }
    else if(a == 0)
    {

        if(b == 1)
        {
            if(c == 1)
            {
                printf("\nData at %d%d%d: %d\n", a, b, c, root -> right_child -> left_child -> left_child -> data);
            }
            else if(c == 0)
            {
                printf("\nData at %d%d%d: %d\n", a, b, c, root -> right_child -> left_child -> right_child -> data);
            }
            else
            {
                printf("\nNO DATA is present in %d%d%d\n", a, b, c);
            }
        }
        else if(b == 0)
        {
            if(c == 1)
            {
                printf("\nData at %d%d%d: %d\n", a, b, c, root -> right_child -> right_child -> left_child -> data);
            }
            else if(c == 0)
            {
                printf("\nData at %d%d%d: %d\n", a, b, c, root -> right_child -> right_child -> right_child -> data);
            }
            else
            {
                printf("\nNO DATA is present in %d%d%d\n", a, b, c);
            }

        }
        else
        {
            printf("\nNO DATA is present in %d%d%d\n", a, b, c);
        }

    }
    else
    {
        printf("\nNO DATA is present in %d%d%d\n", a, b, c);
    }
}
