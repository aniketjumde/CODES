#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fr;
    FILE *fw;
    char read_filename[20];
    char write_filename[20];
    char line[100];
    
    printf("Enter the file name to read :");
    scanf("%s",&read_filename);

    fr=fopen(read_filename,"r");
    
    if(fr==NULL)
    {
        printf("Unable to open File : %s",read_filename);
        exit(0);
    }

    printf("Enter the filename to read :");
    scanf("%s",&write_filename);

    fw=fopen(write_filename,"a");

    if(fw==NULL)
    {
        printf("Unable to open File :%s",write_filename);
        exit(0);
    }

    while(fgets(line,sizeof(line),fr))
    {
        fputs(line,fw);
    }

    fclose(fr);
    fclose(fw);

    printf("%s is copied into %s With present existing data ",read_filename,write_filename);

    return 0;
}