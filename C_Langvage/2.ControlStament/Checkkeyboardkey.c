#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the character:");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
    {
        printf(" It is a Capital letter");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("it is Small letter");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("It is a Digit ");
    }
    else
    {
        printf("It is Special symbiol");
    }

    return 0;
}