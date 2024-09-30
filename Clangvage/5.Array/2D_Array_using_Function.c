#include<stdio.h>

void accept(int Matrix[100][100],int no_of_row,int no_of_column)
{
    int i,j;
    for(i=0;i<no_of_row;i++)
    {
        for(j=0;j<no_of_column;j++)
        {
            printf("Enter the data :");
            scanf("%d", &Matrix[i][j]);
        }
    }
    printf("\n\n");
}

void display(int Matrix[100][100],int no_of_row,int no_of_column)
{
    int i,j;
    for(i=0;i<no_of_row;i++)
    {
        for(j=0;j<no_of_column;j++)
        {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void Transpose_of_matrix(int Matrix[100][100],int no_of_row,int no_of_column)
{
    int i,j;
   for(j=0;j<no_of_column;j++)
    {
        for(i=0;i<no_of_row;i++)
        {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int main()
{
    int a[100][100];
    int m;
    int n;
    printf("Enter the row of matrix :");
    scanf("%d",&m);
    printf("Enter the column of matrix :");
    scanf("%d",&n);
    printf("Accept Matrix :\n");
    accept(a,m,n);
    printf("Display Matrix :\n");
    display(a,m,n);
    printf("Transpose of Matrix :\n");
    Transpose_of_matrix(a,m,n);
}