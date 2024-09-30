#include<stdio.h>

float Area_of_circle(float r)
{
    float area;
    area=3.14*r*r;

    return area;

}

float Circumferance_of_circle(float radius)
{
    float perimeter;
    perimeter=2 * 3.14 * radius;

    return perimeter;
}

int Area_of_rectangle(int l,int b)
{
    int area;
    area= l*b ;
    return area;
}

int perimeter_of_rectangle(int l,int b)
{
    int permi;
    permi= 2 *(l+b);

    return permi;
}


int main()
{
    float radius,area_circle,circle_circumferance;
    printf("Enter the radius :");
    scanf("%f", &radius);

    area_circle=Area_of_circle(radius);
    printf("Area of Circle is : %f \n",area_circle);

    circle_circumferance=Circumferance_of_circle(radius);
    printf("Circumferance of Circle is : %f \n",circle_circumferance);

    int l,b,area_reactangle;

    printf("Enter the lenght :");
    scanf("%d",&l);

    printf("Enter the breadth :");
    scanf("%d",&b);

    area_reactangle=Area_of_rectangle(l,b);
    printf("Area of Rectangle :%d \n",area_reactangle);

    int perimeter;
    perimeter=perimeter_of_rectangle(l,b);
    printf("Perimeter of Rectangle is : %d \n",perimeter);
    return 0;

}