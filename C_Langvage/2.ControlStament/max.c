#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the FIrst number:");
    scanf("%d",&num1);
    printf("Enter the Second number:");
    scanf("%d",&num2);

    if(num1 > num2)
    {
        printf("%d is maximun",num1);

    }
    else if(num1 == num2)
    {
        printf("Both numbers are equal");
    
    }
    else
    {
        printf("%d is maximum",num2);
    }

    return 0;
}