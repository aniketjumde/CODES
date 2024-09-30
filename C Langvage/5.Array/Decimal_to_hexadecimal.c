/* Write a program which accepts a number and display its hexadecimal
   (2669) : (A6D)
*/

#include<stdio.h>

int main()
{
    int a[50];
    int num;
    int i;

    printf("Enter the number from converstion :");
    scanf("%d",&num);

    i=0;

    while(num>0)
    {
        a[i]=num%16;
        i++;
        num=num/16;
    }

    i--;

    printf("Binary :");
    for( ; i>=0 ; i--)
    {
        if(a[i]<=9)
        {
            printf("%d",a[i]);
        }
        else
        {
            printf("%c",a[i]+55);
        }
    }

    return 0;   

}