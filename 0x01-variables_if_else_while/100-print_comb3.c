#include <stdio.h>

int main(void){
    int i;
    int j;
    for(i=0; i<=9; i++){
        for(j=1; j<=9; j++){
            printf("%d",i);
            printf("%d",j);
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}