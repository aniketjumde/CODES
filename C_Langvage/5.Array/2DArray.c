#include<stdio.h>

int main()
{
    int Matrix[100][100];
    int m;
    int n;
    int i,j;

    printf("Enter the row of Matrix :");
    scanf("%d",&m);

    printf("Enter the column of Matrix :");
    scanf("%d",&n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element of matrix (%d,%d) : ",i,j);
            scanf("%d",&Matrix[i][j]);
        }
    }

    printf("Matrix : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Transpose of Matrix : \n");
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    return 0;
}