/* Write a program to printf sum of first 'n' numbers */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,sum;

    printf("Enter the number:");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Wrong Input:Negative number is not allowed");
        exit(0);
        
    }
    
    sum=0;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum is upto %d : %d",n,sum);

    return 0;
}