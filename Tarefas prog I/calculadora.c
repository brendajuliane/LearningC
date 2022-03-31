#include <stdio.h> //programa que funciona como uma calculadora simples

int main() {
    float n1, n2;
    char operador;
    scanf("%f%c%f", &n1, &operador, &n2);
    float resultado;

    if (operador == '+') {
        resultado = n1+n2;
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultado);
    }
    else {
        if (operador == '-') {
            resultado = n1-n2;
            printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultado);
        }
        else {
            if (operador == '*') {
                resultado = n1*n2;
            printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultado);    
            }
            else {
                if (operador == '/') {
                    resultado = n1/n2;
                    printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultado);
                }
                else {
                    printf("Operador invalido");
                }
            }
        }
            
    }
    return 0;
}