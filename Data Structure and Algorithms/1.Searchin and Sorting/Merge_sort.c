// 15 20 40 50 5 10 30 35

#include<stdio.h>

void accept_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the data :");
        scanf("%d",&a[i]);
    }
}

void display_array(int a[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void merge(int a[],int lb,int mid ,int ub)
{
    int temp[100];
    int i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++,i++;
        }
        else
        {
            temp[k]=a[j];
            k++,j++;
        }
    }

    while(i<=mid)
    {
        temp[k]=a[i];
        k++;
        i++;
    }

    while(j<=ub)
    {
        temp[k]=a[j];
        k++;
        j++;
    }

    for(k=lb;k<=ub;k++)
    {
        a[k]=temp[k];
    }
}

void merge_sort(int a[],int lb,int ub)
{
    int mid;
    mid=(lb + ub)/2;
    merge_sort(a,lb,mid);
    merge_sort(a,mid,ub);
    merge(a,lb,mid,ub);

}

int main()
{
    int n;

    printf("How many number you want to store : ");
    scanf("%d",&n);

    int a[n];

    accept_array(a,n);
    printf("Array is : ");
    display_array(a,n);
    printf("After Merge sort is : ");
    merge_sort(a,0,n-1);
    display_array(a,n);
    
}