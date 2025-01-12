#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char Filename[20];
    char ch;
    int line_cnt;
    int word_cnt;
    int letter_cnt;

    printf("Enter the Filename :");
    scanf("%s",Filename);

    fp=fopen(Filename,"r");

    if(fp==NULL)
    {
        printf("Unable To open File : %s",Filename);
        exit(0);
    }

    letter_cnt=0;
    word_cnt=0;
    line_cnt=0;

    while (1)
    {
        ch=fgetc(fp);

        if(ch==EOF)
        {
            break;
        }

        letter_cnt++;
        if(ch=='\n')
        {
            line_cnt++;
            word_cnt++;
        }
        else  if(ch==' '||ch=='\t')
        {
            word_cnt++;
        }
    }
    fclose(fp);    
    printf("No.of.Letter : %d\n",letter_cnt);
    printf("No.of.Word  :%d\n",word_cnt);
    printf("No.of.Line :%d\n",line_cnt);
    return 0;
}