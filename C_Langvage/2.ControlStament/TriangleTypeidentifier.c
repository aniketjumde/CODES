#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first side of triangle:");
    scanf("%d",&a);

    printf("enter second side of triangle:");
    scanf("%d",&b);

    printf("Enter third side of triangle :");
    scanf("%d",&c);

    if(a==b && b==c )
    {
        printf("Triangle is equilaterial \n");
    }
    else if(a==b || b==c || a==c )
    {
        printf("Triangle is isosceles");
    }
    else
    {
        printf("It is Scalene");
    }
    return 0;
}