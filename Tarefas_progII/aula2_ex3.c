#include <stdio.h> 
//Programa que converte graus Celsius em Farenheit

int main() {
    int C, F;

    //entradas
    printf("Digite a temperatura em Celsius a ser convertida: ");
    scanf("%d", &C);
    F= ((9*C)/5)+32; //transformação
    printf("%d graus Celsius é %d graus Farenheit\n", C, F); //saída

    return 0;
}