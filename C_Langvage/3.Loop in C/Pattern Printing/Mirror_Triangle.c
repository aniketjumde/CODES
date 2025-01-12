#include<stdio.h>

int main()
{
    int n,i,j,sp;

    printf("Enter the value of column and row:");
    scanf("%d",&n);

    for(i=4;i>=1;i--)
    {
        for(sp=1;sp<=(4-i);sp++)
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

* * * *
 * * *
  * *
   *
   
   
*/