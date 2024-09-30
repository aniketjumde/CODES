/* Write a C program Which stores 'n' numbers into an array .
Accept a number to search and another number to replace .
Display array after replacemet */

#include<stdio.h>

void accept(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the Data :");
        scanf("%d",&a[i]);
    }
}

void display(int a[],int n)
{
    int i;
    printf("Array :");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}

void replace(int a[],int n,int key,int rep)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            a[i]=rep;
        }
    }
}
int main()
{
    int a[100];
    int n;
    int key;
    int rep;
    
    printf("How many number :");
    scanf("%d",&n);

    accept(a,n);
    display(a,n);

    printf("Enter the searching number :");
    scanf("%d",&key);

    printf("Enter the number for replace :");
    scanf("%d",&rep);

    replace(a,n,key,rep);

    printf("After repacement : \n");

    display(a,n);
}