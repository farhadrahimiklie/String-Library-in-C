#include "string_copy_number.h"

void Copy_String_By_Number(char source[], char destination[], int length){
    int index = 0;
    while (*source != '\0') // Farhad
    {
        if (index < length)
        {
            destination[index] = *source;
            index++;
            source++;
        }else{
            destination[index] = '\0';
            *source = '\0';
        }
    }
}
