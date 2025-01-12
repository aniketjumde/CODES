#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k;

    i=strcmp("BCS","BCS");
    
    j=strcmp("BCS","BMS");

    k=strcmp("MBBS","BAS");

    printf("i = %d j = %d k = %d \n",i,j,k);

    return 0;

}