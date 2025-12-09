#include <stdbool.h>
#include "string_compare.h"

bool Return_String_Compare_Matching(char first[], char last[]){
    while (*first != '\0' || *last != '\0')
    {
        if (*first == *last)
        {
            first++;
            last++;
        }else{
            return false;
        }
    }
    return true;
}