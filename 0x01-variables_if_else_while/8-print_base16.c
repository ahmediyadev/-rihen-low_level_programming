#include <stdio.h>

int main(){
    int number;
    char letter;
    for(number = 0; number < 10; number++){
        putchar((number%10)+'0');
    }
    for(letter = 'a';letter <='f'; letter++){
        putchar(letter);
    }

    putchar('\n');
    return 0;
}