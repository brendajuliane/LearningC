#include <stdio.h> //programa que ao digitar um número inteiro e precionar enter diz se é par ou ímpar

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("par\n");
    }
    else {
        printf("impar\n");
    }
    return 0;
}