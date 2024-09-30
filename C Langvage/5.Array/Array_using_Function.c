#include<stdio.h>
/* Prototype */
void accept(int [],int);
void display(int [],int);
void reverse_display(int [],int );
void odd_value(int [],int );
void even_value(int [],int n);
void at_Even_position(int [],int );
void positive_number_in_Array(int [],int );
void negative_number_in_Array(int [],int );
void display_max(int [],int );
void display_min(int [],int );


void accept(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the data :");
        scanf("%d",&a[i]);
    }
    printf("\n\n");
}

void display(int a[],int n)
{
    int i;
    printf("Array :");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}
void reverse_display(int a[],int n)
{
    int i;
    printf("Reverse Array :");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}

void odd_value(int a[],int n)
{
    int i;
    printf("odd value in Array :");
    for(i=0;i<n;i++)
    {
        if(a[i]%2 !=0 && a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");
}

void even_value(int a[],int n)
{
     int i;
    printf("Even value in Array :");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");
}

void at_Odd_position(int a[],int n)
{
    int i;
    printf("Value at odd positin :");
    for(i=0;i<n;i++)
    {
        if(i%2 !=0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");
}

void at_Even_position(int a[],int n)
{
    int i;
    printf("Value at Even positin :");
    for(i=0;i<n;i++)
    {
        if(i%2 ==0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");
}

void positive_number_in_Array(int a[],int n)
{
    int i;
    printf("Positve number from in Array :");
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");
}

void negative_number_in_Array(int a[],int n)
{
    int i;
    printf("Negative  number from in Array :");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");
}

void display_max(int a[],int n)
{
    int i;
    int max;
    max=a[0];
    printf("Maximum number in Array :");
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {

            max=a[i];
        }
    }
    printf("%d ",max);
    printf("\n\n");
}

void display_min(int a[],int n)
{
   int i;
   int min;
   min=a[0];
   printf("Minimal element in array :");
   for(i=0;i<n;i++)
   {
     if(min>a[i])
     {
       min=a[i];
     }
   }
   printf("%d",min); 
}

int main()
{
    int a[20];
    int n;

    printf("How many number :");
    scanf("%d",&n);

    accept(a,n);
    display(a,n);
    reverse_display(a,n);
    odd_value(a,n);
    even_value(a,n);
    at_Odd_position(a,n);
    at_Even_position(a,n);
    positive_number_in_Array(a,n);
    negative_number_in_Array(a,n);
    display_max(a,n);
    display_min(a,n);

    return 0;
}