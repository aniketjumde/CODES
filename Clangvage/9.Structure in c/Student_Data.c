#include<stdio.h>
#include<string.h>

struct Student
{
    int roll_no;
    char name[50];
    float per;
};

int main()
{
    struct Student S[20];
    int n,i;
    char str[20];

    printf("No.of student :");
    scanf("%d",&n);

    printf("Enter student Information : \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the roll number :");
        scanf("%d",&S[i].roll_no);
        getchar();
        printf("Enter the name :");
        gets(S[i].name);
        printf("Enter the percentage :");
        scanf("%f",&S[i].per);
    }

    printf("\n Search Student name :\n");
    getchar();
    printf("Enter the name :");
    gets(str);

    printf("\nStudent Information : \n");
    printf("Roll_No\t Name\t percentage \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t %s\t %f\n",S[i].roll_no,S[i].name,S[i].per);
    }

    printf("\nTooper  Student information :\n");
    for(i=0;i<n;i++)
    {
        if(S[i].per>=90)
        {
            printf("%d\t %s\t %f\n",S[i].roll_no,S[i].name,S[i].per);
        }
    }

    printf("\nFail  Student Information :\n");
    for(i=0;i<n;i++)
    {
        if(S[i].per<=40)
        {
            printf("%d\t %s\t %f\n",S[i].roll_no,S[i].name,S[i].per);
        }
    }

    printf("\nDistinct  Student Information :\n");
    for(i=0;i<n;i++)
    {
        if(S[i].per>=70 && S[i].per<90)
        {
            printf("%d\t %s\t %f\n",S[i].roll_no,S[i].name,S[i].per);
        }
    }

   
    printf("\nSearch Student information :\n");
    for(i=0;i<n;i++)
    {
        if(strstr(S[i].name,str))
        {
            printf("%d\t %s\t %f\n",S[i].roll_no,S[i].name,S[i].per);
        }
    }

    return 0;

}