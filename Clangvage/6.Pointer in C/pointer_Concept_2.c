#include<stdio.h>

int main()
{
    /*int  a;
    float b;
    char c;
    long int d;

    printf("Size of int is %d \n",sizeof(a));   //4
    printf("Size of float is %d \n",sizeof(b)); //4
    printf("Size of char is %d \n",sizeof(c));  //1
    printf("Size of long is %d \n",sizeof(d)); //4
    
    */
    // variable data type different other konta pan asel tari pan pointer cha
    // data type ha int cha asel and saglyan memory 4 cha bhetel

    int *a;
    float *b;
    char *c;
    long *d;

    printf("Size of int is %d \n",sizeof(a));   //4
    printf("Size of float is %d \n",sizeof(b)); //4
    printf("Size of char is %d \n",sizeof(c));  //4
    printf("Size of long is %d \n",sizeof(d)); //4
    
    return 0; 

}