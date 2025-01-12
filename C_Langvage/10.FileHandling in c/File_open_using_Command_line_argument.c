#include<stdio.h>
#include<stdlib.h>

int main(int argc ,char *argv[])
{
    FILE *fp;

    fp=fopen(argv[1],"r");

     if(fp==NULL)
    {
        printf("Unable to open file : %s ",argv[1]);
        exit(0);
    }

    //Logic

    fclose(fp);
    printf("Ok,Work is done.... !!!");

    return 0;
}