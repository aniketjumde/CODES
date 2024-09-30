#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the Colour:");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'v':    
    case 'V':
             printf("It is rainbow colour");
             break;

    case 'i':
    case 'I':
             printf("It is rainbow colour");
             break;

    case 'b':
    case 'B':
             printf("It is rainbow colour");
             break;

    case 'g':
    case 'G':
             printf("It is rainbow colour");
             break;

    case 'y':
    case 'Y':
              printf("It is rainbow colour");
              break;

    case 'o':
    case 'O':
             printf("It is rainbow colour");

    case 'r':
    case 'R':
             printf("It is rainbow colour");
             break;                                                       
    
    default:
             printf("It is not a rainbow colour");
             break;
    }
    return 0;
}