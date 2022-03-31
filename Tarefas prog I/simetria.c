#include <stdio.h> //programa que lê uma matriz e diz se é simétrica (igual a transposta)
#include <stdlib.h>

int** alocar(int l, int c);

int main() {
    int l, c, i, j;
    int** m; 
    int** t; //transposta

    scanf("%d %d", &l, &c);
    
    m = alocar(l, c);
    t = alocar(c, l);

    for(i=0; i<l; i++) {  //leitura da matriz
        for(j=0; j<c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i<l; i++) {  //fazendo a transposta  
        for(j=0; j<c; j++) {
            t[j][i] = m[i][j];
        } 
    }
    for(i=0; i<l; i++) {
        for(j=0; j<c; j++) {
            if(m[i][j] != t[i][j]){
                printf("Nao eh simetrica\n");
                return 0;
            }
        }        
    }
    printf("Eh simetrica\n");

    free(m);
    free(t);      

    return 0;
}
int** alocar(int l, int c) {
    int i;
    int **m;
    m = (int **)malloc(l*sizeof(int*)); //alocação dinâmica para a matriz
    for(i=0; i<l; i++) {
        m[i] = (int *)malloc(c*sizeof(int));
    }
    return m;
}