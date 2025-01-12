 /* Write a program whether Given number is perfect or Not 1 to 500
6=1,2,3   1+2+3=6
 */
#include<stdio.h>
int main()
{
    int num,sum;

    for(num=1;num<=50000;num++)
    {
    sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
    {
        printf("%d is a perfect number \n",num);

    }
    }
    return 0;
}