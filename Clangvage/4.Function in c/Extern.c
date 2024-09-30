/* What if both local and Global variabel have same 
name then how you can access Global variable in Function*/

#include<stdio.h>

int x=35;

int main()
{
    int x=23;
    printf("Local Variable X : %d \n",x);

    {
        extern int x; //Redeclaratin 
        printf("Global Variable X : %d \n",x);
    }

    return 0;
}