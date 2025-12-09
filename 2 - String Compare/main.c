#include <stdio.h>
#include <stdbool.h>
#include "string_compare.h"
 
int main()
{
    char first[] = "Far";
    char last[] = "Farh";
    bool result = Return_String_Compare_Matching(first, last);
    printf("Returning Compare Matching String is : %d \n", result);
    return 0;
}