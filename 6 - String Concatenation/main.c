#include <stdio.h>
#include "string_concatenation.h"
 
int main()
{
    char first[15] = "Farhad ";
    char second[] = "Klie";
    string_concatenation(first, second);
    printf("after concatenation String is : %s \n", first);
    return 0;
}