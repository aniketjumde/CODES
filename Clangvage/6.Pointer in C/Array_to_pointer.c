#include<stdio.h>

int main()
{
    int a[5]={11,22,33,44,55};
    int *P={a,a+1,a+2,a+3,a+4};

    printf("%lu %lu %lu %lu %lu",a,a+1,a+2,a+3,a+4);
    
    return 0;
}