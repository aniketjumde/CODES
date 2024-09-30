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
    struct Student s;
    FILE *fp;
    char filename[20];
    int n;

    printf("Enter the File name you want to read :");
    scanf("%s",filename);

    fp=fopen(filename,"r");

    if(fp==NULL)
    {
        printf("%s Unable to open.....!",filename);
        exit(0);
    }

    while(1)
    {
        n = fscanf(fp,"%d %s %f\n",&s.roll_no,s.name,&s.per);

        if(n==-1)
        {
            break;
        }

        printf("%d %s %f \n",s.roll_no,s.name,s.per);

    }
   
    fclose(fp);


    return 0;
}