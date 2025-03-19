#include <stdio.h>
#include "main.h"

void print_triangle(int size){
    int i,j,k;
    for(i=0; i<size; i++){
        for(j=0; j<size-i-1; j++){
            putchar(' ');
        }
        for (int k = 0; k<=i; k++){
            putchar('*');
        }
        putchar('\n');
    }
}