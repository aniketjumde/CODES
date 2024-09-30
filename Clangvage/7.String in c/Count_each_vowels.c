#include<stdio.h>
#include<stdlib.h>

void count_of_vowel(char str[],int n)
{
    int a_cnt;
    int e_cnt;
    int i_cnt;
    int o_cnt;
    int u_cnt;

    a_cnt=0;
    e_cnt=0;
    i_cnt=0;
    o_cnt=0;
    u_cnt=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if( str[i]=='a' || str[i]=='A' )
        {
            a_cnt++;
        }
        else if(str[i]=='e' || str[i]=='E')
        {
            e_cnt++;
        }
         else if(str[i]=='i' || str[i]=='I')
        {
            i_cnt++;
        }
         else if(str[i]=='o' || str[i]=='O')
        {
            o_cnt++;
        }
         else if(str[i]=='u' || str[i]=='U')
        {
            u_cnt++;
        }          

    }

    printf("A occurs %d times \n",a_cnt);   
    printf("E occurs %d times \n",u_cnt);  
    printf("I occurs %d times \n",i_cnt); 
    printf("O occurs %d times \n",o_cnt); 
    printf("U occurs %d times \n",u_cnt);     
}

int main()
{
    int n;
    char *str;

    printf("How many character you want to store :");
    scanf("%d",&n);

    str=(char *) malloc(n*sizeof(char));

    printf("Enter the character :");
    scanf("%s",str);

    count_of_vowel(str,n);

    free(str);

    return 0;
}