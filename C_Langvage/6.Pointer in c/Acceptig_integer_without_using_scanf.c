#include<stdio.h>

int main()
{
    int n;
    int *P=&n;

    printf("Enter the number :");
    scanf("%d",P);

    printf("%d ",n);

    return 0;
}