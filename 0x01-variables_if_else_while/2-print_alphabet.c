#include <stdio.h>

int main(){

    char letter = 'a';
    while ( letter <= 'z'){
        //printf("%c", letter);
        putchar(letter);
        letter++;
    }
    putchar('\n');
    return 0;
}