#include <stdio.h>
//Programa que lê velocidade em km/h e transforma em m/s

int main() {
    int v;

    printf("Digite o valor da velocidade em km/h: \n");
    scanf("%d", &v);
    printf("%d km/h é igual a %.2f m/s\n", v, v/3.6);

    return 0;
}