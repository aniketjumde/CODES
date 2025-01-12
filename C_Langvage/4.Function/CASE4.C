/* Write a program to check it even or not */

#include<stdio.h>

int is_even(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,ans;
    
    printf("Enter the number :");
    scanf("%d",&n);

    ans=is_even(n);

    if(ans==1)
    {
        printf("It is Even Number \n");
    }
    else
    {
        printf("It is not Even Number");
    }

    return 0;


}