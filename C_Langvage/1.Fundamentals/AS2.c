/*Q. Write a program to print a given number without its last digit. 
Example: If num=2397 then print 239 */

#include<stdio.h>
int main()
{
    int num, digit;

    printf("Enter the number :");
    scanf("%d",&num);

    digit= num/10;

    printf("The given number without last digit : %d \n",digit);

    return 0;
}