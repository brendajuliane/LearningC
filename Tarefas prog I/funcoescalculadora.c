#include <stdio.h> //programa que simula o funcionamento de uma calculadora
#include <math.h>

float soma(float n1, float n2);
float sub(float n1, float n2);
float mult(float n1, float n2);
float expon(float n1, float n2);
float div(float n1, float n2);

int main() {
    char op;
    float n1, n2;
    float result;

    scanf("%f%c%f", &n1, &op, &n2);
    switch (op) {
        case '+':
            result = soma(n1, n2);
            printf("%.3f\n", result);
            break;
        case '-':
            result = sub(n1, n2);
            printf("%.3f\n", result);
            break;
        case '*':
            result = mult(n1, n2);
            printf("%.3f\n", result);
            break;
        case '^':
            result = expon(n1, n2);
            printf("%.3f\n", result);
            break;
        case '/':
            result = div(n1, n2);
            printf("%.3f\n", result);
            break;
    }
    return 0;
}

float soma(float n1, float n2) {
    float s;
    s = n1+n2;
    return s;
}
float sub(float n1, float n2) {
    float s;
    s = n1-n2;
    return s;
}
float mult(float n1, float n2) {
    float m;
    m = n1*n2;
    return m;
}
float expon(float n1, float n2) {
    float ex;
    ex = pow(n1, n2);
    return ex;
}
float div(float n1, float n2) {
    float d;
    d = n1/n2;
    return d;
}