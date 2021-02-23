#include<stdio.h>
#include"bitmask.h"
// Function to toggle the kth bit of n 
int flip(int n, int k) 
{ n=n^(1<<k);
    return n; 
} 