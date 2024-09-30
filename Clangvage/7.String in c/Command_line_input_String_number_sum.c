#include<stdio.h>
#include<stdlib.h>

int main(int agrc ,char *agrv[] )
{
    int sum;

    if(agrc==1)
    {
        printf("No input given for command line \n");
        exit(0);
    }

    sum=0;

    for(int i=1;i<agrc;i++)
    {
        sum=sum+atoi(agrv[i]);
    }

    printf("Sum of string is : %d",sum);

    return 0;
}