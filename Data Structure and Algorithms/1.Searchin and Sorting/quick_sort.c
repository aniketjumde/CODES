#include<stdio.h>

void accept(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the data :");
        scanf("%d",&a[i]);
    }
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void partition(int a[],int n,int lb,int up)
{
    
}

int main()
{
    int n;
    printf("How many number you want to store :");
    scanf("%d",&n);

    int a[100];
    accept(a,n);
    printf("Array is :");
    display(a,n);
}