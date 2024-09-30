/*Accept the String & Replace all 'i' by *, Space by '#'.
Display Converted String. */

#include<stdio.h>

void replace_by_character(char str[])
{
    for(int i=0 ; str[i] !='\0' ; i++)
    {
        if(str[i]=='i' || str[i]=='I')
        {
            str[i]='*';
        }
        else if(str[i]==' ')
        {
            str[i]='#';
        }
    }
    printf("%s",str);
}

int main()
{
    char str[30];

    printf("Enter the character :");
    gets(str);
    
    printf("Befor replace : %s \n",str);

    printf("After replace : ");
    replace_by_character(str);

    return 0;
}