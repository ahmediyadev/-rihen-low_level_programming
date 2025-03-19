#include <stdio.h>
#include "main.h"

char *_strstr(char *haystack, char *needle){
    while(*haystack){
        for(int i=0; needle[i]; i++){
            if( *haystack == needle[0]){
                return haystack;
            }
            haystack++;
        }
    }
    return ("\0");
}