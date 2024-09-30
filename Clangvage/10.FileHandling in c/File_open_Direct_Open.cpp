/* How to open file and file name is direct declare.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;

    fp=fopen("a.txt","r");  // fp mhade file mhadlya data ch address yeil

    if(fp==NULL)
    {
        printf("Unable to open File.\n");
        exit(0);
    }

    // logic

    fclose(fp);
    printf("Ok,Work is done.!!\n");

    return 0;
}