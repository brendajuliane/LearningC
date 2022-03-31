#include <stdio.h> 
//Programa que calcula a média entre 5 números reais

int main() {
    float n[5];
    float media;
    //entradas
    printf("Digite uma sequência de 5 números: ");
    for (int i=0; i < 5; i++) { 
        scanf("%f", &n[i]);    
    }
    media = (n[0] + n[1] + n[2] + n[3] + n[4])/5;
    //saídas
    printf("A média entre os 5 números é %.1f\n", media);

    return 0;
}