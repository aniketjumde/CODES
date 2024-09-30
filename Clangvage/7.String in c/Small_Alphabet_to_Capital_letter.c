#include<stdio.h>

int main()
{
    char str[300];
    
    printf("Enter the string :");
    gets(str);

  for(int i=0;str[i]!='\0';i++)
  {
      if(str[i]>='a' && str[i]<='z')
      {
        str[i]=str[i]-32;
      }
  }

  printf("Converted string : %s \n",str);

  return 0;
}