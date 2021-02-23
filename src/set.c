#include <stdio.h> 
  #include"bitmask.h"
// Function to set the kth bit of n 
int set(int n, int k) 
{  n=n | (1<<k);
    return n; 
} 

