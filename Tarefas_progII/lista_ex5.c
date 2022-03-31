#include <stdio.h>
//Programa que faz conversão entre temperaturas em celsius e fahrenheit

float FtoC(float* F);
float CtoF(float* C);

int main() {
    float tempC, tempF;
    //entradas
    printf("Digite o valor de uma temperatura em Celsius: ");
    scanf("%f", &tempC);
    printf("Digite o valor de uma temperatura em Fahrenheit: ");
    scanf("%f", &tempF);
    //saída
    printf("Conversões: \n");
    printf("A temperatura de %.1f grau Celsius corresponde a %.1f grau Fahrenheit", tempC, CtoF(&tempC)); //utilizo as funções de conversão
    printf("\nA temperatura de %.1f grau Fahrenheit corresponde a %.1f grau Celsius\n", tempF, FtoC(&tempF));    
    
    return 0;
}
float FtoC(float* F) { //converte fahrenheit para celsius
    float C;
    C = (5*(*F-32))/9;
    return C;
}
float CtoF(float* C) { //converte celsius para fahrenheit
    float F;
    F = ((*C*9)/5) + 32;
    return F;
}