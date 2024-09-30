#include<stdio.h>

int main()
{
    int a[5]={11,22,33,44,55};
    int *P=a; //*p=a[0]

    printf("%d %d %d %d %d \n",a[0],a[1],a[2],a[3],a[4]);
    printf("%d %d %d %d %d \n",P[0],P[1],P[2],P[3],P[4]);
    printf("%d %d %d %d %d \n",0[a],1[a],2[a],3[a],4[a]);
    printf("%d ",*P);

    return 0;

}