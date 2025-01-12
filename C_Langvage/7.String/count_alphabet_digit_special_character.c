#include<stdio.h>

void  count_alphabeat_digit_specialCharacter(char str[])
{
    int capital_alphabet_cnt;
    int small_alphabet_cnt;
    int digit_cnt;
    int special_character_cnt;

    capital_alphabet_cnt=0;
    small_alphabet_cnt=0;
    digit_cnt=0;
    special_character_cnt=0;

    for(int i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            capital_alphabet_cnt++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            small_alphabet_cnt++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit_cnt++;
        }
        else
        {
            special_character_cnt++;
        }
    }
    printf("Capital Alphabet is %d \n",capital_alphabet_cnt);
    printf("Small alphabet is %d \n",small_alphabet_cnt);
    printf("digit is %d \n",digit_cnt);
    printf("Special character is %d \n",special_character_cnt);
}

int main()
{
    char str[30];

    printf("Enter the character :");
    gets(str);

    count_alphabeat_digit_specialCharacter(str);
    
    return 0;
}