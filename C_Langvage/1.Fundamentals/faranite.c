/*Accept the temperature in fahrenheit and display in celsius*/
#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter the temperature in faherenheit: ");
    scanf("%f",&fahrenheit);

    celsius = 5.0/9*(fahrenheit-32)/9;   // fahrenheit to celsius formula
  //5/9 he doni integer ahe tya mule answer pan integer yeto ( zero yeto )
  // ]5.0/9 ek integer and float answer float  

    printf("The temperature in celsius is %.2f \n",celsius);

    printf("Enter the value of celsius:");
    scanf("%f",&celsius);
    fahrenheit=(9/5*celsius+32);
    printf("The temperature in fahrenheit is %.2f \n",fahrenheit);
    return 0;
}