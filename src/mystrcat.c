// #include"mystring.h"
// char* mystrcat(char* s1, char* s2)
// {
//     // make ptr point to the end of destination string
//     char* ptr = s2 + mystrlen(s2);
 
//     // Appends characters of source to the destination string
//     while (*s1 != '\0')
//         *ptr++ = *s1++;
 
//     // null terminate destination string
//     *ptr = '\0';
 
//     // destination is returned by standard strcat()
//     return s2;
// }