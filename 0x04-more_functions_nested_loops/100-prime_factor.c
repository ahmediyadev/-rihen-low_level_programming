#include <stdio.h>

long long plus_grand_facteur_premier(long long n) {
    long long i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            n /= i;
        } else {
            i++;
        }
    }
    return n;
}

int main() {
    long long nombre = 612852475143;
    printf("Le plus grand facteur premier de %lld est %lld\n", nombre, plus_grand_facteur_premier(nombre));
    return 0;
}
