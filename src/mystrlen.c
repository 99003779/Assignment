#include <stdio.h>
#include<string.h>
#include"mystring.h"
int mystrlen(char *s1)
{
    int i, n = 0;
    
    for (i=0; s1[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}