#include <stdio.h> 
#include <string.h>
//Programa que calcula o indice de massa corporal 

int main() {
    float imc;
    struct corpo {
        float altura;
        float peso;
        char nome[30];
    } pessoa;

    scanf("%f\n", &pessoa.altura);
    scanf("%f\n", &pessoa.peso);
    scanf("%c\n", pessoa.nome);

    imc = pessoa.peso/(pessoa.altura * pessoa.altura);
    printf("%.3f\n", imc);

    return 0;
}