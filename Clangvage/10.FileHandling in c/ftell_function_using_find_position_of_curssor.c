#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fpr;
    char filename[20];
    char ch;
    int position;

    printf("Enter the filename :");
    scanf("%s",&filename);

    fpr=fopen(filename,"r");

    if(fpr==NULL)
    {
        printf("unable to open file : %s",filename);
        exit(0);
    }

    position=ftell(fpr);// ftell is find postion of curser

    printf("Position of curser : %d\n",position);

    ch=fgetc(fpr);
    printf("Char : %c\n",ch);

    rewind(fpr); //rewind reset the curser as first(starting) position curser
    ch=fgetc(fpr);
    printf("Char : %c\n",ch);

    fclose(fpr);
    return 0;
}