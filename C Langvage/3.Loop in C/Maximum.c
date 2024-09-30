/*Accept n number from user & display maximum form it */

#include<stdio.h>

int main()
{
    int num,x,sum;

    printf("Enter the nth number :");
    scanf("%d",&num);

    sum=0;
    for(int i=1;i<=num;i++)
    {
        printf("Enter the data : ");
        scanf("%d",&x);
        sum=sum+x;
    }
    printf(" Sum is : %d",sum);
}