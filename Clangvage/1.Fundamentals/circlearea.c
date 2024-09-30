/*Write a C program to calculate area and circumferance of circle*/
#include<stdio.h>
int main()
{
    const float PI=3.14;
    float radius,area ,circumferance;
    printf("Enter the value of radius:");
    scanf("%f",&radius);

    area=PI*radius*radius;
    printf("Area of circle is %.2f \n",area);

    circumferance=2*PI*radius;
    printf("Circumferance of circle is %.2f \n",circumferance);
    
    return 0;
}