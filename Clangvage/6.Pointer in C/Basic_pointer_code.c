#include<stdio.h>

int main()
{
    int i=77;
    int *p=&i;

    printf("Value of i   : %d \n",i);
    printf("Addres of i  : %lu \n",&i); // & is address of i
    printf("Value at p   : %d \n",p);  // *  value at a pont 
    printf("Addres of p  : %lu \n",&p);// lu long unsined integer
    printf("Value at a p : %d \n",*p);
    return 0;
}