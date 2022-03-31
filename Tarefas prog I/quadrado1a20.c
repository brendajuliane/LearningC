#include <stdio.h>
//Programa que imprime o quadrado de todos os números de 1 a 20, sendo um por linha

int main() {
    int n;
    for (n=1; n <= 20; n++) {
        printf("%d\n", n*n);
    }
    return 0;
}