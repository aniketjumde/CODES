/* Write a program to printf factoral of a given number */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,i,ans;

    printf("Enter the number:");
    scanf("%d",&num);

    if(num<0)
    {
        printf("Wrong input Given !!! \n");
        exit(0);
    }
    

    ans=1;
    for(i=1;i<=num;i++)
    {
        ans=ans*i;
    }
    printf("Factorial is : %d",ans);
}