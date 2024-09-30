#include<stdio.h>

int main()
{
    int a[5]={11,22,33,44,55};
    int *p=a;

    printf("Array :");
    for( p=a;p<=&a[4];p++)
    {
        printf("%d ",*p);
        
    }

    printf("\nReverse Array :");
    for( p=&a[4];p>=a;p--)
    {
        printf("%d ",*p);
    }

    return 0;
}