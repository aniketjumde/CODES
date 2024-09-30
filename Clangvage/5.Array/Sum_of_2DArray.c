#include<stdio.h>
int main()
{
    int Matrix1[100][100],Matrix2[100][100],Sum_of_Matrix[100][100];
    int m;
    int n;
    int i;
    int j;

    printf("Enter the row of Matrix :");
    scanf("%d",&m);

    printf("Enter the column of Matrix :");
    scanf("%d",&n);

    //int i,j;int Matrix1[m][n],Matrix2[m][n],Sum_of_Matrix[m][n];

    printf("Enter the Matrix1 Element : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element (%d,%d) : ",i,j);
            scanf("%d",&Matrix1[i][j]);
        }
    }
    printf("\n\n");

    printf("Enter the Matrix2 Element : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element (%d,%d) : ",i,j);
            scanf("%d",&Matrix2[i][j]);
        }
    }
    printf("\n\n");

printf(" Matrix1 : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",Matrix1[i][j]);
            
        }
        printf("\n");
    }
    printf("\n\n");

printf(" Matrix2 : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",Matrix2[i][j]);
            
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Sum of Matrix : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            Sum_of_Matrix[i][j]=Matrix1[i][j]+Matrix2[i][j];

            printf("%d ",Sum_of_Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}