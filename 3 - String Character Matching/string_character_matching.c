#include <stdbool.h>
#include "string_character_matching.h"

bool Match_Two_Characters(char str[], char target){
    while (*str != '\0')
    {
        if (*str == target)
        {
            return true;
        }else{
           str++;
        }
    }
    return false;
}