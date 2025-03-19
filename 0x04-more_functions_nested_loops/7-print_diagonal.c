#include <stdio.h>
#include "main.h"

void print_diagonal(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                putchar('\\');
            }else{
                putchar(' ');
            }
        }
        putchar('\n');
    }
}