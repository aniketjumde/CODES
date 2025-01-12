#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f=NULL;
    char filename[20];
    printf("Enter the file name :");
    gets(filename);

    f=fopen(filename,"r");

    if(f==NULL)
    {
        printf("Unable to open file : %s ",filename);
        exit(0);
    }

    //LOGIC write

    fclose(f);
    printf("ok,Work is done !!");
    return 0;
}