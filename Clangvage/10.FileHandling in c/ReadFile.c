/* Write a program to read file information */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char filename[20];
    char ch;

    printf("Enter the File name :");
    gets(filename);

    fp=fopen(filename,"r");

    if(fp==NULL)
    {
        printf("Unable to open file %c: ",filename);
        exit(0);
    }


    printf("\nFile Containt : \n");
    printf("----------------------\n");
    while(1)
    {
        ch=fgetc(fp);

        if(ch==EOF)
        {
            break;
        }

        printf("%c",ch);

    }

    fclose(fp);
    
    return 0;
}