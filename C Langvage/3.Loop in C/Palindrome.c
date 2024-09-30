/* Accept  the number and check whethere It is Palindrome
(whethere both side are equal ) ie 1221=1221*/
#include<stdio.h>

int main()
{
    int num,rev,tnum;
    printf("Enter the number :");
    scanf("%d",&num);

    tnum=num;
    rev=0;
    while(num>0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    if(tnum==rev)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not palindrome\n");
    }
    return 0;

}