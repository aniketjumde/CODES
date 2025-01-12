#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num % 2 ) // condition 1 aseel tar true and 0 asel tar false
    {
        printf("%d is odd number",num);
    
    }
    else
    {
        pSrintf("%d is even number",num);
    
    
    }
    return 0;
}