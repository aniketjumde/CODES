/* Q. Write a program to input a number from the user and also input a digit.  
Append a digit in the number and print the resulting number.  
(Example - number=573 and digit=8 then the resulting number is 5738) */
#include<stdio.h>
int main()
{
    int num,digit,resulting_number;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the digits:");
    scanf("%d",&digit);

    resulting_number=num*10+digit;

    printf("the resulting number is :%d",resulting_number);
    return 0;
}