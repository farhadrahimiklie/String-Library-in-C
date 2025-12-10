#include <stdio.h>
#include "string_copy_number.h"
 
int main()
{
    char source[] = "Farhad Rahimi klie";
    char destination[25];
    int length = 5;
    Copy_String_By_Number(source, destination, length);
    printf("Destination Value is : %s \n", destination);
    return 0;
}