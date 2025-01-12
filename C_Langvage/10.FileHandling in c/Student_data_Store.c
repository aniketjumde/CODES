#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int roll_no;
    char name[50];
    float per;
};

int main()
{
    int n;
    FILE *fp;
    fp=fopen("Studentdata.txt","a");
    if(fp==NULL)
    {
        printf("Unable to open file...! ");
        exit(0);
    }
    printf("How many student data you want to store :");
    scanf("%d",&n);

    struct Student s[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the roll number :");
        scanf("%d",&s[i].roll_no);
        getchar();
        printf("Enter the name :");
        gets(s[i].name);
        printf("Enter the percentage :");
        scanf("%f",&s[i].per);

        fprintf(fp,"%d %s %0.2f \n",s[i].roll_no,s[i].name,s[i].per);
    }

    fclose(fp);
    printf("All data stored succesfully in file \" Studentdata.txt \" ");

    return 0;
}