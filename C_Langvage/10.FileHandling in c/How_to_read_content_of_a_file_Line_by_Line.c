#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char Filename[10];
    char line[200];

    printf("Enter the name of line :");
    scanf("%s",&Filename);

    fp=fopen(Filename,"r");

    if(fp==NULL)
    {
        printf("Unable to open File : %s",Filename);
        exit(0);
    }

    printf("Content of a File : \n");

    while(fgets(line,sizeof(line),fp))
    {
        printf("%s",line); //puts(line)
    }
    fclose(fp);

    return 0;
}