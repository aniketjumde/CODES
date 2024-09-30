#include<stdio.h>

int main()
{
    int n,i;

    i=1;
    i++;

    printf("Enter the how many time loop are Run :");
    scanf("%d",&n);

    A: printf("Aniket !!!!!! \n");

    if(i<=n)
    {
        goto A;
    }

    return 0;
}