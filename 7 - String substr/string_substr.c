#include <stdio.h>
#include "string_substr.h"

char *string_substr(char str[], char substring[])
{
    int index = 0;
    while (*str != '\0')
    {
        while (*substring != '\0')
        {
            if (*str == *substring)
            {
                substring[index] = *str;
                index++;
            }else{
                return substring;
            }
            return substring;
        }
    }
}