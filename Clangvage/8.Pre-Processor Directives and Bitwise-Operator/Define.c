#include<stdio.h>
#define pi 3.14

int main()
{
    float r,area;

    printf("Enter the radius :");
    scanf("%f",&r);

    area = pi * r * r  ;    // background la pi cha jagi pi ch value replace hote example
                           // area = 3.14 * r * r 
    printf("Area is : %f",area);
    return 0;                          
}
