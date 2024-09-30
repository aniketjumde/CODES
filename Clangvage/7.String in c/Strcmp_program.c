#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30];
    char str2[30];

    printf("Enter the first string : ");
    gets(str1);

    printf("Enter the second string : ");
    gets(str2);

    if(strcmp(str1,str2)==0)
    {
        printf("%s & %s string are equal \n",str1,str2);
    }
    else if(strcmp < 0 )
    {
        printf("%s is less than %s \n",str1,str2);
    }
    else
    {
        printf("%s is greater then %s \n",str1,str2);
    }

    return 0;
}