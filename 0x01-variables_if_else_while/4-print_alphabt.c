#include <stdio.h>
#include <ctype.h>

int main(){

    char letter = 'a';
    while ( letter <= 'z'){
        //printf("%c", letter);
        putchar(tolower(letter));
        letter++;
    }
    putchar('\n');
    return 0;
}

//4-print_alphabt