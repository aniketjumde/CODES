#include <stdio.h>

int factorial(int n) 
{
    if (n == 0) 
    {
        return 1; 
    } 
    else 
    {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() 
{
    int num;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num < 0) 
    {
        printf("Factorial of a negative number doesn't exist.\n");
    } else 
    {
        // Display the result
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}