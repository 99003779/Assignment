 #include<stdio.h>
 #include"bitmask.h"
// Function to clear the kth bit of n 
int reset(int n, int k) 

{ n=n & (~0);
    return n;
} 
  