#include <stdio.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n){
    while(n--){
        *dest++ = *src++;
    }
    return(dest);
}