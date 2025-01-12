#include<stdio.h>

int main()
{
    char s1[30];
    char s2[30]="BCS";
    int i;

    for(i=0;s2[i]!='\0';i++)
    {
        s1[i]=s2[i];
    }
    s1[i]='\0';

    printf("S1 :%s & S2 : %s \n",s1,s2);

    return 0;
}