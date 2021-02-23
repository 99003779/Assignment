#include <stdio.h> 
#include<stdarg.h>
#include"myutils.h"

  
// Function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
void isPalindrome(char s1[]) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = strlen(s1) - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (s1[l++] != s1[h--]) 
        { 
            printf("%s is Not Palindrome", s1); 
            return; 
        } 
    } 
    printf("%s is palindrome", s1); 
} 
int isprime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}

int sum(int num_args, ...) {
   int val = 0;
   va_list ap;
   int i;

   va_start(ap, num_args);
   for(i = 0; i < num_args; i++) {
      val += va_arg(ap, int);
   }
   va_end(ap);
 
   return val;
}