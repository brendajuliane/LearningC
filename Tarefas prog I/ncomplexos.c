#include <stdio.h> //programa q calcula a soma e a multiplicação entre dois números complexos

void soma(int *z, int zi, int *w, int wi);
void mult(int *z, int zi, int *w, int wi);

int main() {
    int z, zi, w, wi;
    char op;

    scanf("%d %d %c %d %d", &z, &zi, &op, &w, &wi);
    if (op=='+') {
        soma(&z, zi, &w, wi);
    }
    else {
        mult(&z, zi, &w, wi);
    }
    printf("%d + %di\n", z, w);

    return 0;
}
void soma(int *z, int zi, int *w, int wi) {
    int rz = *z, rw = *w;
    *z = (rz + rw);
    *w = (zi + wi);
}
void mult(int *z, int zi, int *w, int wi) {
    int rz = *z, rw = *w;
    *z = ((rz*rw) - (zi*wi));
    *w = ((rz*wi) + (rw*zi));
}