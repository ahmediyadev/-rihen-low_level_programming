#include "main.h"
#include <stdio.h>

void print_numbers(void){
    int i;
    for (i=0; i<10; i++){
        /*putchar('0'+i);*/
        /*putchar(i+'0');*/
        /*putchar(48+i);*/
        putchar(i+48);
    }
    putchar('\n');
}