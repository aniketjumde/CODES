#include<stdio.h>

int main()
{
    char opr;
    int area_of_Rectangle;
    int breadth,length;
    float radius, area_of_circle;
    const float PI=3.14;
    int height,base;
    int area_of_triangle;
    printf("Find the area of rectangle(R),Circle(C),Triangle(T):");
    scanf("%c",&opr);

    switch(opr)
    {
        case'R':
                printf("Enter the length:");
                scanf("%d",&length);
                printf("Enter the breadth:");
                scanf("%d",&breadth);
                
                area_of_Rectangle=length * breadth ;
                printf("Area of circle is:%d",area_of_Rectangle);
                break;

        case 'C':
                printf("Entye the radius:");
                scanf("%f",&radius);
                area_of_circle=PI*radius*radius;
                printf("Area of circle is :%f",area_of_circle);         
                break;

        case 'T':
                printf("Enter the heght:");
                scanf("%d",&height);
                printf("Enter the base:");
                scanf("%d",&base);
                area_of_triangle=(float)1/2 * height * base ;
                printf("Area of Triangle is : %d",area_of_triangle);
                break;        
        default :
                 printf("Invalid Operation !!!");        
    }
    return 0;
}