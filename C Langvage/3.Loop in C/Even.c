#include<stdio.h>

int main()
{
    int n,i;

    printf("Enter the number:");
    scanf("%d", &n);

    printf("Even Numbers :");
    for(i=0;i<=n;i++) //for(int i=0 ; i<=n ; i=i+2)
    {
        if(i%2==0)
        {
            printf(" %d ",i);
        }
    }
    return 0;
}