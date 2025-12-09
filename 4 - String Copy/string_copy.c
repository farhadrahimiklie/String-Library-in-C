#include "string_copy.h"

void String_Copy_Library(char source[], char destination[]){
    // source "Farhad" 
   //  destination[20]
   int index = 0;
   while (*source != '\0')
   {
    destination[index] = *source;
    index++;
    source++;
   }
}