#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _isupper(int c){
    if (isupper(c)){
        return (1);
    }else {
        return (0);
    }
    /*printf("%d",isupper(c));*/
}