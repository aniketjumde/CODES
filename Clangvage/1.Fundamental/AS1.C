/*Q. Write a program to print unit digit of a given number. 
Example: If num=2397 then unit digit of a given number 7 */
#include<stdio.h>
int main()
{
    int num,unit_digit;
    
    printf("Enter the number :");
    scanf("%d",&num);

    unit_digit=num % 10;
    printf("Unit digit of given number is %d ",unit_digit);

    return 0;
} 