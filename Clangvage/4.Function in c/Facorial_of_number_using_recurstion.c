#include<stdio.h>

int factorial(int num1)
{
    if(num1==0)
    {
        return 1;
    }
    else
    {
        return num1 *factorial(num1 - 1); 
    }
}

int main()
{
    int num1;
    int ans;
    printf("Enter the number :");
    scanf("%d",&num1);

    ans=factorial(num1);
    if(num1==1)
    {
        printf("Factorial of given number is %d \n",ans);
    
    }
    else
    {
        printf("Factorial of given number is %d \n",ans);
    }

    return 0;
}