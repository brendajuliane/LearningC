#include <stdio.h> //programa que printa o maior e menor número de um vetor

void ordena(int *v, int t);

int main() {
    int t, i;
    scanf("%d", &t); //tamanho do vetor
    int v[t];
    
    for(i=0; i<t; i++) {
        scanf("%d", &v[i]);
    }
    ordena(v, t);
    printf("maior valor: %d\n", v[t-1]);
    printf("menor valor: %d\n", v[0]);
    
    return 0;
}
void ordena(int *v, int t) {
    int n=0, j=0, k=0;
    for(j=t; j>0; j--) {
        for(k=0; k<j; k++) {
            if((v[k] > v[k+1]) && ((k+1) < j)) {
                n = v[k];
                v[k] = v[k+1];
                v[k+1] = n;
            }        
        }
    }
}