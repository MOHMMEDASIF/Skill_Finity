/**********************************************************************************************************************

Title       : Tiles Cost calculator
Author      : MOHMMED ASIF.S
Date        : 7/12/2017
Description : Civil Engineer provides the below requirement
                
                a.He wants to enter measurements that he takes of the house.
                    the house can have floor shapes of rectangle, triangle
                    or circle. Based on the shape, he wants to calculate the area

                b.He wants to select the kind of tiles
                    -Mosaic             -> 100 rs.per sq.ft
                    -Vitrified tiles    -> 200 rs.per sq.ft
                    -Marble             -> 400 rs.per sq.ft
                    -Granite            -> 300 rs.per sq.ft

                c.Based on the tiles selection and measurement corresponding
                    to the shape of the floor, he wants the overall
                    cost estimate to be dispalyed


**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

float area_of_rectangle();
float area_of_triangle();
float area_of_circle();
float calculate_cost(float, int);

int main(int argc, char *argv[])
{
    system("clear");

    char __option;

    do
    {
        int choice, tile_type, rupees;
        float area;

        //prompt theuser for the area type
        puts("Enter the Area Type");
        puts(" 1.Rectangle");
        puts(" 2.Triangle");
        puts(" 3.Circle");
        printf("[Enter your choice]:");
        scanf("%d", &choice);

        //validate the user_area_type
        switch(choice)
        {
            case 1:
                area = area_of_rectangle(); 
                break;

            case 2:
                area = area_of_triangle();
                break;

            case 3:
                area = area_of_circle();
                break;

            default:
                puts("\n\nInvalid Entry..\nTry Again.......");
                exit(1);
                break;
        }

        //prompt the user for the tile-type
        puts("\nChoose the tile type");
        puts(" 1.Mosaic"); 
        puts(" 2.Vitrified tiles");
        puts(" 3.Marble");        
        puts(" 4.Granite");
        printf("[Enter Your Choice]:");
        scanf("%d", &tile_type);

        switch(tile_type)
        {
            case 1:
                rupees = 100;
                break;

            case 2:
                rupees = 200;
                break;

            case 3:
                rupees = 400;
                break;

            case 4:
                rupees = 300;
                break;

            default:
                puts("\n\nInvalid Entry..\nTry Again.......");
                exit(1);
                break;

        }

        printf("\nTotal cost for [%f]sq.ft area is [%f]", area, calculate_cost(area, rupees));


        printf("\n\nDO YOU WANT TO CONTINUE[Y/N]:");
        scanf("\n%c", &__option);

        system("clear");

    }while(__option == 'Y' || __option == 'y');

    return 0;
}

//return the area of the rectangle 
float area_of_rectangle()
{
    float length, width;

    printf("\nEnter the length of Rectangle:");
    scanf("%f", &length);

    printf("Enter the width of Rectangle:");
    scanf("%f", &width);

    return (length * width);
}

//return the area of the Triangle 
float area_of_triangle()
{

    float base, height;

    printf("\nEnter the base of the Triangle:");
    scanf("%f", &base);

    printf("Enter the height of the Triangle:");
    scanf("%f", &height);

    return (0.5 * base * height);
}

//return the area of the rectangle 
float area_of_circle()
{
    float pi = 3.14, radius;

    printf("\nEnter the radius of Circle:");
    scanf("%f", &radius);

    return (pi * radius * radius);
}

//return the area of the rectangle 
float calculate_cost(float area,int cost )
{
    return (area * cost);

}
