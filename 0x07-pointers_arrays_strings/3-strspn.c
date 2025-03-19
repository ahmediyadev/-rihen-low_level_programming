#include <stdio.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept){
    unsigned int i;
    unsigned int j;
    unsigned int conteur=0;
    for(i=0; accept[i]; i++){
        for(j=0; s[j]; j++){
            if(accept[i]==s[j]){
                conteur++;
            }
        }
    }
    return conteur;
}