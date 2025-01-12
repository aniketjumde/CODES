#include<stdio.h>

int main()
{
    char opr;
    printf("Find a Area of (Rectangle(R),Circle(C),Triangle(T)):");
    scanf("%c", &opr);

    if(opr == 'R') //rectangle
    {
        printf("Give the Informaton about Rectangle :\n");

        int length,breadth,area_rectangle;

        printf("Enter the length:");
        scanf("%d", &length);
        
        printf("Enter the breadth:");
        scanf("%d", &breadth);

        area_rectangle= length * breadth ;

        printf("Area of rectangle is %d",area_rectangle);
    }
    else if(opr == 'C') // circle
    {
        printf("Give the Informaton about Circle :\n");

        const float PI=3.14;
        float radius,area_circle;

        printf("Enter the radius:");
        scanf("%f", &radius);

        area_circle = PI * radius * radius ;

        printf("Area of Circle is %f",area_circle);

    }
    else if(opr == 'T') // Triangle
    {
        printf("Give the Informaton about Triangle :\n");

        float base ,height,area_triangle;

        printf("Enter the base:");
        scanf("%f", &base);
    
        printf("Enter the height:");
        scanf("%f", &height);

        area_triangle = (float)1/2 * base * height ;

        printf("Area of triangle %f",area_triangle);

    }
    else
    {
        printf("Invalid operators:");
    }
}