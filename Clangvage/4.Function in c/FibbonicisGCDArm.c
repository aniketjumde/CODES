#include<stdio.h>

void fabbonicis_series(int num)
{
    int f1,f2,f3;

    f1=1;
    f2=0;
    printf("Fibbonicis series :");
    for(int i=1;i<=num;i++)
    {
        f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
    }
}

void Greaest_common_diviser(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else if(b>a)
        {
            b=b-a;
        }
    }

    printf("GCD : %d \n",b);

}

int Armstrong_no(int num3)
{
    int tnum,rev ,sum;
    sum=0;
    tnum=num3;
    while(num3 > 0)
    {
        rev=num3%10;
        sum=sum+(rev*rev*rev);
        num3=num3/10;
    }
    if(tnum==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Palindrome(int num4)
{
    int rev,tnum;
    tnum=num4;
    rev=0;
    while(num4>0)
    {
        rev = rev * 10 + (num4 % 10);
        num4 = num4 / 10;

    }
    if(tnum==rev)
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
    int num;

    printf("How many terms are exicute : ");
    scanf("%d",&num);

    fabbonicis_series(num);

    printf(" \nFind out GCD : \n");
    int num1,num2;

    printf("Enter the first Number :");
    scanf("%d",&num1);

    printf("Enter the second number : ");
    scanf("%d",&num2);

    Greaest_common_diviser(num1 ,num2);

    int num3,ans;

    printf("Find Out Armstrong Number !!! \n");

    printf("Enter the third number : ");
    scanf("%d",&num3);

    ans=Armstrong_no(num3);

    if(ans==1)
    {
        printf("It is Armstrong Number !!!\n");
    }
    else
    {
        printf("It is Not Armstrong Number \n !!!");
    }

    int num4,palin;
    printf("Find out Palindrome : \n");
    printf("Enter the Forth Number :");
    scanf("%d",&num4);

    palin=Palindrome(num4);

    if(palin==1)
    {
        printf("%d is a palindrome \n",num4);
    }
    else
    {
        printf("%d is NOt a palindrome \n",num4);
    }
    return 0;
}