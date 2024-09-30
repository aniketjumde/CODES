#include<stdio.h>

int main()
{
    int num,a,b,c;
    printf("Enter the number:");
    scanf("%d",&num);

    a=num/10000;
    b=(num/1000)%10;
    c=num%1000;
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    printf("c is %d\n",c);
    return 0;
}