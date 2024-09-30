#include<stdio.h>
#define sqr(x) x*x

int main()
{
    int a ,b,s;
    printf("Entre the two number :");
    scanf("%d %d",&a,&b);
    

    s=sqr(a+b); // a + b * a + b

    printf("SQUAR without using function but function call : %d",s);

    return 0;

}