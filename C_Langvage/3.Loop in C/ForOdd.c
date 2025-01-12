/* Write a Program to printf all odd numbers till n */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;

    printf("Enter the Value of n th number:");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Wrong Input is Given !!! \n");
        exit(0);
    }

    printf("Odd number:");
    for(i=0;i<=n;i++)
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }
    }


    return 0;
}