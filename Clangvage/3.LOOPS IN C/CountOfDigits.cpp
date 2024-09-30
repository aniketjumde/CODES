#include<stdio.h>

int main()
{
    int num,count,rem;

    printf("Enter the number :");
    scanf("%d",&num);

    count=0;
    while (num>0)
    {
        rem=num%10;
        count=count;
        count++;
        num=num/10;
    }

    printf("Number of Digit is %d",count);

    return 0;

}