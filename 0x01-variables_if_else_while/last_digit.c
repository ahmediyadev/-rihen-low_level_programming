#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int n = rand();
    
    printf("le dernier chiffre de %d est %d\n",n, n % 10); 

   if (n>5){
        printf("is %d and is greater than 5", n);
    }
    else if (n=0){
        printf("is %d and is 0\n", n);
    }else{
         printf("is %d and is less than 6", n);
    }
    return 0;
}