#include<stdio.H>
int main()
{
    int num1,num2,num3;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the Second number:");
    scanf("%d", &num2);
    printf("Enter the third number:");
    scanf("%d", &num3);

    if(num1 > num2 && num3>num1)
    {
        printf("%d lies between %d and %d",num1,num2,num3);
    }
    else if(num2 > num1 && num3 > num2)
    {
         printf("%d lies between %d and %d",num2,num1,num3);
    }
    else if(num3 > num1 && num2>num3)
    {
         printf("%d lies between %d and %d",num3,num1,num2);
    }
    else
    {
         printf("does not lies between");
    }

    return 0;
}