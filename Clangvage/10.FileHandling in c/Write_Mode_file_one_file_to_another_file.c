#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fpr=NULL;
    FILE *fpw=NULL;

    char Filenamer[100];
    char Filenamew[100];
    char line[199];

    printf("Enter the Read file name :");
    scanf("%s",&Filenamer);

    fpr=fopen(Filenamer,"r");

    if(fpr==NULL)
    {
        printf("Unable to open File :%s",Filenamer);
        exit(0);
    }

    printf("Enter the Write File name : ");
    scanf("%s",&Filenamew);

    fpw=fopen(Filenamew,"w");

     if(fpw==NULL)
    {
        printf("Unable to open File :%s",Filenamew);
        exit(0);
    }

    while(fgets(line,sizeof(line),fpr))
    {
        fputs(line,fpw);
    }
    fclose(fpr);
    fclose(fpw);
    return 0;
}