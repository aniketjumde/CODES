#include<stdio.h>

int display()
{
    printf("Before main");
    return 1;
}

int call = display();

int main()
{
    printf("After main");
    return 0;
}
// code run in cpp compiler