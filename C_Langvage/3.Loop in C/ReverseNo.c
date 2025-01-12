#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;

    printf("Enter the number:");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("Invalid options !!!");
        exit(0);
    }

    printf("Reverse Numbers :");
    for(i=n;i>=1;i--) //for(int i=0 ; i<=n ; i=i+2)
    {
       
        printf(" %d ",i);
    
    }
    return 0;
}