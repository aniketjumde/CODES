#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    char name[10][20];
   
    printf("How many citys :");
    scanf("%d",&n);

    for(i=0 ; i<n; i++)
    {
        printf("Enter city :");
        scanf("%s",&name[i]);
    }

    printf("Your city :\n");

    for(i=0 ; i<n ; i++)
    {
        printf("%s \n",name[i]);
    }

    return 0;
}