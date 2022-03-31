#include <stdio.h> //programa que le o grau de um polinomio, seus coeficientes, um valor para x e calcula x
#include <stdlib.h>
#include <math.h>

int main() {
    float *v;
    float x, result=0; 
    int c, i, n=0; 
    
    scanf("%d", &c); //leitura do grau do polinomio
    v = (float*)malloc((c+1)*sizeof(float)); //alocação dinâmica para v
    
    for(i=0; i<=c; i++){ //leitura dos coeficientes
        scanf("%f", &v[i]);
    }
    scanf("%f", &x); //leitura de x

    for(i=0; i<=c; i++) { //calculando o polinomio
        result += v[i]*pow(x, n);
        n++;
    }
    printf("%.2f\n", result);
    free(v);

    return 0;
}