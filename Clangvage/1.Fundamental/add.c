/*Addition of two number*/
#include<stdio.h>
int main()
{
    float number1,number2,ans;
    printf("Enter the first number:");
    scanf("%f",&number1);
    printf("Enter the two number:");
    scanf("%f",&number2);
    ans=number1+number2;
    printf("Addition of two number is %.2f",ans);
    return 0;
}