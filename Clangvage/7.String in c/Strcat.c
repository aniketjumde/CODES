#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];

    printf("Enter first string :");
    gets(str1);

    printf("Enter second string :");
    gets(str2);

    printf("Before : S1 : %s & s2 : %s \n",str1,str2);

    strcat(str1,str2);

    printf("After : S1 : %s & s2 : %s \n",str1,str2);
    
    return 0;
}