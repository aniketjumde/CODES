/* Write a program which accepts a number and display its binary
   (19) : (10011)
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
        a[i]=num%2;
        i++;
        num=num/2;
    }

    i--;

    printf("Decimal to Binary is :");
    for( ; i>=0 ; i--)
    {
        printf("%d",a[i]);
    }

    return 0;   

}