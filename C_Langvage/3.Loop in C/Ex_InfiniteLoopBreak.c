   /* Write a program which accept any infinite number to add them 
      you have to stop when negative is given as input.  
   */

  #include<stdio.h>

  int main()
  {
    int sum,num;

    printf("Note: To stop Acceptin Input please enter any Negative Number : \n");

    sum=0;
    
    while(1)
    {
        printf("Enter the Number :");
        scanf("%d", &num);

        if(num<0)
        {
          break;
        }

        sum=sum+num;
    }

    printf("Addition is : %d \n",sum);
  }