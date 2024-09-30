#include<stdio.h>
#include"Myfile.h"



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
