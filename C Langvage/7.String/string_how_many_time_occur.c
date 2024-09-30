/* Write a program which accept large string and small string display occurence of small string
into a large string */

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30];
    char str2[30];
    int cnt;

    printf("Enter the large string :");
    gets(str1);

    printf("Enter the small string :");
    gets(str2);

    char *P;
    P=str1;
    cnt=0;

    while(1)
    {
        P=strstr(P,str2);
        if(P==NULL)
        {
            break;
        }
        cnt++;
        P++;
    }

    if(cnt==0)
    {
        printf(" string  occurance is not in large string \n");
    }
    else
    {
        printf("String is Occurace %d time \n",cnt);
    }
    return 0;
}