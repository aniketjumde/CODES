#include<stdio.h>

int Factorial_of_No(int n)
{
    int mul;

    if(n==0)
    {
        return 1;
    }
    mul=1;
    
    for(int i=1;i<=n;i++)
    {
        mul=mul*i;
    }

    return mul;
}

int main()
{
    int n,ans;

    printf("Enter the number :");
    scanf("%d",&n);

    ans=Factorial_of_No(n);

    printf("Factorial of %d is %d \n",n,ans);

}