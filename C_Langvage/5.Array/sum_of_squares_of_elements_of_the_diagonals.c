#include<stdio.h>

void accept(int Matrix[100][100],int no_of_row,int no_of_colum)
{
    int i,j;
    printf("Enter the element of Matrix : \n");
    for(i=0;i<no_of_row;i++)
    {
        for(j=0;j<no_of_colum;j++)
        {
            printf("Enter the data :");
            scanf("%d",&Matrix[i][j]);
        }
    }
}

void display(int Matrix[100][100],int no_of_row,int no_of_colum)
{
    int i,j;
    printf("Matrix : \n");
    for(i=0;i<no_of_row;i++)
    {
        for(j=0;j<no_of_colum;j++)
        {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
}

void  sum_of_Square_Digonal_element(int Matrix[100][100],int no_of_row,int no_of_colum)
{
    int i,j;
    int sum;
    sum=0;
    for(i=0;i<no_of_row;i++)
    {
        for(j=0;j<no_of_colum;j++)
        {
            if(i==j)
            {
                sum +=Matrix[i][j] * Matrix[i][j];
            }
        }
    }
    printf("Sum of Square Digonal element is %d",sum);
    printf("\n\n");
}


int main()
{
    int Matrix[100][100];
    int no_of_row;
    int no_of_colum;

    printf("Enter the number of row :");
    scanf("%d",&no_of_row);

    printf("ENter the number of column:");
    scanf("%d",&no_of_colum);

    accept(Matrix,no_of_row,no_of_colum);
    display(Matrix,no_of_row,no_of_colum);
    sum_of_Square_Digonal_element(Matrix,no_of_row,no_of_colum);
    
}