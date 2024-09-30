#include<stdio.h>

int main()
{
    char str[30];
    char ch;
    int i,j;

    printf("Enter the string :");
    gets(str);

    i=0;
    j=strlen(str)-1;

    while(i<j)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;

        i++;
        j--;
        
    }

    printf("Reverse string : %s \n",str);

    return 0;
}