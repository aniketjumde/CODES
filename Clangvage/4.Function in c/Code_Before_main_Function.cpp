#include<stdio.h>

int display()
{
    printf("Before main \n");
    return 1;
}

int call = display();

int main()
{
    printf("After main \n");
    return 0;
}
// code run in cpp compiler