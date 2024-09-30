#include<stdio.h>
int main()
{
    char ch,small;
    printf("Enter the character:");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
    {
        small=ch+32;
        printf("Capital letter : %c   Small letter : %c ",ch,small);
        
    }
    else if(ch>='a' && ch<='z')
    {
        int capital;
        capital=ch-32;
        printf("small letter : %c  capital letter : %c",ch,capital);
    }
    else
    {
        printf("It is not a letter ");
    }
    return 0;
}