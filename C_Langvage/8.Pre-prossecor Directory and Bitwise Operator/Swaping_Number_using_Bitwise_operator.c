#include<stdio.h>

void Swapping(int num1,int num2)
{
    num1 = num1 ^ num2 ;
    num2 = num1 ^ num2 ;
    num1 = num1 ^ num2 ;


    printf("Before swapping num1 : %d & num2 : %d \n",num1 ,num2);

}

int main()
{
    int num1,num2;

    printf("Enter first number :");
    scanf("%d",&num1);

    printf("Enter Second number :");
    scanf("%d",&num2);

    printf("Before swapping num1 : %d & num2 : %d \n",num1 ,num2);

    Swapping(num1,num2);
}