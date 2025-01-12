//Area of circle
// area=pi*r*r;
#include<stdio.h>
#define PI 3.14
int main()
{  
    float radius,area;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("Area of Circle is %.2f\n",area);
     printf("Area of Circle with radius %f is %.2f\n",radius,area);
    return 0;
}
