#include <stdio.h>
#include <stdbool.h>
#include "string_character.h"
 
int main()
{
    char first[] = "Far";
    char last[] = "Farh";
    bool result = Return_String_Character_Matching(first, last);
    printf("Returning Matching Character is : %d \n", result);
    return 0;
}