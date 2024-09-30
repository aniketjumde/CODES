#include<stdio.h>

int main()
{
    int a[5]={11,22,33,44,55};
    int *p=&a[1];
    int *q=&a[3];

    printf("Difference is : %d",q-p);
   

                        //q-p / (size of data type)

   return 0;

}