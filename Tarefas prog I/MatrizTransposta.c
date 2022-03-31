#include <stdio.h> //programa le uma matriz bi dimensional e imprime a matriz transposta na tela

int main () {
    int matriz[20][20];
    int nlin, ncol, l, c;

    scanf("%d %d", &nlin, &ncol);
    
    for (l=0; l<nlin; l++) { //ler elementos da matriz
        for (c=0; c<ncol; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    for (c=0; c<ncol; c++){ //Imprime a transposta
        for (l=0; l<nlin; l++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}