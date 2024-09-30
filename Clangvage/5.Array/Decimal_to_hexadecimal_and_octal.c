/* Write a program which accepts a number and display its Octal and Hexadecimal
   
*/
#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d",&num);

    printf("octal :%o \n",num);
    printf("hexadecimal :%x \n",num);

    return 0;
}