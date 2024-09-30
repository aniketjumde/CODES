#include<stdio.h>
int main()
{
    int num1;
    printf("Enter the number :");
    scanf("%d",&num1);

    int ans;
    ans=num1%10;
    printf("%d",ans);

    return 0;
}