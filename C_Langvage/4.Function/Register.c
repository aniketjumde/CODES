/* It is store to the variable in cpu register  */

#include<stdio.h>

int main()
{
    register int i;

    printf("%d",i); //memory allocated in cpu register
    //error: address of register variable 'i' requested
     //scanf("%d",&i);

    return 0;
}