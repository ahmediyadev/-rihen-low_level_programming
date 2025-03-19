#include <stdio.h>


int main(){
    int a=5;
    char *s ="hello";
    int* ptr = &a;
    int** ptr1= &ptr;
    printf("valeur du pointeur:%p \n ", ptr);
    printf("valeur du pointeur:%p \n ", ptr1);
    printf("adresse de s:%s \n ", s);

}