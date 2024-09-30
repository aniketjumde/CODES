/* Write a program whether Give number is prime or not */

#include<stdio.h>

int main()
{
    int num,i;

    printf("Enter the number :");
    scanf("%d",&num);

    for( i=2;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    if(i==num)
    {
        printf("%d is a Prime number",num);
    }
    else
    {
        printf("%d is a Not prime number",num);
    }

    return 0;
}
