/* Accept the number from user and chewck it is not amstrong or Not 
i.e 153= (1)^3 +(5)^3 + (3)^3
*/

#include<stdio.h>

int main()
{
    int num,tnum,sum,rev;

    printf("Enter the number :");
    scanf("%d",&num);

    tnum=num;
    sum=0;
    while(num>0)
    {
        rev = num % 10;
        sum = sum + (rev * rev * rev);
        num=num/10;
    }
    if(tnum==sum)
    {
        printf(" It is a Armstrong");
    }
    else
    {
        printf("It is not Armstrong number ");
    }
    return 0;
}