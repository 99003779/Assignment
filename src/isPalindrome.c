#include"myutils.h"
int isPalindrome(int n) 
{
 int r,sum=0,temp;    

temp=n;    
while(n>0)    
{    
   r=n%10;    
   sum=(sum*10)+r;    
   n=n/10;    
}    
if(temp==sum)    
    return 0;    
else    
   return 1;
}