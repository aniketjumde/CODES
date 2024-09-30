#include<stdio.h>
#include<stdlib.h>

int mystrlen(char str[])
{
    int cnt;
    cnt=0;
    for(int i=0;str[i]!='\0';i++)
    {
        cnt++;
    }

    return cnt;
}

int main()
{
    int cnt;
    int n;
    char *str;

    printf("How many character in a string :");
    scanf("%d",&n);

    str=(char *)malloc(n*sizeof(char));

    if(str==0)
    {
        printf("Unable to allocate memory :");
        exit(0);
    }
    
    getchar();

    printf("Enter the string :");
    gets(str);

    cnt=mystrlen(str);

    printf("Length of string is :%d",cnt);

    free(str);

    return 0;
} 