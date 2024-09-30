/* Write a Program to read Capital Alphabet,small,Digit,Special character in a File */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char Filename[20];
    char ch;
    int Capital_letter;
    int small_letter;
    int Digite_cnt;
    int specail_char_cnt;

    printf("Enter the File Name :");
    scanf("%s",Filename);

    fp=fopen(Filename,"r");

    if(fp==NULL)
    {
        printf("Unable to Open File : ",Filename);
        exit(0);
    }

    Capital_letter=0;
    small_letter=0;
    Digite_cnt=0;
    specail_char_cnt=0;

    while (1)
    {
        /* code */
        ch=fgetc(fp);

        if(ch==EOF)
        {
            break;
        }

        if(ch>='A' && ch<='Z')
        {
            Capital_letter++;
        }
        else if(ch>='a' && ch<='z')
        {
            small_letter++;
        }
        else if(ch>='0' && ch<='9')
        {
            Digite_cnt++;
        }
        else
        {
            specail_char_cnt++;
        }
    }
    
    fclose(fp);

    printf("No.of.Capital letter : %d\n",Capital_letter);
    printf("No.of.small letter : %d\n",small_letter);
    printf("No.of.Digits : %d\n",Digite_cnt);
    printf("No.of.Special char : %d\n",specail_char_cnt);

    return 0;
    
}