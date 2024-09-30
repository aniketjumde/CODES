/*Write a program which stores 'n' numbers into an array
Accept a number to search into an array.
if its found then return the position otherwase return -1 */

#include<stdio.h>
void accept(int [],int );
void display(int [],int );
int search_number(int [],int,int);

void accept(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter data :");
        scanf("%d",&a[i]);
    }
    printf("\n\n");
}

void display(int a[],int n)
{
    int i;
    printf("Array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}

int search_number(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[100];
    int n;
    int key;
    int position;

    printf("How many number :");
    scanf("%d",&n);

    accept(a,n);
    display(a,n);

    printf("Enter the searching number :");
    scanf("%d",&key);

    position=search_number(a,n,key);

    if(position==-1)
    {
        printf(" %d is not found in array",key);
    }
    else
    {
        printf(" %d is found at %d position in array",key,position);
    }

    return 0;

}