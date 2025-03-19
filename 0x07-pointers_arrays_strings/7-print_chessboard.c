#include <stdio.h>
#include "main.h"

void print_chessboard(char (*a)[8]){
    for(int i=0; a[i][7]; i++){
        for(int j=0; j<8; j++){
            putchar(a[i][j]);
        }
        putchar('\n');
    }
}