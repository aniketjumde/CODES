#include<stdio.h>

int main()
{
    int x,y,ans;

    printf("Enter the first number :");//3
    scanf("%d",&x);
    printf("Enter the second number :");//5
    scanf("%d",&y);

    ans= x|y;  //1  bytes memory = 8 bits
                // 3  x = 0 0 0 0 0 0 1 1
                // &
                //    y = 0 0 0 0 0 1 0 1
                // ans =  0 0 0 0 0 1 1 1;
                //                  4+2+1    
                //ans=7 

    printf("Bitwise of & : %d ",ans);

    return 0;
}