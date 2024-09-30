#include<stdio.h>
#include<stdlib.h>

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
   int *P,m;
     
    printf("How many number want to store: ");
    scanf("%d",&n);
 
    P =(int *) malloc(n * sizeof(int)); //Allocated memory

    if(P==NULL)
    {
        printf("Unable to allocate memory.!");
        exit(0);
    }
    accept(P,n);
    printf("Array is : ");

    display(P,n);
    printf("\n");

    printf("How many number want to add :");
    scanf("%d",&m);

    P=(int *) realloc(P,n * sizeof(int) );

    accept(P,m);
    printf("Reallocate memory of array");
    printf("Array is : ");

    display(P,m);
    
    free(P);   //deallocate memory


    return 0;

}