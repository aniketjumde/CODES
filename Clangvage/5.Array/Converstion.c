/* Write a program which accepts a number and display its
binary,hexadecimal,octal */

#include<stdio.h>

void Decimal_to_Binary(int a[],int num)
{
    int i=0;
    int tnum;
    tnum=num;
    while(num>0)
    {
        a[i]=num%2;
        i++;
        num=num/2;
    }

    i--;

    printf("\n %d Decimal to Binary :",tnum);
    for( ; i>=0 ; i--)
    {
        printf("%d",a[i]);
    }
    printf("\n\n");
}

void Decimal_to_Octal(int a[],int num)
{
    int i=0;
    int tnum;

    tnum=num;

    while(num>0)
    {
        a[i]=num%8;
        i++;
        num=num/8;

    }

    i--;

    printf("%d Decimal to Octal is : ",tnum);
    for( ; i>=0 ; i--)
    {
        printf("%d",a[i]);
    }

    printf("\n\n");
}

void Decimal_to_Hexadecimal(int a[],int num)
{
    int i;
    int tnum;

    tnum=num;
    i=0;

    while(num>0)
    {
        a[i]=num%16;
        i++;
        num=num/16;

    }

    i--;

    printf("%d Decimal to Hexadecimal is :",tnum);
    for( ; i>=0 ; i--)
    {
        if(a[i]<9)
        {
            printf("%d",a[i]);
        }
        else
        {
            printf("%c",a[i]+55);
        }
    }
    printf("\n\n");
}

int main()
{
    int a[100];
    int num;

    printf("Enter the number from converstion :");
    scanf("%d",&num);

    Decimal_to_Binary(a,num);
    Decimal_to_Octal(a,num);
    Decimal_to_Hexadecimal(a,num);
}