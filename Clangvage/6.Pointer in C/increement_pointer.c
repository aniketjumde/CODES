#include<stdio.h>

int main()
{
    int a[5]={11,22,33,44,55};
    int *P=a;

    printf("%lu ",P);
    printf("%d ",*P);

    P++;                    //p=p+1=P + 1 *(size of data_Type)
    printf("%lu ",P);
    printf("%d ",*P);

   return 0;

}