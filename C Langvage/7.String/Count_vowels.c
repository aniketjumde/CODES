#include<stdio.h>

void count_vowels(char str[])
{
    int vowels_count;

    vowels_count=0;

    for(int i=0 ; str[i]!='\0' ; i++)
    {

        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' )
        {   
            vowels_count++;
        }

    }

    printf("No.of.Count of Vowels is : %d",vowels_count);

}

int main()
{
    char str[30];

    printf("Enter the character :");
    gets(str);

    count_vowels(str);
}