/* Write a program to printf n natural number */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;

    printf("Enter the number:");
    scanf("%d",&num);

    if(num<=0)
    {
        printf("Wrong input is Given");
        exit(0);
    }

    printf("Natural number: ");
    for(int i=1;i<=num;i++)
    {
        printf("%d ",i);
    }

    return 0;
}