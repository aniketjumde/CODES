#include<stdio.h>
#define sqr(x) x*x

int main()
{
    int a ,s;
    printf("Entre the number :");
    scanf("%d",&a);

    s=sqr(a);

    printf("SQUAR without using function but function call : %d",s);

    return 0;

}