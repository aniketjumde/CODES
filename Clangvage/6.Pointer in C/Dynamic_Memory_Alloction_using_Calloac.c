#include<stdio.h>

void accept(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the data :");
        scanf("%d",&a[i]);
    }
}

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int n;
    int *a;
     
    printf("How many number want to store: ");
    scanf("%d",&n);

    a =(int *) malloc(n * sizeof(int)); //Allocated memory

    if(a==NULL)
    {
        printf("Unable to allocate memory.!");
        exit(0);
    }

    accept(a,n);

    printf("Array is : ");

    display(a,n);

    free(a);   //deallocate memory


    return 0;

}