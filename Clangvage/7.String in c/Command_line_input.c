#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    int i;
    if(argc==1)
    {
        printf("No values send form coomand line !");
        exit(0);
    }

    for(i=1;i<argc;i++)
    {
        printf("%s \n",argv[i]);
    }

    return 0;
}