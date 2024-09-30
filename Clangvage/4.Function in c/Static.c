
/*
NOTE: WITHOUT STATIC KEYWORD USE !!!!!!!!!!!!

#include<stdio.h>

void display()
{
    int i=1;

    printf("%d\n",i);

    i++;
}
int main()
{
    display();
    display();
    display();
}
    OUTPUT: 1 1 1

*/

# include<stdio.h>

void display()
{
    static int i=1;

    printf("%d ",i);

    i++;

}

int main()
{
    display();
    display();
    display();
}

//OUTPUT : 1 2 3