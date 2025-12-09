#include <stdio.h>
#include <stdbool.h>
#include "string_character_matching.h"

int main()
{
    char name[] = "Farhad Rahimi Klie";
    char target = 'g';
    bool result = Match_Two_Characters(name, target);
    printf("Two Characters Matched Result : %d \n", result);
    return 0;
}