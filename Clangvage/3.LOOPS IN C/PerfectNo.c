/* Write a program whether Given number is perfect or Not
6=1,2,3   1+2+3=6
*/

#include<stdio.h>

int main()
{
    int num,sum;
    printf("Enter the number :");
    scanf("%d",&num);

    sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }

    if(num==sum)
    {
        printf("%d is a perfect number",num);

    }
    else
    {
        printf("%d is  Not a perfect number ",num);
    }

    return 0;
}