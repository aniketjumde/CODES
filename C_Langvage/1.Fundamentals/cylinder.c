/*Write a C program to Accept dimenstions  of a cylinder
and printf the surface area and volume.*/
#include<stdio.h>
int main()
{
    const float PI=3.14;
    float radius,height;
    float surface_area,volume;
    printf("Enter the radius of cylinder:");
    scanf("%f",&radius);
    printf("Enter the height of cylinder:");
    scanf("%f",&height);

    surface_area= 2*PI*radius*radius + 2*PI*radius*height;
    printf("Surface area of cylinder is %.2f \n",surface_area);

    volume=PI*radius*radius*height;
    printf("Volume of cylinder is %.2f \n",volume);

    return 0;
}