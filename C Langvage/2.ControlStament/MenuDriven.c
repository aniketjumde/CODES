#include<stdio.h>

int main()
{
    int num;
    char ch;

    printf("Enter the number:");
    scanf("%d",&num);

    getchar(); //To removing remaining '\n' from buffer

    printf("Enter the character:");
    scanf("%c",&ch);

    printf("Number :%d \n",num);
    printf("Character :%c \n",ch);

    return 0;
}