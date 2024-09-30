/* Accept the number from user and Reverse it */
#include<stdio.h>

int main()
{
    int num,rev,tnum;
    printf("Enter the number :");
    scanf("%d",&num);

    tnum=num;
    rev=0;
    while(num>0)
    {
        rev = rev*10 + (num % 10);
        num=num/10;

    }

    printf("Reverse number of %d is %d ",tnum,rev);

    return 0;

    
}
