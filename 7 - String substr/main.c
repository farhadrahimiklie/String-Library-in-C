#include <stdio.h>
#include "string_substr.h"
 
int main()
{
    char name[] = "Farhad Rahimi";
    char substring[] = "Raj";
    char* result = string_substr(name, substring);
    printf("Substring is this : %s \n", result);
    return 0;
}