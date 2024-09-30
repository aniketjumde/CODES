#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,flag;
    char str[30];

    printf("Enter the string :");
    gets(str);

    i=0;
    j=strlen(str)-1;
    flag=1;

    while(i<j)
    {
        if(str[i] != str[j])
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }

    if(flag == 1)
    {
        printf("Given string is a palindrome! \n");
    }
    else
    {
        printf("Given string is not a palindrome! \n");
    }

    return 0;

}