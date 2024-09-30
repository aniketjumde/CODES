#include <stdio.h>// Recursive function to calculate nth Fibonacci number
int fibonacci(int n)
 {    // Base case: Fibonacci of 0 is 0    
 if (n == 0) 
 {        
    return 0;
 }  
   // Base case: Fibonacci of 1 is 1   
    else if (n == 1) 
    {        
        return 1;    
    }    // Recursive case: Fibonacci of n is Fibonacci of (n-1) + Fibonacci of (n-2)    
    else 
    {        
        return fibonacci(n - 1) + fibonacci(n - 2);    
    }
    
}

int main() 
{    int num;    printf("Enter a non-negative integer: ");    scanf("%d", &num);    if (num < 0) {        printf("Fibonacci sequence is not defined for negative numbers.\n");    } else {        int result = fibonacci(num);        printf("The %dth Fibonacci number is %d\n", num, result);    }    return 0;}