#include<stdio.h>

int main()
{
    int i=77;
    int *p=&i; //referancing

    printf("value of a i : %d \n",i);
    printf("Value at a p : %d \n ",*p);

    *p=20;  //Dereferancing

    printf("value of a i : %d \n",i);
    printf("Value at a p : %d \n ",*p);

    return 0;

}