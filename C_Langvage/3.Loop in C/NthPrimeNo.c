/* Write a program whether Give number is prime or not 1 to 500 */

#include<stdio.h>

int main()
{
    int num,i;

    printf("Prime Number:");
    for(int num=1;num<=500;num++)
    {

    for( i=2;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    if(i==num)
    {
        printf("%d ",num);
    }
    
    }
    return 0;
}