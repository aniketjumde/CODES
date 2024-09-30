#include<stdio.h>

int main()
{
    int x,ans;

    printf("Enter the first number :");//3
    scanf("%d",&x);
    

    ans= x>>1;  //1  bytes memory = 8 bits
                // 5  x = 0 0 0 0 0 1 0 1
                // unit place is not shift, second place is shift,shift one point for 1
                // ans =  0 0 0 0 0 0 1 0;
                //ans=2
                //formula
                //num=num / 2 rest to 1

    //Left shift operator used as create Doubele value
    printf("Bitwise of & : %d \n",ans);

    ans = x>>2;

    // num=num * 2^2  =num * 4;
                                    // 5  x = 0 0 0 0 0 1 0 1
                                     // unit place is not shift, second place is shift,shift two point for 2
                                    // ans =  0 0 0 0 0 0 0 1;
                                    //    
    printf("Bitwise of & : %d ",ans);

    return 0;
}