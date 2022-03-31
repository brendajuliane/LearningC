#include <stdio.h>

int main() {
    int n;
    printf("Digite a quantidade de números que a sequência possui: ");
    scanf("%d", &n); //entrada do tamanho do vetor
    int v[n];
    float media, s=0;

    printf("Digite a sequência de números: ");
    for(int i=0; i<n; i++) { //leitura do vetor
        scanf("%d", &v[i]); 
    }
    for(int i=0; i<n; i++) { //soma dos elementos 
        s+= v[i];       
    }
    media = s/n; 

    printf("A média dos números da sequência é: %.2f\n", media);
    
    return 0;
}