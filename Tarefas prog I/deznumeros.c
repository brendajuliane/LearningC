#include <stdio.h>
//Programa que lê 10 números e fala quantos são ímpares e quantos são pares

int main() {
    int n, p, i;
    p = 0;
    i = 0;

    do {
        scanf("%d", &n);
        if(n % 2 == 0)
            p++;
        else
            i++;
    } while ((p + i) <= 9);
    printf("%d pares, %d impares\n", p, i);
    
    return 0;
}