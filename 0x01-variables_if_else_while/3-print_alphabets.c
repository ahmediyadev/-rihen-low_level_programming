#include <stdio.h>
#include <ctype.h>

int main(){

    char letter = 'a';
    while ( letter <= 'z'){
        //printf("%c", letter);
        putchar(toupper(letter));
        letter++;
    }
    putchar('\n');
    return 0;
}