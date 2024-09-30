#include<stdio.h>

int main()
{
    int a[100];
    int n;
    int i;
    int sum;
    int max;
    int min;

    printf("How many numbers: ");
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
    {
        printf("Enter the element of array :");
        scanf("%d",&a[i]);
    }

    printf("Element of Array :");   
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");

    printf("Element of array in Reverse Order :");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");

    printf("Even number of Array :");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");

    printf("Number From an Even  position :");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {    
            printf("%d ",a[i]);
            
        }
    }
    printf("\n\n");

    printf("Odd element of an Array : ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");

    printf("Number at a Odd position : ");
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");

    printf("Positive number from an Array :");
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");

    printf("Negative number from an Array :");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n\n");

    printf("Sum of an Array : ");
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);

    printf("\n\n");

    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Maximum element of an Array :%d",max);
    printf("\n\n");

    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("minimum element of an array :%d",min);
    printf("\n\n");
    return 0;
}   
