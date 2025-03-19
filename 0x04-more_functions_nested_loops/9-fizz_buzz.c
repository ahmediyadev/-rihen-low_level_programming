#include <stdio.h>
#include "main.h"

int main(void){
    int i;
    for(i=1; i<101; i++){
        if(i%3==0){
            printf("fizz");
            putchar(' ');
        }else if (i%5==0)
        {
            printf("buzz");
            putchar(' ');
        }else{
            printf("%d",i);
            putchar(' ');
        }
    }
    return 0;
}