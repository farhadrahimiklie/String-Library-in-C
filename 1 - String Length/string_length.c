#include "string_length.h"

int Return_String_Length(char str[]){
    int index = 0;
    while (*str != '\0')
    {
        index++;
        str++;
    }
    return index;
}