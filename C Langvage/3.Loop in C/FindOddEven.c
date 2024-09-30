/*Accept n number from user & display Even or odd number */

#include<stdio.h>

int main()
{
    int num,x,sum,Even_count,Odd_count;

    printf("Enter the nth number :");
    scanf("%d",&num);

    sum=0;
    Even_count=0;
    Odd_count=0;
    for(int i=1;i<=num;i++)
    {
        printf("Enter the data : ");
        scanf("%d",&x);
        if(x%2==0)
        {
            Even_count++;
        }
        if(x%2 !=0)
        {
            Odd_count++;
        }
    }
    printf(" No of Even number : %d \n",Even_count);
    printf("No of odd number : %d \n",Odd_count);

    return 0;
}