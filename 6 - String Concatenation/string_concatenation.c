#include "string_concatenation.h"

void string_concatenation(char first[], char second[]){
    while (*first != '\0')
    {
        first++;
    }
    while (*second != '\0')
    {
        *first = *second;
        second++;
        first++;
        *first = '\0';
    }
    
    
}