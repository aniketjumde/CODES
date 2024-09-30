#include<stdio.h>

int main()
{
    int n,i,j,sp;
    printf("Enter the value of row and colum:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(sp=1;sp<=(n-i);sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");

        }
        printf("\n");
    }
}

/*

    *
   * *
  * * *
 * * * *
* * * * *



*/