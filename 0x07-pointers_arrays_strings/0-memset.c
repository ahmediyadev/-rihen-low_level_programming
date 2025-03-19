#include <stdio.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n){
    char *memory = s;
    char val = b;
    for(int i=0; i=n; i++){
        *s = b; 
    }
    return(memory);
}