#include <stdio.h> 
#include"myutils.h"

  
// Function to find factorial of given number 
int factorial(int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
  