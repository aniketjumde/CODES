#include<stdio.h>

int main()
{
    int num,sum,rev,count;
    printf("Enter the number:");
    scanf("%d", &num);

    count=0;
    while(num>0)
    {
        rev=rev + num%10;
        num=num/10;

         count++;

    }
    printf("Number of digit is %d",count);

    return 0;
}