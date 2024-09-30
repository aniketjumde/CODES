/*write program to average of three number*/
#include<stdio.h>
int main()
{
    float number1,number2,number3,average;
    printf("Enter the first number:");
    scanf("%f",&number1);
    printf("Enter the second number:");
    scanf("%f",&number2);
    printf("Enter the third number:");
    scanf("%f",&number3);
    average=( number1 + number2 + number3 ) / 3;
    printf("The Average of three number is %f",average);
    return 0;
}