#include<stdio.h>
#include<string.h>

int main()
{
    char str[30];
    char revstr[30];
    int i,j;

    printf("Enter the first string : ");
    gets(str);

   i=0;
   j=strlen(str)-1;

   while(j>=0)
   {
     revstr[i]=str[j];
     j--;
     i++;
   }

    revstr[i]='\0';

    printf("Orignal string : %s \n",str);
    printf("Reverse string : %s \n",revstr);

    if(strcmp(str,revstr)==0)
    {
        printf("Given string %s is Palindrome !",str);

    }
    else
    {
        printf("Given string %s is Not Palindrome !",str);
    }

    return 0;
}