/* Accept two numbers if the first number is greater that second then print the sum of these
   Two numbers ,otherwise print their diference*/

   #include<stdio.h>

   int main()
   {
     int a,b;
     
     printf("Enter the first number:");
     scanf("%d",&a);

     printf("Enter the Second number:");
     scanf("%d",&b);

     a>b ? printf("Sun is %d",a-b):printf("Difference is %d",a-b);

     return 0;
   }