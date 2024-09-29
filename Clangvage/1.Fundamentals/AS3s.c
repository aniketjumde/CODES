/* Q. Write a program to make the last digit of a number stored in a variable as 
zero. 
Example - if x=7895 then make it x=7890 */
#include<stdio.h>
int main()
{
    int num,last_digit;
    printf("Enter the number:");
    scanf("%d",&num);

    last_digit=(num/10)*10;

    printf("the last digit of number stored is %d:",last_digit);

    return 0;
}