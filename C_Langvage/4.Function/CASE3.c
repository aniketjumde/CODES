/*  CASE 1: Function is  Taking input and  return any Value  */

#include<stdio.h>
int add(int,int);

int add(int a,int b)    //Formal parameter
{
    int z;
    z=a+b;              //callae  ex add()

    return z;
}

int main()
{
    int a,b,ans;

    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);

    ans=add(a,b);   //actual parameter
                      //caller ex main()

    printf("Sum :%d",ans);                  
    return 0;
}