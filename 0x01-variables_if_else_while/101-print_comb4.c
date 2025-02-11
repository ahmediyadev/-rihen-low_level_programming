#include <stdio.h>

int main(void){
    int i;
    int j;
    int c;
    for(i=0; i<=9; i++){
        for(j=1; j<=9; j++){
            for(c=2; c<=9; c++){
                putchar((i%10)+'0');
                putchar((j%10)+'0');
                putchar((c%10)+'0');
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}