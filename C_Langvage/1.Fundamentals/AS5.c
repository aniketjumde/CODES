/*Q. Write a program to input a three-digit number and display the sum of the 
digits. 
Example: If num=425 then print 11*/
#include<stdio.h>
int main()
{
    int num,sum_of_digit;
    printf("Enter the number:");
    scanf("%d",&num);
    sum_of_digit=num%10 + (num/10)%10 + (num/100) ;
    printf("SUM of three digits is %d",sum_of_digit);
    return 0;
}