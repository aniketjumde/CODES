#include<stdio.h>
#include<string.h>

struct Student 
{
    int roll_no;
    char name[30];
    float per;
};

void accept(struct Student s[],int n)
{
    int i;
    printf("\nEnter Student Information :\n");
    for(i=0 ; i<n ; i++)
    {   
        printf("Enter the roll number :");
        scanf("%d",&s[i].roll_no);
        getchar();                                                
        printf("Enter the name :");
        gets(s[i].name);
        printf("Enter the percentage :");
        scanf("%f",&s[i].per);
    }
}

void display(struct Student s[],int n)
{
    int i;
    printf("\nStudent Information :\n");
    printf("Roll No\t Name\t percentage\n");
    for(i=0 ; i<n ; i++)
    {
       printf("%d\t %s\t %f\n",s[i].roll_no,s[i].name,s[i].per);
    }
}

void display_Topper_Student_information(struct Student s[],int n)
{
    int i;
    int max;
    printf("\nTopper Student Information\n");

    max=s[0].per;
    for(i=0 ; i<n ; i++)
    {
       if(max < s[i].per)
       {
         max = s[i].per;
       }
    }

    printf("Roll No\t Name\t percentage\n");
    for(i=0 ; i<n ; i++)
    {
       if( s[i].per == max)
       {
           printf("%d\t %s\t %f\n",s[i].roll_no,s[i].name,s[i].per);
       }
    }
}

void Search_name_by_student_data(struct Student s[],int n,char tname[])
{
    int i;
    printf("\nSearch name by Student data \n");
    printf("Roll No\t Name\t percentage\n");
    for(i=0;i<n;i++)
    {
        if(strstr(s[i].name,tname) != NULL)
        {
           printf("%d\t %s\t %f\n",s[i].roll_no,s[i].name,s[i].per);
        }
    }
}

void display_Failed_Student_information(struct Student s[],int n)
{
    int i;
    printf("\nFailed Student Information\n");
    printf("Roll No\t Name\t percentage\n");
    for(i=0 ; i<n ; i++)
    {
       if( s[i].per <40)
       {
         printf("%d\t %s\t %f\n",s[i].roll_no,s[i].name,s[i].per);
       }
    }
}

void display_Distinct_Student_information(struct Student s[],int n)
{
    int i;
    printf("\nDistinct Student Information\n");
    printf("Roll No\t Name\t percentage\n");
    for(i=0 ; i<n ; i++)
    {
       if( s[i].per >= 70)
       {
         printf("%d\t %s\t %f\n",s[i].roll_no,s[i].name,s[i].per);
       }
    }
}

int main()
{
    int n;

    printf("Enter the no.of.student :");
    scanf("%d",&n);

    struct Student s[n];

    accept(s,n);
    display(s,n);
    display_Topper_Student_information(s,n);
    display_Failed_Student_information(s,n);
    display_Distinct_Student_information(s,n);

    char tname[30];
    getchar();
    printf("Enter the Search name :");
    gets(tname);

    Search_name_by_student_data(s,n,tname);

    return 0;
}