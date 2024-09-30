#include<stdio.h>

int main()
{
    int i=33;
    int *p=&i;
    int **q=&p;

    printf("%d \n",i);
    printf("%d \n",*p);
    printf("%d \n",**q);

    **q=90;

    printf("%d \n",i);
    printf("%d \n",*p);
    printf("%d \n",**q);
    
    return 0;
}