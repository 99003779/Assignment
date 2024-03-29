#include<stdarg.h>
#include<stdio.h>
#include"myutils.h"
int vsum(int num_args, ...) 
{
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