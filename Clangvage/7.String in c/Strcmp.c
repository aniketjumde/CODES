#include<stdio.h>
#include<string.h>

int main()
{
    //BCS BCS  = 0(equal)
    //BBA BCS  = -1 (BBA < BCS)
    //BCS BBA  = 1  (MBBS > BE )

    char S1[20];
    char S2[20];
    int l;
    
    printf("Enter the first string :");
    gets(S1);

    printf("Enter the second string :");
    gets(S2);

    l = strcmp(S1,S2);

    printf("String : %d ",l);

}