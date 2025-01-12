#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    if(num==0)
    {
        printf("%d is Whole number",num);
    }
    else if(num>0) 
    {
        printf("%d is Whole  as well as Natural number",num);
    }
    else
    {
        printf("%d is not whole as well as Natural number",num);
    }
    return 0;

}