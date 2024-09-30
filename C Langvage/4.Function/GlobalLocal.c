#include<stdio.h>

int j=11; //Global variable

void display()
{ 
    int i=45;

    printf("Local variable in Display i : %d \n",i); // Local variable access only this function
    //45
    printf("Global Variable in Display j : %d \n",j); //Global variable access in anyWhere in the program
    //11
    j++;

}
int main()
{
    int i=28;  // local variable

    printf("Global Variable in main() j : %d \n",j); //11

    display();

    printf("Global Variable in main() j : %d \n",j);  //12

    printf("Local variable in Main : %d \n",i);  //28



}