#include<stdio.h>

void accept(int Matrix[100][100],int no_of_row,int no_of_colum)
{
    int i,j;
    for(i=0;i<no_of_row;i++)
    {
        for(j=0;j<no_of_colum;j++)
        {
            printf("Enter the Data :");
            scanf("%d",&Matrix[i][j]);
        }
    }
    printf("\n\n");
}

void display(int Matrix[100][100],int no_of_row,int no_of_colum)
{
    int i,j;
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

void Addition_of_Matrix(int Matrix1[100][100],int Matrix2[100][100],int no_of_row,int no_of_colum, int Sum[100][100])
{
    int i,j;
    for(i=0;i<no_of_row;i++)
    {
        for(j=0;j<no_of_colum;j++)
        {
            Sum[i][j]=Matrix1[i][j]+Matrix2[i][j];   
        }
        
    }
    
}

void Substraction_of_Matrix(int Matrix1[100][100],int Matrix2[100][100],int no_of_row,int no_of_colum, int Sub[100][100])
{
    int i,j;
    for(i=0;i<no_of_row;i++)
    {
        for(j=0;j<no_of_colum;j++)
        {
            Sub[i][j]=Matrix1[i][j]-Matrix2[i][j];   
        }
        
    }
   
}

int main()
{
    int Matrix1[100][100],Matrix2[100][100];
    int Sum[100][100],Sub[100][100];
    int no_of_row;
    int no_of_colum;

    printf("Enter the number of row :");
    scanf("%d",&no_of_row);

    printf("Enter the number of column :");
    scanf("%d",&no_of_colum);

    printf("Enter the First Matrix : \n");
    accept(Matrix1,no_of_row,no_of_colum);

    printf("Enter the second Matrix : \n");
    accept(Matrix2,no_of_row,no_of_colum);


    Addition_of_Matrix(Matrix1,Matrix2,no_of_row,no_of_colum,Sum);

    Substraction_of_Matrix(Matrix1,Matrix2,no_of_row,no_of_colum,Sub);

    printf("Sum :\n");
    display(Sum,no_of_row,no_of_colum);

    printf("Sub :\n");
    display(Sub,no_of_row,no_of_colum);

    return 0;
}
