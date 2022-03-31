#include <stdio.h>
#include <math.h>
//Programa que calcula a área da circunferência

float area (float* r);
int main() {
    float r, A;

    printf("Digite o raio da circunferência: \n");
    scanf("%f", &r);

    A = area(&r); //calcula área
    printf("A área da circunferência é %.2f unidades quadradas\n", A);

    return 0;
}
float area (float* r) { //função que calcula área da circunferência
    float A;
    A = 3.14*(pow(*r, 2));
    return A;
}