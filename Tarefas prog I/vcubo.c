#include <stdio.h> //Armazena o cubo de um vetor em outro
#include <math.h>

void troca(int A[10], int B[10]);

int main() {
    int A[10], B[10], i;
    
    for(i=0; i<10; i++){
        scanf("%d", &A[i]);
    }
    troca(A, B);    
    for(i=0; i<10; i++){
        printf("%d\n", B[i]);
    }

    return 0;
}
void troca(int A[10], int B[10]) {
    int i, n=0;
    for (i=0; i<10; i++) { 
        n = A[i];
        B[i] = pow(n, 3);
    }
}