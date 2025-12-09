#include <stdio.h>
#include "string_copy.h"
 
int main()
{
    char source[] = "Farhad Rahimi Klie";
    char destination[25];
    String_Copy_Library(source, destination);
    printf("The Destination Value is : %s \n", destination);
    return 0;
}