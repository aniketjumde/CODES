#include<stdio.h>
#include<string.h>

int main()
{
    int cnt;
    char str[30];

    printf("Enter the string :");
    gets(str);

    cnt=strlen(str);

    printf("Length of string :%d",cnt);

    return 0;
}