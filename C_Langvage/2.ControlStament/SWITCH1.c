#include<stdio.h>

int main()
{
    int num1,num2;
    int add,sub,mul,div;

    printf("Enter the first number:");
    scanf("%d", &num2);

    printf("Enter the second number:");
    scanf("%d",&num1);

    getchar();

    char opr;

    printf("Enter the operation:");
    scanf("%c", &opr);

    switch(opr)
    {
        case'+':
                add = num1 + num2 ;
                printf("Addition is %d",add);
                break;

        case'-':    
                sub = num1 - num2 ;
                printf("Substraction is %d",sub);
                break;

        case'*': 
                mul = num1 * num2 ;
                printf("Multiplication is %d",mul);                                  
                break;

        case'/':    
                div=num1/num2;
                printf("Divistion  is %d",div);
                break;

        default :
                printf("Invalid Option!!!");                        
                  
    }

    return 0;
}