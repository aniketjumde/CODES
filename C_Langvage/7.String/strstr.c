/* Write a program check whether "COMP" is present or not in given string */ 

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];

    printf("Enter the string :");
    gets(str1);

    printf("Enter the which string is find :");
    gets(str2);

    char *P;
    P=strstr(str1,str2);

    if(P == NULL)
    {
        printf("%s is not found in %s \n",str2,str1);
    }
    else
    {
        printf("%s is found in %s \n",str2,str1);
    }

    return 0;
}