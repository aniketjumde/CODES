#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30];
    char s2[30]="BCS";

    strcpy(s1,s2);

    printf("S1 : %s & S2 : %s \n",s1,s2);

    return 0;

}