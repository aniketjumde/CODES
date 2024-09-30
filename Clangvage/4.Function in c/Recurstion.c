/* When  function call itself again and again directly or indirectly is called as Recursive Function */

#include<stdio.h>

void display()
{
    printf("Hello My name is ANIKET \n");

    display();    // call itself
}

int main()
{
    display();

    printf("Byeee !!!!!!!!!!!!\n");
}