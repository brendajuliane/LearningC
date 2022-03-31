#include <stdio.h>
//digita 20 notas e armazena no vetor, em seguida pede valores e indica se está ou não no vetor (para só com valor negativo)

int main() {
    float notas[20];
    float n;
    int p;

    for (p=0; p<20; ++p) { //pede valores e armazena no vetor
        scanf("%f", &notas[p]);
    }
    do {
        scanf("%f", &n); //pede um valor para verificar se existe num valor
        if (n>0) { //para verificar se n é positivo antes da busca
            for (p=0; (notas[p]!=n) && (p<20); ++p){} //para fazer a busca no vetor
            if (p<20) 
                printf("existe\n"); 
            else
                printf("nao existe\n");
        }
    } while (n>0);
    
    return 0;
}