#include<stdio.h>
#include<string.h>

int main()
{
    char name[10][30];//10 array size and 30 chracter in one string
    int n,i;

    printf("How many student :");
    scanf("%d",&n);

    getchar();
    for(i=0;i<n;i++)
    {
        printf("Enter student name :");
        gets(name[i]);
    }

    printf("All student information : \n");
    for(i=0;i<n;i++)
    {
       printf("%s \n",name[i]);   // 1d string is complete name is given
                                 // 2D string :given only one characteer in name
   
    }


    printf("Aniket name in your information \n");
    for(i=0;i<n;i++)
    {
    if(strstr(name[i],"Aniket") !=NULL)
    {
        printf("%s \n",name[i]);
    }
    }  
    return 0;
}