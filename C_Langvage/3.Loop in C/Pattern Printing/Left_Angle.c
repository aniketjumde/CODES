#include<stdio.h>

int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int sp=1;sp<=4-i;sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

   *
  **
 ***
****


*/