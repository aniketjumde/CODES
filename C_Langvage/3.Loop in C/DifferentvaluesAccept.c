#include<stdio.h>

int main()
{
    int i,n,m,sum;

    printf("How many Values:");
    scanf("%d", &n);
     
    sum=0;

    for(i=1 ;i<=n;i++)
    {
        printf("Enter the number :");
        scanf("%d",&m);

        sum=sum + m;
   
    }
    printf(" sum is %d",sum);
    return 0;
}