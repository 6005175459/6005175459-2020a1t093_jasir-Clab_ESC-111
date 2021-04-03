#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float area,radius,l,b,side,perimeter;
    int choice;
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("Select your Choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("You have chosen Area and circumfrence of Circle\n");
        printf("Enter the radius\n");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        perimeter=3.14*2*radius;
        printf("Area of Circle is %.2f\nCircumfrence of Circle is %f\n",area, perimeter);
        break;
    case 2:
        printf("You have chosen Area and perimeter of Rectangle\n");
        printf("Enter length and breadth\n");//
        scanf("%f%f",&l,&b);
        area=(l*b);
        perimeter=2*(l+b);
        printf("Area of Rectangle= %.2f\nPerimeter of Rectangle= %f\n",area, perimeter);
        break;
    case 3:
        printf("You have chosen Area and perimeter of Square\n");
        printf("Enter value of side\n");
        scanf("%f",&side);
        area=side*side;
        perimeter=4*side;
        printf("Area of Square= %.2f\nPerimeter of Square= %f\n",area,perimeter);
        break;
    default:
        printf("Sorry, Invalid Choice\n");
    }
    return 0;
}
