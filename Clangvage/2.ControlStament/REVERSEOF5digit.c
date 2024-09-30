#include<stdio.h>

int main()
{
    int n;
    int d1,d2,d3,d4,d5;
    int reverse_digit;
    printf("Enter the five digit number :");
    scanf("%d", &n);

    printf("Five digit number is : %d",n);

    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d5=n%10;

    reverse_digit=d1*100000+d2*10000+d3*1000+d4*100+d5*10;

    printf("Reverse digit is %d ",reverse_digit);

    return 0;
}