/* Write a program which accepts a number and display its octal
   (19) : (23)
*/

#include<stdio.h>

int main()
{
    int a[100];
    int num;
    int i;

    printf("Enter the number for converstion :");
    scanf("%d",&num);

    i=0;
    while(num>0)
    {
        a[i]=num%8;
        i++;
        num=num/8;
    }

    i--;

    printf("Decimal to Octal is :");
    for( ; i>=0 ; i--)
    {
        printf("%d",a[i]);
    }
    /*
    i--;

    while(i>=0)
    {
        printf("%d",a[i]);
        i--;
    }
    */

    return 0;
}