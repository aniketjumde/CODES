#include<stdio.h>
int addition_of_two_number(int * , int *);

int addition_of_two_number(int *x,int *y)
{
   int sum;

   sum = *x + *y ;

   return sum;
}

int main()
{
    int num1,num2,ans;

    printf("Enter the first number :");
    scanf("%d",&num1);

    printf("Enter the second number :");
    scanf("%d",&num2);

    ans=addition_of_two_number(&num1,&num2);

    printf("Sum is : %d",ans);
}