#include"mystring.h"
char *mystrcpy (char * s1, char * s2)
 {
    //char s1[100]="program", s2[100];
    int i;

    for (i = 0; s1[i] != '\0'; ++i) 
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    return s2;
}