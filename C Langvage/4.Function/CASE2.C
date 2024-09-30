/*  CASE 2: Function is  Taking input But not return any Value  */

#include<stdio.h>
void diaplY(int );   //Function Prototype

void display(int n)
{
    int i;

    for(i=1;i<=n;i++)
    {                                              //Function defination
        printf("Hurry.....I understand Function \n");
    }
}

int main()          //Entery point function
{
    int n;
    printf("Hello I am ANIKET JUMDE \n");

    printf("How many times are exiqute: ");
    scanf("%d",&n);

    display(n); // call by value

    printf("Bye \n");

    return 0;
}