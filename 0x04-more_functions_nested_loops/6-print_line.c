#include <stdio.h>
#include "main.h"

void print_line(int n){
    int i;
    for(i=0; i<n; i++){
        if(n!=0){
            putchar('_');
        }else{
            putchar('\n');
        }
    }
    putchar('\n');
}