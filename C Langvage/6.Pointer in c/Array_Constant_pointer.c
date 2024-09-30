#include<stdio.h>

int main()
{
    int a[5]={11,22,33,44,55};
    int *p=a;

    printf("Base Address : %lu",a);

    a++;    //Not allowed because base address canot be incress

    return 0;
}
/*
    OUTPUT:
            error: lvalue required as increment operand
*/