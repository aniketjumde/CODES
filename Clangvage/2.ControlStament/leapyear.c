#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if((n%4==0 && n%100!=0) || n%400==0)
    {
        printf("%d is a leaf year",n);
    }
    else
    {
        printf("%d is a not leaf year",n);
    }
    return 0;
}