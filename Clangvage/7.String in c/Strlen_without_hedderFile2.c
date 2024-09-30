#include<stdio.h>

int mystrlen(char str[])
{
    int i;
    for( i=0;str[i]!='\0';i++); //Traveling an array

    return i;
}


int main()
{
    int cnt;
   
    char str[50];

    printf("Enter the string :");
    gets(str);

    cnt=mystrlen(str);

    printf("Length of string is :%d",cnt);

    
    return 0;
}