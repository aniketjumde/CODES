#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the Character :");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
                printf("It is a Vowels");
                break;

        default:
             printf("It is not a Vowels");
             break;
    }
    return 0;
}