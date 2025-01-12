/* Write a program to check prime , perfect or Not */
#include<stdio.h>

int is_prime(int num)
{
    int i;
    for( i=2;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    if(i==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_perfect(int n)
{
    int i,sum;

    sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int num,ans;

    printf("Enter the number :");
    scanf("%d",&num);

   ans= is_prime(num);

   if(ans==1)
   {
        printf("%d is a prime number \n",num);
   }
   else
   {
        printf("%d is not a prime Number \n",num);
   }

   ans=is_perfect(num);

   if(ans==1)
   {
    printf("%d is a perfect number  \n",num);
   }
   else
   {
    printf("%d is Not Perfect Number \n",num);
   }

   return 0;
}