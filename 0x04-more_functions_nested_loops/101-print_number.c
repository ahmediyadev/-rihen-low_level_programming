#include <stdio.h>
#include "main.h"

void print_number(int n){
    if  (n<0){
        putchar('-');
        n=-n;
    }
    int unite = n%10;
    int dizaine =(n/10)%10;
    int centaine =(n/100)%10;
    int mill = (n/1000)%10;

    if( mill >0){
        putchar('0' + mill);
    }
    if(centaine > 0 || mill >0){
        putchar('0'+ centaine);
    }
    if(dizaine > 0 || centaine > 0 || mill >0){
        putchar('0'+ dizaine);
    }
    putchar('0'+ unite); vvvvvvvv
}