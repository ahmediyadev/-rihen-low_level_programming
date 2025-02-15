#include <stdio.h>

int main(void){
    char i;
    int j;
    long unsigned int li;
    long long int lli;
    float f;

    printf("Size of a char: %zu byte(s)\n", sizeof(i));
    printf(" Size of an int: %zu byte(s)\n",sizeof(j));
    printf(" Size of a long int: %zu byte(s)\n",sizeof(li));
    printf(" Size of a long long int: %zu byte(s)\n",sizeof(lli));
    printf(" Size of a float: %zu byte(s)\n",sizeof(f));
    return 0;
}