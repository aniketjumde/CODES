/* Greatest Common Diviser   
example a=15 1 3 5 15
        b=21 1 3 7 21
    GCD is : 3
*/
#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter the first number :");
    scanf("%d",&num1);

    printf("Enter the second number :");
    scanf("%d",&num2);

    while(num1!=num2)
    {
        if(num1>num2)
        {
            num1=num1-num2;
        }
        else
        {
            num2=num2-num1;
        }
    }
    printf("Greates Common Diviser (GCD) : %d",num1);

    return 0;
}