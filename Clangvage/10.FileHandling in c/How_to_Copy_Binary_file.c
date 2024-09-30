//Binar files means without text files and all are binary file for ex .png , .movie, .mp4 ,
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fr;
    FILE *fw;
    char read_filename[20];
    char write_filename[20];
    char b;

    printf("Enter the file name to read :");
    scanf("%s",&read_filename);

    fr=fopen(read_filename,"rb");
    
    if(fr==NULL)
    {
        printf("unable to open file : %s",read_filename);
        exit(0);
    }

    printf("Enter the file name to copy :");
    scanf("%s",&write_filename);

    fw=fopen(write_filename,"wb");

    if(fw==NULL)
    {
        printf("unable to open file : %s",write_filename);
        exit(0);
    }

    int n;

    while(1)
    {
        n=fread(&b,sizeof(b),1,fr);

        if(n==0)
        {
            break;
        }

        n=fwrite(&b,sizeof(b),1,fw);
    }

    fclose(fr);
    fclose(fw);

    printf("%s files  copy int %s files",read_filename,write_filename);
    return 0;
}