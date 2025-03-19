#include "main.h"
#include <stdio.h>

int main(void){
    int a,b;
    a=5; b=6;
    printf("%d * %d = %d",a, b, mul(a, b));
    return 0;
}