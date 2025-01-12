/* Write a c program which stores 'n' number into an array.
Accept a number to count occurence of that numbers into an array.*/

#include<stdio.h>
void accept(int [],int );
void display(int [],int );
int Number_Occurance(int [],int,int);

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

int Number_Occurance(int a[],int n,int key)
{
    int i;
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            
            cnt ++;
        }
    }

    return cnt;
}

int main()
{
    int a[100];
    int n;
    int key;
    int Count;

    printf("How many number :");
    scanf("%d",&n);

    accept(a,n);
    display(a,n);

    printf("Enter the searching number :");
    scanf("%d",&key);

    Count=Number_Occurance(a,n,key);

    printf("%d is found at %d times in array",key,Count);

   
    return 0;

}