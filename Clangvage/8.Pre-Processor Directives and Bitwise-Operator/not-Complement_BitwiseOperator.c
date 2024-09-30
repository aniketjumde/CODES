#include<stdio.h>

int main()
{
    int x,y,ans;

    printf("Enter the first number :");//3
    scanf("%d",&x);

    ans= ~x;  //1  bytes memory = 8 bits
                // 3  x = 0 0 0 0 0 0 1 1
                
                //   ~x = 1 1 1 1 1 1 0 0
                // ans =  128 64 32 16 8 4 0 0
                //ans=1 

    printf("Bitwise of ~ : %d ",ans);

    return 0;
}