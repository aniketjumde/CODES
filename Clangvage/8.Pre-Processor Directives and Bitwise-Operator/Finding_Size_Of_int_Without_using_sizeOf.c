#include<stdio.h>

int main()
{
    char a=1;
    int cnt=1;

    while(a=a<<1)
    {
        cnt++;
    }
    printf("Size of bits = %d Bytes = %d \n",cnt,cnt/8);

    return 0;
}