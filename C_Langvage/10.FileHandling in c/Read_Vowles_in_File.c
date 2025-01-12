/* Write a proram to read vowels in File*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    char filename[10];
    char ch;

    printf("Enter the file name :");
    gets(filename);

    fp=fopen(filename,"r");

    if(fp==NULL)
    {
        printf("Unable to open file : %c \n",filename);
        exit(0);
    }
    int vowel_cnt;
    int cnt;

    cnt=0;
    vowel_cnt=0;

    while(1)
    {
        ch=fgetc(fp);

        if(ch==EOF)
        {
            break;
        }
        cnt++;

        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' )
        {
            vowel_cnt++;
        }
    }
    
    fclose(fp);

    printf("No.of.character in File : %d\n",cnt);
    printf("No of variable in File : %d\n",vowel_cnt++);

    return 0;
}