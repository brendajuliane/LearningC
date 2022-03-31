#include <stdio.h> // programa que calcula o volume de uma esfera a partir de seu raio
#include <math.h>

double volume_esfera (float r) {    
    double v; 
    r = pow(r, 3);
    v = (4 * 3.14159 * r)/3;
    return v;
}

int main() {
    float r;
    double v;
    scanf("%f", &r);
    v = volume_esfera(r);
    printf("%.2lf\n", v);

    return 0;
}