/* Write a C program to calculate area and perimeter of rectangle  */
#include<stdio.h>
int main()
{
    float length,breadth,area ,perimeter;
    printf("Enter the length of rectangle:");
    scanf("%f",&length);
    printf("Enter the breadth of rectangle:");
    scanf("%f",&breadth);

    area=length*breadth;

    printf("Area of rectangle is %f\n",area);

    perimeter=2*(length+breadth);
    printf("perimetet of rectangle is %f\n",perimeter);
    return 0;
}