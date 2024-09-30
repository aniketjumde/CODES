#include<stdio.h>
int main()
{
    int num1,num2,num3 ;
    printf("Enter the First number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number :");
    scanf("%d",&num3);

    if(num1 == num2 && num2 == num3 && num1==num3)
    {
        printf("%d %d %d are equal",num1,num2,num3);
    }
    else if(num1 >= num2 && num1>=num3)
    {
        printf("%d is greater than %d , %d",num1,num2,num3);
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        printf("%d is greater than %d , %d",num2,num1,num3);
    }
    else 
    {
        printf("%d is greater than %d , %d",num3,num1,num2);
    }

    return 0;

}