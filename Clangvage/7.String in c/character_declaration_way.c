#include<stdio.h>

int main()
{
    char a[5]="Good";
    char ch[]={'A','N','I','K','E','T','\0'}; //  \0 is ending of string
    char *P="Jumde";

    printf("%s \n",a);//Good
    printf("%d \n",sizeof(a));//5   size of array is length in + one(because end of string are present)
    printf("%s \n",ch); //ANIKET 
    printf("%d \n",sizeof(ch));//7
    printf("%s \n",P);
    printf("%d \n",sizeof(P));

    return 0;
}