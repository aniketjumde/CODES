/*Q. Accept the price of 1 USD is INR Indian Rupees.  
Write a program to take the amount in USD and convert it into INR. 
Example: 
If 1 USD is 82.10 then 5 USD is 410.50 INR */
#include<stdio.h>
int main()
{
    float rate,amount;
    int usd;
    printf("what is the price in 1 usd:");
    scanf("%f",&rate);
    printf("how many USD you have:");
    scanf("%d",&usd);

    amount=rate*usd;

    printf("The Ammount is %f",amount);
    
    return 0;
}